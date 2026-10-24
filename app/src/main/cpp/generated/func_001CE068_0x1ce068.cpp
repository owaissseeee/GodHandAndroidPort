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

// Function: func_001CE068
// Address: 0x1ce068 - 0x1ce6c8
void func_001CE068_0x1ce068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001CE068_0x1ce068");
#endif

    switch (ctx->pc) {
        case 0x1ce0a0u: goto label_1ce0a0;
        case 0x1ce0acu: goto label_1ce0ac;
        case 0x1ce16cu: goto label_1ce16c;
        case 0x1ce194u: goto label_1ce194;
        case 0x1ce1a8u: goto label_1ce1a8;
        case 0x1ce1d8u: goto label_1ce1d8;
        case 0x1ce240u: goto label_1ce240;
        case 0x1ce254u: goto label_1ce254;
        case 0x1ce278u: goto label_1ce278;
        case 0x1ce29cu: goto label_1ce29c;
        case 0x1ce300u: goto label_1ce300;
        case 0x1ce35cu: goto label_1ce35c;
        case 0x1ce36cu: goto label_1ce36c;
        case 0x1ce380u: goto label_1ce380;
        case 0x1ce3acu: goto label_1ce3ac;
        case 0x1ce3f8u: goto label_1ce3f8;
        case 0x1ce414u: goto label_1ce414;
        case 0x1ce504u: goto label_1ce504;
        case 0x1ce540u: goto label_1ce540;
        case 0x1ce59cu: goto label_1ce59c;
        case 0x1ce5b4u: goto label_1ce5b4;
        case 0x1ce5d0u: goto label_1ce5d0;
        case 0x1ce5dcu: goto label_1ce5dc;
        case 0x1ce614u: goto label_1ce614;
        case 0x1ce634u: goto label_1ce634;
        case 0x1ce65cu: goto label_1ce65c;
        default: break;
    }

    ctx->pc = 0x1ce068u;

    // 0x1ce068: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1ce068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1ce06c: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x1ce06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x1ce070: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x1ce070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x1ce074: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ce074u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce078: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x1ce078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x1ce07c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x1ce07cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x1ce080: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x1ce080u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x1ce084: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x1ce084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x1ce088: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x1ce088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x1ce08c: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x1ce08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
    // 0x1ce090: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x1ce090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
    // 0x1ce094: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x1ce094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x1ce098: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1CE098u;
    SET_GPR_U32(ctx, 31, 0x1CE0A0u);
    ctx->pc = 0x1CE09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE098u;
    // 0x1ce09c: 0xe7b40160  swc1        $f20, 0x160($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1CE098u, 0x1CE0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE0A0u;
label_1ce0a0:
    // 0x1ce0a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ce0a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce0a4: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1CE0A4u;
    SET_GPR_U32(ctx, 31, 0x1CE0ACu);
    ctx->pc = 0x1CE0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE0A4u;
    // 0x1ce0a8: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1CE0A4u, 0x1CE0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE0ACu;
label_1ce0ac:
    // 0x1ce0ac: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1ce0acu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1ce0b0: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1ce0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ce0b4: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1ce0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1ce0b8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1ce0b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce0bc: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1ce0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ce0c0: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1ce0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ce0c4: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x1ce0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ce0c8: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x1ce0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ce0cc: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1ce0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ce0d0: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x1ce0d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ce0d4: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE0D4u;
    {
        const bool branch_taken_0x1ce0d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE0D4u;
        // 0x1ce0d8: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce0d4) {
            ctx->pc = 0x1CE0F4u;
            goto label_1ce0f4;
        }
    }
    ctx->pc = 0x1CE0DCu;
    // 0x1ce0dc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ce0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce0e0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1ce0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1ce0e4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1ce0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce0e8: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x1ce0e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1ce0ec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1ce0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce0f0: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1ce0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1ce0f4:
    // 0x1ce0f4: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1ce0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce0f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce0fc: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1ce0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x1ce100: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ce100u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1ce104: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ce104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce108: 0x925002f6  lbu         $s0, 0x2F6($s2)
    ctx->pc = 0x1ce108u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x1ce10c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ce10cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ce110: 0x12020045  beq         $s0, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1CE110u;
    {
        const bool branch_taken_0x1ce110 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE110u;
        // 0x1ce114: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce110) {
            ctx->pc = 0x1CE228u;
            goto label_1ce228;
        }
    }
    ctx->pc = 0x1CE118u;
    // 0x1ce118: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1ce118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ce11c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE11Cu;
    {
        const bool branch_taken_0x1ce11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce11c) {
            ctx->pc = 0x1CE120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE11Cu;
            // 0x1ce120: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE134u;
            goto label_1ce134;
        }
    }
    ctx->pc = 0x1CE124u;
    // 0x1ce124: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CE124u;
    {
        const bool branch_taken_0x1ce124 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE124u;
        // 0x1ce128: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce124) {
            ctx->pc = 0x1CE14Cu;
            goto label_1ce14c;
        }
    }
    ctx->pc = 0x1CE12Cu;
    // 0x1ce12c: 0x1000015b  b           . + 4 + (0x15B << 2)
    ctx->pc = 0x1CE12Cu;
    {
        const bool branch_taken_0x1ce12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE12Cu;
        // 0x1ce130: 0x7bb10140  lq          $s1, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce12c) {
            ctx->pc = 0x1CE69Cu;
            goto label_1ce69c;
        }
    }
    ctx->pc = 0x1CE134u;
label_1ce134:
    // 0x1ce134: 0x12020133  beq         $s0, $v0, . + 4 + (0x133 << 2)
    ctx->pc = 0x1CE134u;
    {
        const bool branch_taken_0x1ce134 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE134u;
        // 0x1ce138: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce134) {
            ctx->pc = 0x1CE604u;
            goto label_1ce604;
        }
    }
    ctx->pc = 0x1CE13Cu;
    // 0x1ce13c: 0x1202014b  beq         $s0, $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x1CE13Cu;
    {
        const bool branch_taken_0x1ce13c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE13Cu;
        // 0x1ce140: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce13c) {
            ctx->pc = 0x1CE66Cu;
            goto label_1ce66c;
        }
    }
    ctx->pc = 0x1CE144u;
    // 0x1ce144: 0x10000155  b           . + 4 + (0x155 << 2)
    ctx->pc = 0x1CE144u;
    {
        const bool branch_taken_0x1ce144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE144u;
        // 0x1ce148: 0x7bb10140  lq          $s1, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce144) {
            ctx->pc = 0x1CE69Cu;
            goto label_1ce69c;
        }
    }
    ctx->pc = 0x1CE14Cu;
label_1ce14c:
    // 0x1ce14c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1ce14cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1ce150: 0x240400cd  addiu       $a0, $zero, 0xCD
    ctx->pc = 0x1ce150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
    // 0x1ce154: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x1ce154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1ce158: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ce158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce15c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ce15cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce160: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1ce160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ce164: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1CE164u;
    SET_GPR_U32(ctx, 31, 0x1CE16Cu);
    ctx->pc = 0x1CE168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE164u;
    // 0x1ce168: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1CE164u, 0x1CE16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE16Cu;
label_1ce16c:
    // 0x1ce16c: 0xc6410640  lwc1        $f1, 0x640($s2)
    ctx->pc = 0x1ce16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce170: 0xc6400648  lwc1        $f0, 0x648($s2)
    ctx->pc = 0x1ce170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce174: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1ce174u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1ce178: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1ce178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1ce17c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ce17cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ce180: 0x0  nop
    ctx->pc = 0x1ce180u;
    // NOP
    // 0x1ce184: 0x0  nop
    ctx->pc = 0x1ce184u;
    // NOP
    // 0x1ce188: 0x46010344  c1          0x10344
    ctx->pc = 0x1ce188u;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[1]);
    // 0x1ce18c: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x1CE18Cu;
    SET_GPR_U32(ctx, 31, 0x1CE194u);
    ctx->pc = 0x1CE190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE18Cu;
    // 0x1ce190: 0xc64c0644  lwc1        $f12, 0x644($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1CE18Cu, 0x1CE194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE194u;
label_1ce194:
    // 0x1ce194: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1ce194u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1ce198: 0xc64c0640  lwc1        $f12, 0x640($s2)
    ctx->pc = 0x1ce198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce19c: 0xc64d0648  lwc1        $f13, 0x648($s2)
    ctx->pc = 0x1ce19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ce1a0: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x1CE1A0u;
    SET_GPR_U32(ctx, 31, 0x1CE1A8u);
    ctx->pc = 0x1CE1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE1A0u;
    // 0x1ce1a4: 0xe6400100  swc1        $f0, 0x100($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1CE1A0u, 0x1CE1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE1A8u;
label_1ce1a8:
    // 0x1ce1a8: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x1ce1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x1ce1ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ce1acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce1b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ce1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce1b4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1ce1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1ce1b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ce1b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ce1bc: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x1ce1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x1ce1c0: 0xae40067c  sw          $zero, 0x67C($s2)
    ctx->pc = 0x1ce1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1660), GPR_U32(ctx, 0));
    // 0x1ce1c4: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x1ce1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    // 0x1ce1c8: 0xe6410660  swc1        $f1, 0x660($s2)
    ctx->pc = 0x1ce1c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1632), bits); }
    // 0x1ce1cc: 0xa2420531  sb          $v0, 0x531($s2)
    ctx->pc = 0x1ce1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1329), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ce1d0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x1CE1D0u;
    SET_GPR_U32(ctx, 31, 0x1CE1D8u);
    ctx->pc = 0x1CE1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE1D0u;
    // 0x1ce1d4: 0xe6420674  swc1        $f2, 0x674($s2) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1652), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1CE1D0u, 0x1CE1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE1D8u;
label_1ce1d8:
    // 0x1ce1d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ce1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ce1dc: 0x3c01bb64  lui         $at, 0xBB64
    ctx->pc = 0x1ce1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47972 << 16));
    // 0x1ce1e0: 0x3421c388  ori         $at, $at, 0xC388
    ctx->pc = 0x1ce1e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50056);
    // 0x1ce1e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ce1e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce1e8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CE1E8u;
    {
        const bool branch_taken_0x1ce1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce1e8) {
            ctx->pc = 0x1CE1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE1E8u;
            // 0x1ce1ec: 0xe6400678  swc1        $f0, 0x678($s2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1656), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE204u;
            goto label_1ce204;
        }
    }
    ctx->pc = 0x1CE1F0u;
    // 0x1ce1f0: 0x3c013b64  lui         $at, 0x3B64
    ctx->pc = 0x1ce1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15204 << 16));
    // 0x1ce1f4: 0x3421c388  ori         $at, $at, 0xC388
    ctx->pc = 0x1ce1f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50056);
    // 0x1ce1f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ce1f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce1fc: 0x0  nop
    ctx->pc = 0x1ce1fcu;
    // NOP
    // 0x1ce200: 0xe6400678  swc1        $f0, 0x678($s2)
    ctx->pc = 0x1ce200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1656), bits); }
label_1ce204:
    // 0x1ce204: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x1ce204u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x1ce208: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1ce208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1ce20c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ce20cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ce210: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ce210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce214: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ce214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ce218: 0xae400640  sw          $zero, 0x640($s2)
    ctx->pc = 0x1ce218u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1600), GPR_U32(ctx, 0));
    // 0x1ce21c: 0xe6400648  swc1        $f0, 0x648($s2)
    ctx->pc = 0x1ce21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1608), bits); }
    // 0x1ce220: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x1ce220u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ce224: 0xae400644  sw          $zero, 0x644($s2)
    ctx->pc = 0x1ce224u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1604), GPR_U32(ctx, 0));
label_1ce228:
    // 0x1ce228: 0xc64c067c  lwc1        $f12, 0x67C($s2)
    ctx->pc = 0x1ce228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce22c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1ce22cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1ce230: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ce230u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ce234: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ce234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ce238: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x1CE238u;
    SET_GPR_U32(ctx, 31, 0x1CE240u);
    ctx->pc = 0x1CE23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE238u;
    // 0x1ce23c: 0x26510100  addiu       $s1, $s2, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x1CE238u, 0x1CE240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE240u;
label_1ce240:
    // 0x1ce240: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1ce240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1ce244: 0xc64c067c  lwc1        $f12, 0x67C($s2)
    ctx->pc = 0x1ce244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce248: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1ce248u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1ce24c: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x1CE24Cu;
    SET_GPR_U32(ctx, 31, 0x1CE254u);
    ctx->pc = 0x1CE250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE24Cu;
    // 0x1ce250: 0xe7a000b0  swc1        $f0, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x1CE24Cu, 0x1CE254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE254u;
label_1ce254:
    // 0x1ce254: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1ce254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1ce258: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x1ce258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ce25c: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x1ce25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x1ce260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce264: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ce264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce268: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ce268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce26c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1ce26cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1ce270: 0xc051dca  jal         func_147728
    ctx->pc = 0x1CE270u;
    SET_GPR_U32(ctx, 31, 0x1CE278u);
    ctx->pc = 0x1CE274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE270u;
    // 0x1ce274: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x1CE270u, 0x1CE278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE278u;
label_1ce278:
    // 0x1ce278: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x1ce278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x1ce27c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1ce27cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1ce280: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ce280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce284: 0xc641067c  lwc1        $f1, 0x67C($s2)
    ctx->pc = 0x1ce284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce288: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1ce288u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1ce28c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ce28cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ce290: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1ce290u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x1ce294: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1CE294u;
    SET_GPR_U32(ctx, 31, 0x1CE29Cu);
    ctx->pc = 0x1CE298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE294u;
    // 0x1ce298: 0xe641067c  swc1        $f1, 0x67C($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1660), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1CE294u, 0x1CE29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE29Cu;
label_1ce29c:
    // 0x1ce29c: 0xe640067c  swc1        $f0, 0x67C($s2)
    ctx->pc = 0x1ce29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1660), bits); }
    // 0x1ce2a0: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x1ce2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ce2a4: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1ce2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1ce2a8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1ce2a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce2ac: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1ce2acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ce2b0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1ce2b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ce2b4: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1ce2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ce2b8: 0xc6410674  lwc1        $f1, 0x674($s2)
    ctx->pc = 0x1ce2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce2bc: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1ce2bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce2c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ce2c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce2c4: 0x0  nop
    ctx->pc = 0x1ce2c4u;
    // NOP
    // 0x1ce2c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ce2c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce2cc: 0x0  nop
    ctx->pc = 0x1ce2ccu;
    // NOP
    // 0x1ce2d0: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
    ctx->pc = 0x1CE2D0u;
    {
        const bool branch_taken_0x1ce2d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CE2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE2D0u;
        // 0x1ce2d4: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce2d0) {
            ctx->pc = 0x1CE388u;
            goto label_1ce388;
        }
    }
    ctx->pc = 0x1CE2D8u;
    // 0x1ce2d8: 0x3c013dd6  lui         $at, 0x3DD6
    ctx->pc = 0x1ce2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15830 << 16));
    // 0x1ce2dc: 0x34217750  ori         $at, $at, 0x7750
    ctx->pc = 0x1ce2dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30544);
    // 0x1ce2e0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ce2e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ce2e4: 0x46150801  sub.s       $f0, $f1, $f21
    ctx->pc = 0x1ce2e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x1ce2e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ce2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce2ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ce2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce2f0: 0x4614ad02  mul.s       $f20, $f21, $f20
    ctx->pc = 0x1ce2f0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x1ce2f4: 0xe6400674  swc1        $f0, 0x674($s2)
    ctx->pc = 0x1ce2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1652), bits); }
    // 0x1ce2f8: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x1CE2F8u;
    SET_GPR_U32(ctx, 31, 0x1CE300u);
    ctx->pc = 0x1CE2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE2F8u;
    // 0x1ce2fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x1CE2F8u, 0x1CE300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE300u;
label_1ce300:
    // 0x1ce300: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1ce300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1ce304: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x1ce304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1ce308: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x1ce308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ce30c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1ce30cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ce310: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1ce310u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce314: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1ce314u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ce318: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1ce318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ce31c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1ce31cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ce320: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1ce320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ce324: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1ce324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce328: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x1ce328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce32c: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x1ce32cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1ce330: 0xc7ac00c4  lwc1        $f12, 0xC4($sp)
    ctx->pc = 0x1ce330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce334: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x1ce334u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1ce338: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ce338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ce33c: 0xe7ac00b4  swc1        $f12, 0xB4($sp)
    ctx->pc = 0x1ce33cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1ce340: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x1ce340u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1ce344: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1ce344u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1ce348: 0x0  nop
    ctx->pc = 0x1ce348u;
    // NOP
    // 0x1ce34c: 0x0  nop
    ctx->pc = 0x1ce34cu;
    // NOP
    // 0x1ce350: 0x46020344  c1          0x20344
    ctx->pc = 0x1ce350u;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[2]);
    // 0x1ce354: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x1CE354u;
    SET_GPR_U32(ctx, 31, 0x1CE35Cu);
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1CE354u, 0x1CE35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE35Cu;
label_1ce35c:
    // 0x1ce35c: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x1ce35cu;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
    // 0x1ce360: 0xc64c0100  lwc1        $f12, 0x100($s2)
    ctx->pc = 0x1ce360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce364: 0xc0b687e  jal         func_2DA1F8
    ctx->pc = 0x1CE364u;
    SET_GPR_U32(ctx, 31, 0x1CE36Cu);
    ctx->pc = 0x1CE368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE364u;
    // 0x1ce368: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x1CE364u, 0x1CE36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE36Cu;
label_1ce36c:
    // 0x1ce36c: 0xc6410100  lwc1        $f1, 0x100($s2)
    ctx->pc = 0x1ce36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce370: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ce370u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ce374: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1ce374u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x1ce378: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1CE378u;
    SET_GPR_U32(ctx, 31, 0x1CE380u);
    ctx->pc = 0x1CE37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE378u;
    // 0x1ce37c: 0xe6410100  swc1        $f1, 0x100($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1CE378u, 0x1CE380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE380u;
label_1ce380:
    // 0x1ce380: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1CE380u;
    {
        const bool branch_taken_0x1ce380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE380u;
        // 0x1ce384: 0xe6400100  swc1        $f0, 0x100($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce380) {
            ctx->pc = 0x1CE3E8u;
            goto label_1ce3e8;
        }
    }
    ctx->pc = 0x1CE388u;
label_1ce388:
    // 0x1ce388: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1ce388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1ce38c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ce38cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce390: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1ce390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1ce394: 0xc6400648  lwc1        $f0, 0x648($s2)
    ctx->pc = 0x1ce394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce398: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1ce398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1ce39c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1ce39cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1ce3a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ce3a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ce3a4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x1CE3A4u;
    SET_GPR_U32(ctx, 31, 0x1CE3ACu);
    ctx->pc = 0x1CE3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE3A4u;
    // 0x1ce3a8: 0xe6400648  swc1        $f0, 0x648($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1608), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x1CE3A4u, 0x1CE3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE3ACu;
label_1ce3ac:
    // 0x1ce3ac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1ce3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ce3b0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE3B0u;
    {
        const bool branch_taken_0x1ce3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CE3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3B0u;
        // 0x1ce3b4: 0xc6400648  lwc1        $f0, 0x648($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce3b0) {
            ctx->pc = 0x1CE3C8u;
            goto label_1ce3c8;
        }
    }
    ctx->pc = 0x1CE3B8u;
    // 0x1ce3b8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1ce3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1ce3bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ce3bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce3c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE3C0u;
    {
        const bool branch_taken_0x1ce3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3C0u;
        // 0x1ce3c4: 0x27b000d0  addiu       $s0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce3c0) {
            ctx->pc = 0x1CE3D4u;
            goto label_1ce3d4;
        }
    }
    ctx->pc = 0x1CE3C8u;
label_1ce3c8:
    // 0x1ce3c8: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x1ce3c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1ce3cc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1ce3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1ce3d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ce3d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ce3d4:
    // 0x1ce3d4: 0x0  nop
    ctx->pc = 0x1ce3d4u;
    // NOP
    // 0x1ce3d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ce3d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce3dc: 0x0  nop
    ctx->pc = 0x1ce3dcu;
    // NOP
    // 0x1ce3e0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CE3E0u;
    {
        const bool branch_taken_0x1ce3e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce3e0) {
            ctx->pc = 0x1CE3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE3E0u;
            // 0x1ce3e4: 0xe6410648  swc1        $f1, 0x648($s2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1608), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE3E8u;
            goto label_1ce3e8;
        }
    }
    ctx->pc = 0x1CE3E8u;
label_1ce3e8:
    // 0x1ce3e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ce3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce3ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ce3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce3f0: 0xc051dca  jal         func_147728
    ctx->pc = 0x1CE3F0u;
    SET_GPR_U32(ctx, 31, 0x1CE3F8u);
    ctx->pc = 0x1CE3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE3F0u;
    // 0x1ce3f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x1CE3F0u, 0x1CE3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE3F8u;
label_1ce3f8:
    // 0x1ce3f8: 0x26420640  addiu       $v0, $s2, 0x640
    ctx->pc = 0x1ce3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1600));
    // 0x1ce3fc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1ce3fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce400: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1ce400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ce404: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ce404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce40c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1CE40Cu;
    SET_GPR_U32(ctx, 31, 0x1CE414u);
    ctx->pc = 0x1CE410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE40Cu;
    // 0x1ce410: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1CE40Cu, 0x1CE414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE414u;
label_1ce414:
    // 0x1ce414: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1ce414u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ce418: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1ce418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ce41c: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1ce41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x1ce420: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ce420u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ce424: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ce424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce428: 0xc6410648  lwc1        $f1, 0x648($s2)
    ctx->pc = 0x1ce428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce42c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1ce42cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1ce430: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1ce430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1ce434: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ce434u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ce438: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1ce438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1ce43c: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x1ce43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ce440: 0xc7a300c4  lwc1        $f3, 0xC4($sp)
    ctx->pc = 0x1ce440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ce444: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ce444u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ce448: 0xc7a400c8  lwc1        $f4, 0xC8($sp)
    ctx->pc = 0x1ce448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ce44c: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x1ce44cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ce450: 0xe7a300b4  swc1        $f3, 0xB4($sp)
    ctx->pc = 0x1ce450u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1ce454: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x1ce454u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce458: 0xe7a400b8  swc1        $f4, 0xB8($sp)
    ctx->pc = 0x1ce458u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1ce45c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1CE45Cu;
    {
        const bool branch_taken_0x1ce45c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CE460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE45Cu;
        // 0x1ce460: 0xe6410648  swc1        $f1, 0x648($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1608), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce45c) {
            ctx->pc = 0x1CE468u;
            goto label_1ce468;
        }
    }
    ctx->pc = 0x1CE464u;
    // 0x1ce464: 0xe6450648  swc1        $f5, 0x648($s2)
    ctx->pc = 0x1ce464u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1608), bits); }
label_1ce468:
    // 0x1ce468: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1ce468u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1ce46c: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1ce46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ce470: 0xdba400d0  lqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1ce470u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1ce474: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x1ce474u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1ce478: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1ce478u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1ce47c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1ce47cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ce480: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1ce480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ce484: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1ce484u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ce488: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1ce488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ce48c: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x1ce48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1ce490: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x1ce490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ce494: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1ce494u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ce498: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1ce498u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce49c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1ce49cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ce4a0: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1ce4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ce4a4: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1ce4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1ce4a8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1ce4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ce4ac: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE4ACu;
    {
        const bool branch_taken_0x1ce4ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4ACu;
        // 0x1ce4b0: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce4ac) {
            ctx->pc = 0x1CE4CCu;
            goto label_1ce4cc;
        }
    }
    ctx->pc = 0x1CE4B4u;
    // 0x1ce4b4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ce4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce4b8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1ce4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ce4bc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1ce4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce4c0: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1ce4c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1ce4c4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1ce4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce4c8: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1ce4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1ce4cc:
    // 0x1ce4cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce4d0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1ce4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1ce4d4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ce4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ce4d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ce4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ce4dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ce4dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce4e0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1ce4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1ce4e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ce4e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce4e8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1ce4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1ce4ec: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1ce4ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ce4f0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1ce4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1ce4f4: 0x24090534  addiu       $t1, $zero, 0x534
    ctx->pc = 0x1ce4f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
    // 0x1ce4f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ce4f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce4fc: 0xc04c784  jal         func_131E10
    ctx->pc = 0x1CE4FCu;
    SET_GPR_U32(ctx, 31, 0x1CE504u);
    ctx->pc = 0x1CE500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE4FCu;
    // 0x1ce500: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1CE4FCu, 0x1CE504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE504u;
label_1ce504:
    // 0x1ce504: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1CE504u;
    {
        const bool branch_taken_0x1ce504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce504) {
            ctx->pc = 0x1CE508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE504u;
            // 0x1ce508: 0x8e440650  lw          $a0, 0x650($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE538u;
            goto label_1ce538;
        }
    }
    ctx->pc = 0x1CE50Cu;
    // 0x1ce50c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1ce50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1ce510: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CE510u;
    {
        const bool branch_taken_0x1ce510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1CE514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE510u;
        // 0x1ce514: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce510) {
            ctx->pc = 0x1CE52Cu;
            goto label_1ce52c;
        }
    }
    ctx->pc = 0x1CE518u;
    // 0x1ce518: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ce518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1ce51c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1ce51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce520: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1ce520u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ce524: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1ce524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce528: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1ce528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1ce52c:
    // 0x1ce52c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ce52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce530: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x1ce530u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ce534: 0x8e440650  lw          $a0, 0x650($s2)
    ctx->pc = 0x1ce534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1616)));
label_1ce538:
    // 0x1ce538: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1CE538u;
    SET_GPR_U32(ctx, 31, 0x1CE540u);
    ctx->pc = 0x1CE53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE538u;
    // 0x1ce53c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1CE538u, 0x1CE540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE540u;
label_1ce540:
    // 0x1ce540: 0x8e420650  lw          $v0, 0x650($s2)
    ctx->pc = 0x1ce540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1616)));
    // 0x1ce544: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x1ce544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1ce548: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1ce548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ce54c: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x1ce54cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ce550: 0x8e440650  lw          $a0, 0x650($s2)
    ctx->pc = 0x1ce550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1616)));
    // 0x1ce554: 0xac85004c  sw          $a1, 0x4C($a0)
    ctx->pc = 0x1ce554u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 5));
    // 0x1ce558: 0x8e420670  lw          $v0, 0x670($s2)
    ctx->pc = 0x1ce558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
    // 0x1ce55c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1CE55Cu;
    {
        const bool branch_taken_0x1ce55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce55c) {
            ctx->pc = 0x1CE560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE55Cu;
            // 0x1ce560: 0x8e440650  lw          $a0, 0x650($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE594u;
            goto label_1ce594;
        }
    }
    ctx->pc = 0x1CE564u;
    // 0x1ce564: 0x8c430564  lw          $v1, 0x564($v0)
    ctx->pc = 0x1ce564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1380)));
    // 0x1ce568: 0x24020275  addiu       $v0, $zero, 0x275
    ctx->pc = 0x1ce568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 629));
    // 0x1ce56c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE56Cu;
    {
        const bool branch_taken_0x1ce56c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE56Cu;
        // 0x1ce570: 0x24020276  addiu       $v0, $zero, 0x276 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce56c) {
            ctx->pc = 0x1CE57Cu;
            goto label_1ce57c;
        }
    }
    ctx->pc = 0x1CE574u;
    // 0x1ce574: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE574u;
    {
        const bool branch_taken_0x1ce574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce574) {
            ctx->pc = 0x1CE578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE574u;
            // 0x1ce578: 0x8e430650  lw          $v1, 0x650($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE588u;
            goto label_1ce588;
        }
    }
    ctx->pc = 0x1CE57Cu;
label_1ce57c:
    // 0x1ce57c: 0x8e420650  lw          $v0, 0x650($s2)
    ctx->pc = 0x1ce57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1616)));
    // 0x1ce580: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE580u;
    {
        const bool branch_taken_0x1ce580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE580u;
        // 0x1ce584: 0xac45004c  sw          $a1, 0x4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce580) {
            ctx->pc = 0x1CE590u;
            goto label_1ce590;
        }
    }
    ctx->pc = 0x1CE588u;
label_1ce588:
    // 0x1ce588: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1ce588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1ce58c: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1ce58cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
label_1ce590:
    // 0x1ce590: 0x8e440650  lw          $a0, 0x650($s2)
    ctx->pc = 0x1ce590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1616)));
label_1ce594:
    // 0x1ce594: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1CE594u;
    SET_GPR_U32(ctx, 31, 0x1CE59Cu);
    ctx->pc = 0x1CE598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE594u;
    // 0x1ce598: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1CE594u, 0x1CE59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE59Cu;
label_1ce59c:
    // 0x1ce59c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1ce59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1ce5a0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ce5a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1ce5a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ce5a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ce5a8: 0x8e440650  lw          $a0, 0x650($s2)
    ctx->pc = 0x1ce5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1616)));
    // 0x1ce5ac: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x1CE5ACu;
    SET_GPR_U32(ctx, 31, 0x1CE5B4u);
    ctx->pc = 0x1CE5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE5ACu;
    // 0x1ce5b0: 0x8e450654  lw          $a1, 0x654($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x1CE5ACu, 0x1CE5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE5B4u;
label_1ce5b4:
    // 0x1ce5b4: 0x8e430650  lw          $v1, 0x650($s2)
    ctx->pc = 0x1ce5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1616)));
    // 0x1ce5b8: 0x24020111  addiu       $v0, $zero, 0x111
    ctx->pc = 0x1ce5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x1ce5bc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ce5bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce5c0: 0xa4620044  sh          $v0, 0x44($v1)
    ctx->pc = 0x1ce5c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ce5c4: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x1ce5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x1ce5c8: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x1CE5C8u;
    SET_GPR_U32(ctx, 31, 0x1CE5D0u);
    ctx->pc = 0x1CE5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE5C8u;
    // 0x1ce5cc: 0x8e440650  lw          $a0, 0x650($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x1CE5C8u, 0x1CE5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE5D0u;
label_1ce5d0:
    // 0x1ce5d0: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x1ce5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1ce5d4: 0xc0a4bdc  jal         func_292F70
    ctx->pc = 0x1CE5D4u;
    SET_GPR_U32(ctx, 31, 0x1CE5DCu);
    ctx->pc = 0x1CE5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE5D4u;
    // 0x1ce5d8: 0x26c464f0  addiu       $a0, $s6, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F70u, 0x1CE5D4u, 0x1CE5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE5DCu;
label_1ce5dc:
    // 0x1ce5dc: 0xc6400660  lwc1        $f0, 0x660($s2)
    ctx->pc = 0x1ce5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce5e0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ce5e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce5e4: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x1ce5e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x1ce5e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ce5e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce5ec: 0x0  nop
    ctx->pc = 0x1ce5ecu;
    // NOP
    // 0x1ce5f0: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x1CE5F0u;
    {
        const bool branch_taken_0x1ce5f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CE5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE5F0u;
        // 0x1ce5f4: 0xe6400660  swc1        $f0, 0x660($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1632), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce5f0) {
            ctx->pc = 0x1CE694u;
            goto label_1ce694;
        }
    }
    ctx->pc = 0x1CE5F8u;
    // 0x1ce5f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ce5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce5fc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1CE5FCu;
    {
        const bool branch_taken_0x1ce5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE5FCu;
        // 0x1ce600: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce5fc) {
            ctx->pc = 0x1CE694u;
            goto label_1ce694;
        }
    }
    ctx->pc = 0x1CE604u;
label_1ce604:
    // 0x1ce604: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ce604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce608: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1ce608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ce60c: 0xc0c1880  jal         func_306200
    ctx->pc = 0x1CE60Cu;
    SET_GPR_U32(ctx, 31, 0x1CE614u);
    ctx->pc = 0x1CE610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE60Cu;
    // 0x1ce610: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x1CE60Cu, 0x1CE614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE614u;
label_1ce614:
    // 0x1ce614: 0x8e4700f0  lw          $a3, 0xF0($s2)
    ctx->pc = 0x1ce614u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1ce618: 0x240400cd  addiu       $a0, $zero, 0xCD
    ctx->pc = 0x1ce618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
    // 0x1ce61c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ce61cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ce620: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ce620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ce624: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1ce624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1ce628: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ce628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce62c: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1CE62Cu;
    SET_GPR_U32(ctx, 31, 0x1CE634u);
    ctx->pc = 0x1CE630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE62Cu;
    // 0x1ce630: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1CE62Cu, 0x1CE634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE634u;
label_1ce634:
    // 0x1ce634: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1ce634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1ce638: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ce638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce63c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1ce63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1ce640: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1ce640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce644: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ce644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce648: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ce648u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce64c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ce64cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce650: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ce650u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce654: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1CE654u;
    SET_GPR_U32(ctx, 31, 0x1CE65Cu);
    ctx->pc = 0x1CE658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE654u;
    // 0x1ce658: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1CE654u, 0x1CE65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE65Cu;
label_1ce65c:
    // 0x1ce65c: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x1ce65cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x1ce660: 0xa6500568  sh          $s0, 0x568($s2)
    ctx->pc = 0x1ce660u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1384), (uint16_t)GPR_U32(ctx, 16));
    // 0x1ce664: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ce664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ce668: 0xa24302f6  sb          $v1, 0x2F6($s2)
    ctx->pc = 0x1ce668u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 3));
label_1ce66c:
    // 0x1ce66c: 0x96420568  lhu         $v0, 0x568($s2)
    ctx->pc = 0x1ce66cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1384)));
    // 0x1ce670: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ce670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ce674: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1ce674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ce678: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CE678u;
    {
        const bool branch_taken_0x1ce678 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1CE67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE678u;
        // 0x1ce67c: 0xa6420568  sh          $v0, 0x568($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce678) {
            ctx->pc = 0x1CE694u;
            goto label_1ce694;
        }
    }
    ctx->pc = 0x1CE680u;
    // 0x1ce680: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce684: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x1ce684u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce688: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x1ce688u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ce68c: 0xa24002f5  sb          $zero, 0x2F5($s2)
    ctx->pc = 0x1ce68cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce690: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x1ce690u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_1ce694:
    // 0x1ce694: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x1ce694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1ce698: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x1ce698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1ce69c:
    // 0x1ce69c: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x1ce69cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1ce6a0: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x1ce6a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1ce6a4: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x1ce6a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ce6a8: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x1ce6a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ce6ac: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x1ce6acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1ce6b0: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1ce6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1ce6b4: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x1ce6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ce6b8: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x1ce6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ce6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE6BCu;
        // 0x1ce6c0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE6C4u;
    // 0x1ce6c4: 0x0  nop
    ctx->pc = 0x1ce6c4u;
    // NOP
    ctx->pc = 0x1ce6c8u;
}
