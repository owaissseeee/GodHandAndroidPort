#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_00195068
// Address: 0x195068 - 0x1953c8
void func_00195068_0x195068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00195068_0x195068");
#endif

    switch (ctx->pc) {
        case 0x1950f0u: goto label_1950f0;
        case 0x195128u: goto label_195128;
        case 0x195148u: goto label_195148;
        case 0x19518cu: goto label_19518c;
        case 0x19519cu: goto label_19519c;
        case 0x1951b4u: goto label_1951b4;
        case 0x1951bcu: goto label_1951bc;
        case 0x1951c4u: goto label_1951c4;
        case 0x195268u: goto label_195268;
        case 0x195270u: goto label_195270;
        case 0x195288u: goto label_195288;
        case 0x1952fcu: goto label_1952fc;
        case 0x19530cu: goto label_19530c;
        case 0x195318u: goto label_195318;
        case 0x195328u: goto label_195328;
        case 0x195334u: goto label_195334;
        case 0x195360u: goto label_195360;
        default: break;
    }

    ctx->pc = 0x195068u;

    // 0x195068: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x195068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x19506c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19506cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195070: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x195070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x195074: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x195074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x195078: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x195078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19507c: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x19507cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x195080: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x195080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x195084: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x195084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x195088: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x195088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x19508c: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x19508cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x195090: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x195090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x195094: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x195094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x195098: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x195098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x19509c: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x19509cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x1950a0: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x1950a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x1950a4: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x1950a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
    // 0x1950a8: 0x1062004c  beq         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1950A8u;
    {
        const bool branch_taken_0x1950a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1950ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950A8u;
        // 0x1950ac: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1950a8) {
            ctx->pc = 0x1951DCu;
            goto label_1951dc;
        }
    }
    ctx->pc = 0x1950B0u;
    // 0x1950b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1950B0u;
    {
        const bool branch_taken_0x1950b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1950B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950B0u;
        // 0x1950b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1950b0) {
            ctx->pc = 0x1950C8u;
            goto label_1950c8;
        }
    }
    ctx->pc = 0x1950B8u;
    // 0x1950b8: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1950B8u;
    {
        const bool branch_taken_0x1950b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1950b8) {
            ctx->pc = 0x1950BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1950B8u;
            // 0x1950bc: 0x8e250b20  lw          $a1, 0xB20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2848)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1950E0u;
            goto label_1950e0;
        }
    }
    ctx->pc = 0x1950C0u;
    // 0x1950c0: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x1950C0u;
    {
        const bool branch_taken_0x1950c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1950C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950C0u;
        // 0x1950c4: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1950c0) {
            ctx->pc = 0x195238u;
            goto label_195238;
        }
    }
    ctx->pc = 0x1950C8u;
label_1950c8:
    // 0x1950c8: 0x1062004e  beq         $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1950C8u;
    {
        const bool branch_taken_0x1950c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1950CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950C8u;
        // 0x1950cc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1950c8) {
            ctx->pc = 0x195204u;
            goto label_195204;
        }
    }
    ctx->pc = 0x1950D0u;
    // 0x1950d0: 0x50620055  beql        $v1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1950D0u;
    {
        const bool branch_taken_0x1950d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1950d0) {
            ctx->pc = 0x1950D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1950D0u;
            // 0x1950d4: 0xa22002f4  sb          $zero, 0x2F4($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195228u;
            goto label_195228;
        }
    }
    ctx->pc = 0x1950D8u;
    // 0x1950d8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1950D8u;
    {
        const bool branch_taken_0x1950d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1950DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950D8u;
        // 0x1950dc: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1950d8) {
            ctx->pc = 0x195238u;
            goto label_195238;
        }
    }
    ctx->pc = 0x1950E0u;
label_1950e0:
    // 0x1950e0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1950E0u;
    {
        const bool branch_taken_0x1950e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1950E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950E0u;
        // 0x1950e4: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1950e0) {
            ctx->pc = 0x1950F4u;
            goto label_1950f4;
        }
    }
    ctx->pc = 0x1950E8u;
    // 0x1950e8: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x1950E8u;
    SET_GPR_U32(ctx, 31, 0x1950F0u);
    ctx->pc = 0x1950ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1950E8u;
    // 0x1950ec: 0x2604ee00  addiu       $a0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1950E8u, 0x1950F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1950F0u;
label_1950f0:
    // 0x1950f0: 0xae200b20  sw          $zero, 0xB20($s1)
    ctx->pc = 0x1950f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2848), GPR_U32(ctx, 0));
label_1950f4:
    // 0x1950f4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1950f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1950f8: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1950f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1950fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1950fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x195100: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x195100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x195104: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x195104u;
    {
        const bool branch_taken_0x195104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195104u;
        // 0x195108: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195104) {
            ctx->pc = 0x195118u;
            goto label_195118;
        }
    }
    ctx->pc = 0x19510Cu;
    // 0x19510c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x19510cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x195110: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x195110u;
    {
        const bool branch_taken_0x195110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195110u;
        // 0x195114: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195110) {
            ctx->pc = 0x19511Cu;
            goto label_19511c;
        }
    }
    ctx->pc = 0x195118u;
label_195118:
    // 0x195118: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19511c:
    // 0x19511c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19511cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195120: 0xc051f18  jal         func_147C60
    ctx->pc = 0x195120u;
    SET_GPR_U32(ctx, 31, 0x195128u);
    ctx->pc = 0x195124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195120u;
    // 0x195124: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x195120u, 0x195128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195128u;
label_195128:
    // 0x195128: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x195128u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x19512c: 0x24040177  addiu       $a0, $zero, 0x177
    ctx->pc = 0x19512cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 375));
    // 0x195130: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x195130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x195134: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x195134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195138: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x195138u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19513c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x19513cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x195140: 0xc0c194a  jal         func_306528
    ctx->pc = 0x195140u;
    SET_GPR_U32(ctx, 31, 0x195148u);
    ctx->pc = 0x195144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195140u;
    // 0x195144: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x195140u, 0x195148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195148u;
label_195148:
    // 0x195148: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x195148u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x19514c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19514cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x195150: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x195150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x195154: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x195154u;
    {
        const bool branch_taken_0x195154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195154u;
        // 0x195158: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195154) {
            ctx->pc = 0x195168u;
            goto label_195168;
        }
    }
    ctx->pc = 0x19515Cu;
    // 0x19515c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x19515cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x195160: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x195160u;
    {
        const bool branch_taken_0x195160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195160u;
        // 0x195164: 0x8c490008  lw          $t1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195160) {
            ctx->pc = 0x19516Cu;
            goto label_19516c;
        }
    }
    ctx->pc = 0x195168u;
label_195168:
    // 0x195168: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x195168u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19516c:
    // 0x19516c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19516cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195170: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x195170u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195174: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x195174u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195178: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x195178u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19517c: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x19517cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x195180: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x195180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x195184: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x195184u;
    SET_GPR_U32(ctx, 31, 0x19518Cu);
    ctx->pc = 0x195188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195184u;
    // 0x195188: 0x24060087  addiu       $a2, $zero, 0x87 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x195184u, 0x19518Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19518Cu;
label_19518c:
    // 0x19518c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19518cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195190: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x195190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195194: 0xc0c1880  jal         func_306200
    ctx->pc = 0x195194u;
    SET_GPR_U32(ctx, 31, 0x19519Cu);
    ctx->pc = 0x195198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195194u;
    // 0x195198: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x195194u, 0x19519Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19519Cu;
label_19519c:
    // 0x19519c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x19519cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1951a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1951a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1951a4: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x1951a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1951a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1951a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1951ac: 0xc0a48fa  jal         func_2923E8
    ctx->pc = 0x1951ACu;
    SET_GPR_U32(ctx, 31, 0x1951B4u);
    ctx->pc = 0x1951B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1951ACu;
    // 0x1951b0: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2923E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2923E8u, 0x1951ACu, 0x1951B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1951B4u;
label_1951b4:
    // 0x1951b4: 0xc065588  jal         func_195620
    ctx->pc = 0x1951B4u;
    SET_GPR_U32(ctx, 31, 0x1951BCu);
    ctx->pc = 0x1951B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1951B4u;
    // 0x1951b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195620u, 0x1951B4u, 0x1951BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1951BCu;
label_1951bc:
    // 0x1951bc: 0xc06de42  jal         func_1B7908
    ctx->pc = 0x1951BCu;
    SET_GPR_U32(ctx, 31, 0x1951C4u);
    ctx->pc = 0x1951C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1951BCu;
    // 0x1951c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x1951BCu, 0x1951C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1951C4u;
label_1951c4:
    // 0x1951c4: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x1951c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1951c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1951c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1951cc: 0xa6220af0  sh          $v0, 0xAF0($s1)
    ctx->pc = 0x1951ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2800), (uint16_t)GPR_U32(ctx, 2));
    // 0x1951d0: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x1951d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1951d4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1951d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1951d8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1951d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1951dc:
    // 0x1951dc: 0x96220af0  lhu         $v0, 0xAF0($s1)
    ctx->pc = 0x1951dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2800)));
    // 0x1951e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1951e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1951e4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1951e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1951e8: 0x1c600012  bgtz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1951E8u;
    {
        const bool branch_taken_0x1951e8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1951ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951E8u;
        // 0x1951ec: 0xa6220af0  sh          $v0, 0xAF0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2800), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1951e8) {
            ctx->pc = 0x195234u;
            goto label_195234;
        }
    }
    ctx->pc = 0x1951F0u;
    // 0x1951f0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1951f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1951f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1951f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1951f8: 0xa6220af0  sh          $v0, 0xAF0($s1)
    ctx->pc = 0x1951f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2800), (uint16_t)GPR_U32(ctx, 2));
    // 0x1951fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1951FCu;
    {
        const bool branch_taken_0x1951fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951FCu;
        // 0x195200: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1951fc) {
            ctx->pc = 0x19522Cu;
            goto label_19522c;
        }
    }
    ctx->pc = 0x195204u;
label_195204:
    // 0x195204: 0x96220af0  lhu         $v0, 0xAF0($s1)
    ctx->pc = 0x195204u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2800)));
    // 0x195208: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x195208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19520c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x19520cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x195210: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x195210u;
    {
        const bool branch_taken_0x195210 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x195214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195210u;
        // 0x195214: 0xa6220af0  sh          $v0, 0xAF0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2800), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195210) {
            ctx->pc = 0x195234u;
            goto label_195234;
        }
    }
    ctx->pc = 0x195218u;
    // 0x195218: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x195218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19521c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x19521cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x195220: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x195220u;
    {
        const bool branch_taken_0x195220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195220u;
        // 0x195224: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195220) {
            ctx->pc = 0x195230u;
            goto label_195230;
        }
    }
    ctx->pc = 0x195228u;
label_195228:
    // 0x195228: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x195228u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_19522c:
    // 0x19522c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x19522cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_195230:
    // 0x195230: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x195230u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_195234:
    // 0x195234: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x195234u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_195238:
    // 0x195238: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x195238u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19523c: 0x10560053  beq         $v0, $s6, . + 4 + (0x53 << 2)
    ctx->pc = 0x19523Cu;
    {
        const bool branch_taken_0x19523c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x195240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19523Cu;
        // 0x195240: 0x27be0030  addiu       $fp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19523c) {
            ctx->pc = 0x19538Cu;
            goto label_19538c;
        }
    }
    ctx->pc = 0x195244u;
    // 0x195244: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x195244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
    // 0x195248: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x195248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x19524c: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x19524cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x195250: 0x26350790  addiu       $s5, $s1, 0x790
    ctx->pc = 0x195250u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1936));
    // 0x195254: 0x26300760  addiu       $s0, $s1, 0x760
    ctx->pc = 0x195254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1888));
    // 0x195258: 0x26340780  addiu       $s4, $s1, 0x780
    ctx->pc = 0x195258u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1920));
    // 0x19525c: 0x26330770  addiu       $s3, $s1, 0x770
    ctx->pc = 0x19525cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1904));
    // 0x195260: 0x26320750  addiu       $s2, $s1, 0x750
    ctx->pc = 0x195260u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1872));
    // 0x195264: 0x0  nop
    ctx->pc = 0x195264u;
    // NOP
label_195268:
    // 0x195268: 0xc05ce40  jal         func_173900
    ctx->pc = 0x195268u;
    SET_GPR_U32(ctx, 31, 0x195270u);
    ctx->pc = 0x19526Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195268u;
    // 0x19526c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x195268u, 0x195270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195270u;
label_195270:
    // 0x195270: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x195270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195274: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x195274u;
    {
        const bool branch_taken_0x195274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x195274) {
            ctx->pc = 0x195278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195274u;
            // 0x195278: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195364u;
            goto label_195364;
        }
    }
    ctx->pc = 0x19527Cu;
    // 0x19527c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x19527cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x195280: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x195280u;
    SET_GPR_U32(ctx, 31, 0x195288u);
    ctx->pc = 0x195284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195280u;
    // 0x195284: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x195280u, 0x195288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195288u;
label_195288:
    // 0x195288: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x195288u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x19528c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x19528cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x195290: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x195290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x195294: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x195294u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195298: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x195298u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x19529c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x19529cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1952a0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1952a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1952a4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1952a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1952a8: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1952a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1952ac: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1952acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1952b0: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x1952b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
    // 0x1952b4: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1952b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1952b8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1952b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1952bc: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x1952bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1952c0: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1952c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1952c4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1952c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1952c8: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1952c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1952cc: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1952ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1952d0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1952d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1952d4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1952d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1952d8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1952d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1952dc: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1952dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1952e0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1952e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1952e4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1952e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1952e8: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1952e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1952ec: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1952ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1952f0: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1952f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1952f4: 0xc07df68  jal         func_1F7DA0
    ctx->pc = 0x1952F4u;
    SET_GPR_U32(ctx, 31, 0x1952FCu);
    ctx->pc = 0x1952F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1952F4u;
    // 0x1952f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x1952F4u, 0x1952FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1952FCu;
label_1952fc:
    // 0x1952fc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1952fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x195300: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x195300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195304: 0xc051dca  jal         func_147728
    ctx->pc = 0x195304u;
    SET_GPR_U32(ctx, 31, 0x19530Cu);
    ctx->pc = 0x195308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195304u;
    // 0x195308: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x195304u, 0x19530Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19530Cu;
label_19530c:
    // 0x19530c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x19530cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x195310: 0xc051f10  jal         func_147C40
    ctx->pc = 0x195310u;
    SET_GPR_U32(ctx, 31, 0x195318u);
    ctx->pc = 0x195314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195310u;
    // 0x195314: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x195310u, 0x195318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195318u;
label_195318:
    // 0x195318: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x195318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19531c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x19531cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195320: 0xc051efe  jal         func_147BF8
    ctx->pc = 0x195320u;
    SET_GPR_U32(ctx, 31, 0x195328u);
    ctx->pc = 0x195324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195320u;
    // 0x195324: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x195320u, 0x195328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195328u;
label_195328:
    // 0x195328: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x195328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19532c: 0xc051d4a  jal         func_147528
    ctx->pc = 0x19532Cu;
    SET_GPR_U32(ctx, 31, 0x195334u);
    ctx->pc = 0x195330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19532Cu;
    // 0x195330: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x19532Cu, 0x195334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195334u;
label_195334:
    // 0x195334: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x195334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195338: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x195338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19533c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x19533cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x195340: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x195340u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x195344: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x195344u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195348: 0x0  nop
    ctx->pc = 0x195348u;
    // NOP
    // 0x19534c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x19534Cu;
    {
        const bool branch_taken_0x19534c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x195350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19534Cu;
        // 0x195350: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19534c) {
            ctx->pc = 0x195360u;
            goto label_195360;
        }
    }
    ctx->pc = 0x195354u;
    // 0x195354: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x195354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195358: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x195358u;
    SET_GPR_U32(ctx, 31, 0x195360u);
    ctx->pc = 0x19535Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195358u;
    // 0x19535c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x195358u, 0x195360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195360u;
label_195360:
    // 0x195360: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x195360u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_195364:
    // 0x195364: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x195364u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x195368: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x195368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x19536c: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x19536cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x195370: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x195370u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x195374: 0x2ac20009  slti        $v0, $s6, 0x9
    ctx->pc = 0x195374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x195378: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x195378u;
    {
        const bool branch_taken_0x195378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195378u;
        // 0x19537c: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195378) {
            ctx->pc = 0x19538Cu;
            goto label_19538c;
        }
    }
    ctx->pc = 0x195380u;
    // 0x195380: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x195380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x195384: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
    ctx->pc = 0x195384u;
    {
        const bool branch_taken_0x195384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x195384) {
            ctx->pc = 0x195268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195268;
        }
    }
    ctx->pc = 0x19538Cu;
label_19538c:
    // 0x19538c: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x19538cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x195390: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x195390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x195394: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x195394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x195398: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x195398u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x19539c: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x19539cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1953a0: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x1953a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1953a4: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x1953a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1953a8: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1953a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1953ac: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1953acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1953b0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1953b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1953b4: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x1953b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1953b8: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x1953b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1953bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1953BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1953C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953BCu;
        // 0x1953c0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1953BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1953C4u;
    // 0x1953c4: 0x0  nop
    ctx->pc = 0x1953c4u;
    // NOP
    ctx->pc = 0x1953c8u;
}
