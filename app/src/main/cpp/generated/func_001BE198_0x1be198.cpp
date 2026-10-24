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

// Function: func_001BE198
// Address: 0x1be198 - 0x1be478
void func_001BE198_0x1be198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BE198_0x1be198");
#endif

    switch (ctx->pc) {
        case 0x1be234u: goto label_1be234;
        case 0x1be23cu: goto label_1be23c;
        case 0x1be244u: goto label_1be244;
        case 0x1be26cu: goto label_1be26c;
        case 0x1be320u: goto label_1be320;
        case 0x1be328u: goto label_1be328;
        case 0x1be33cu: goto label_1be33c;
        case 0x1be3b0u: goto label_1be3b0;
        case 0x1be3c0u: goto label_1be3c0;
        case 0x1be3ccu: goto label_1be3cc;
        case 0x1be3dcu: goto label_1be3dc;
        case 0x1be3e8u: goto label_1be3e8;
        case 0x1be414u: goto label_1be414;
        default: break;
    }

    ctx->pc = 0x1be198u;

    // 0x1be198: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1be198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1be19c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1be19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x1be1a0: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x1be1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x1be1a4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1be1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be1a8: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x1be1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x1be1ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1be1acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be1b0: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x1be1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x1be1b4: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x1be1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x1be1b8: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x1be1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x1be1bc: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1be1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x1be1c0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1be1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1be1c4: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x1be1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x1be1c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1be1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1be1cc: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x1be1ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1be1d0: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x1be1d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1be1d4: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x1be1d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
    // 0x1be1d8: 0x10700027  beq         $v1, $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1BE1D8u;
    {
        const bool branch_taken_0x1be1d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1BE1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE1D8u;
        // 0x1be1dc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be1d8) {
            ctx->pc = 0x1BE278u;
            goto label_1be278;
        }
    }
    ctx->pc = 0x1BE1E0u;
    // 0x1be1e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE1E0u;
    {
        const bool branch_taken_0x1be1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE1E0u;
        // 0x1be1e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be1e0) {
            ctx->pc = 0x1BE1F8u;
            goto label_1be1f8;
        }
    }
    ctx->pc = 0x1BE1E8u;
    // 0x1be1e8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BE1E8u;
    {
        const bool branch_taken_0x1be1e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE1E8u;
        // 0x1be1ec: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be1e8) {
            ctx->pc = 0x1BE210u;
            goto label_1be210;
        }
    }
    ctx->pc = 0x1BE1F0u;
    // 0x1be1f0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1BE1F0u;
    {
        const bool branch_taken_0x1be1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE1F0u;
        // 0x1be1f4: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be1f0) {
            ctx->pc = 0x1BE2F0u;
            goto label_1be2f0;
        }
    }
    ctx->pc = 0x1BE1F8u;
label_1be1f8:
    // 0x1be1f8: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1BE1F8u;
    {
        const bool branch_taken_0x1be1f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BE1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE1F8u;
        // 0x1be1fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be1f8) {
            ctx->pc = 0x1BE29Cu;
            goto label_1be29c;
        }
    }
    ctx->pc = 0x1BE200u;
    // 0x1be200: 0x50620037  beql        $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1BE200u;
    {
        const bool branch_taken_0x1be200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1be200) {
            ctx->pc = 0x1BE204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE200u;
            // 0x1be204: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE2E0u;
            goto label_1be2e0;
        }
    }
    ctx->pc = 0x1BE208u;
    // 0x1be208: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1BE208u;
    {
        const bool branch_taken_0x1be208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE208u;
        // 0x1be20c: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be208) {
            ctx->pc = 0x1BE2F0u;
            goto label_1be2f0;
        }
    }
    ctx->pc = 0x1BE210u;
label_1be210:
    // 0x1be210: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1be210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1be214: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1be214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1be218: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1be218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be21c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1be21cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be220: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1be220u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be224: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1be224u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be228: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1be228u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be22c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1BE22Cu;
    SET_GPR_U32(ctx, 31, 0x1BE234u);
    ctx->pc = 0x1BE230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE22Cu;
    // 0x1be230: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1BE22Cu, 0x1BE234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE234u;
label_1be234:
    // 0x1be234: 0xc06f9d0  jal         func_1BE740
    ctx->pc = 0x1BE234u;
    SET_GPR_U32(ctx, 31, 0x1BE23Cu);
    ctx->pc = 0x1BE238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE234u;
    // 0x1be238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE740u, 0x1BE234u, 0x1BE23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE23Cu;
label_1be23c:
    // 0x1be23c: 0xc06de42  jal         func_1B7908
    ctx->pc = 0x1BE23Cu;
    SET_GPR_U32(ctx, 31, 0x1BE244u);
    ctx->pc = 0x1BE240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE23Cu;
    // 0x1be240: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x1BE23Cu, 0x1BE244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE244u;
label_1be244:
    // 0x1be244: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1be244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1be248: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1be248u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1be24c: 0xae220900  sw          $v0, 0x900($s1)
    ctx->pc = 0x1be24cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2304), GPR_U32(ctx, 2));
    // 0x1be250: 0x24040241  addiu       $a0, $zero, 0x241
    ctx->pc = 0x1be250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    // 0x1be254: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1be254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be258: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1be258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be25c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1be25cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be260: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1be260u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1be264: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1BE264u;
    SET_GPR_U32(ctx, 31, 0x1BE26Cu);
    ctx->pc = 0x1BE268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE264u;
    // 0x1be268: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1BE264u, 0x1BE26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE26Cu;
label_1be26c:
    // 0x1be26c: 0xa23002f5  sb          $s0, 0x2F5($s1)
    ctx->pc = 0x1be26cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 16));
    // 0x1be270: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1be270u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be274: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1be274u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1be278:
    // 0x1be278: 0x8e220900  lw          $v0, 0x900($s1)
    ctx->pc = 0x1be278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2304)));
    // 0x1be27c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1be27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1be280: 0x1c40001a  bgtz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1BE280u;
    {
        const bool branch_taken_0x1be280 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1BE284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE280u;
        // 0x1be284: 0xae220900  sw          $v0, 0x900($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be280) {
            ctx->pc = 0x1BE2ECu;
            goto label_1be2ec;
        }
    }
    ctx->pc = 0x1BE288u;
    // 0x1be288: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1be288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1be28c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1be28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1be290: 0xae220900  sw          $v0, 0x900($s1)
    ctx->pc = 0x1be290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2304), GPR_U32(ctx, 2));
    // 0x1be294: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1BE294u;
    {
        const bool branch_taken_0x1be294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE294u;
        // 0x1be298: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be294) {
            ctx->pc = 0x1BE2E4u;
            goto label_1be2e4;
        }
    }
    ctx->pc = 0x1BE29Cu;
label_1be29c:
    // 0x1be29c: 0x8e220900  lw          $v0, 0x900($s1)
    ctx->pc = 0x1be29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2304)));
    // 0x1be2a0: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1be2a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1be2a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1be2a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be2a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1be2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1be2ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be2acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be2b0: 0x0  nop
    ctx->pc = 0x1be2b0u;
    // NOP
    // 0x1be2b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1be2b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1be2b8: 0xae220900  sw          $v0, 0x900($s1)
    ctx->pc = 0x1be2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2304), GPR_U32(ctx, 2));
    // 0x1be2bc: 0x0  nop
    ctx->pc = 0x1be2bcu;
    // NOP
    // 0x1be2c0: 0x0  nop
    ctx->pc = 0x1be2c0u;
    // NOP
    // 0x1be2c4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1be2c4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x1be2c8: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE2C8u;
    {
        const bool branch_taken_0x1be2c8 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1BE2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE2C8u;
        // 0x1be2cc: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be2c8) {
            ctx->pc = 0x1BE2ECu;
            goto label_1be2ec;
        }
    }
    ctx->pc = 0x1BE2D0u;
    // 0x1be2d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1be2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1be2d4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1be2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be2d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE2D8u;
    {
        const bool branch_taken_0x1be2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE2D8u;
        // 0x1be2dc: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be2d8) {
            ctx->pc = 0x1BE2E8u;
            goto label_1be2e8;
        }
    }
    ctx->pc = 0x1BE2E0u;
label_1be2e0:
    // 0x1be2e0: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1be2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_1be2e4:
    // 0x1be2e4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1be2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1be2e8:
    // 0x1be2e8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1be2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1be2ec:
    // 0x1be2ec: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1be2ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_1be2f0:
    // 0x1be2f0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1be2f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be2f4: 0x10560052  beq         $v0, $s6, . + 4 + (0x52 << 2)
    ctx->pc = 0x1BE2F4u;
    {
        const bool branch_taken_0x1be2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x1BE2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE2F4u;
        // 0x1be2f8: 0x3c1e0058  lui         $fp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be2f4) {
            ctx->pc = 0x1BE440u;
            goto label_1be440;
        }
    }
    ctx->pc = 0x1BE2FCu;
    // 0x1be2fc: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x1be2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
    // 0x1be300: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1be300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1be304: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x1be304u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1be308: 0x263506a0  addiu       $s5, $s1, 0x6A0
    ctx->pc = 0x1be308u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1696));
    // 0x1be30c: 0x26300670  addiu       $s0, $s1, 0x670
    ctx->pc = 0x1be30cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
    // 0x1be310: 0x26340690  addiu       $s4, $s1, 0x690
    ctx->pc = 0x1be310u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1680));
    // 0x1be314: 0x26330680  addiu       $s3, $s1, 0x680
    ctx->pc = 0x1be314u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1664));
    // 0x1be318: 0x26320660  addiu       $s2, $s1, 0x660
    ctx->pc = 0x1be318u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
    // 0x1be31c: 0x0  nop
    ctx->pc = 0x1be31cu;
    // NOP
label_1be320:
    // 0x1be320: 0xc05ce40  jal         func_173900
    ctx->pc = 0x1BE320u;
    SET_GPR_U32(ctx, 31, 0x1BE328u);
    ctx->pc = 0x1BE324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE320u;
    // 0x1be324: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x1BE320u, 0x1BE328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE328u;
label_1be328:
    // 0x1be328: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1be328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be32c: 0x5443003a  bnel        $v0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x1BE32Cu;
    {
        const bool branch_taken_0x1be32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1be32c) {
            ctx->pc = 0x1BE330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE32Cu;
            // 0x1be330: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE418u;
            goto label_1be418;
        }
    }
    ctx->pc = 0x1BE334u;
    // 0x1be334: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1BE334u;
    SET_GPR_U32(ctx, 31, 0x1BE33Cu);
    ctx->pc = 0x1BE338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE334u;
    // 0x1be338: 0x27c464f0  addiu       $a0, $fp, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1BE334u, 0x1BE33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE33Cu;
label_1be33c:
    // 0x1be33c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1be33cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1be340: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1be340u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1be344: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1be344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1be348: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1be348u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be34c: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1be34cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1be350: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1be350u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1be354: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1be354u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1be358: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1be358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1be35c: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x1be35cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1be360: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1be360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1be364: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x1be364u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
    // 0x1be368: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1be368u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be36c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1be36cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1be370: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x1be370u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1be374: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1be374u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1be378: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1be378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1be37c: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1be37cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be380: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1be380u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1be384: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1be384u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1be388: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1be388u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1be38c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1be38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1be390: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x1be390u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1be394: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1be394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1be398: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1be398u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1be39c: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1be39cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be3a0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1be3a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1be3a4: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1be3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1be3a8: 0xc07df68  jal         func_1F7DA0
    ctx->pc = 0x1BE3A8u;
    SET_GPR_U32(ctx, 31, 0x1BE3B0u);
    ctx->pc = 0x1BE3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE3A8u;
    // 0x1be3ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x1BE3A8u, 0x1BE3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE3B0u;
label_1be3b0:
    // 0x1be3b0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1be3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1be3b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1be3b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be3b8: 0xc051dca  jal         func_147728
    ctx->pc = 0x1BE3B8u;
    SET_GPR_U32(ctx, 31, 0x1BE3C0u);
    ctx->pc = 0x1BE3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE3B8u;
    // 0x1be3bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x1BE3B8u, 0x1BE3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE3C0u;
label_1be3c0:
    // 0x1be3c0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1be3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1be3c4: 0xc051f10  jal         func_147C40
    ctx->pc = 0x1BE3C4u;
    SET_GPR_U32(ctx, 31, 0x1BE3CCu);
    ctx->pc = 0x1BE3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE3C4u;
    // 0x1be3c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x1BE3C4u, 0x1BE3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE3CCu;
label_1be3cc:
    // 0x1be3cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1be3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1be3d0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1be3d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be3d4: 0xc051efe  jal         func_147BF8
    ctx->pc = 0x1BE3D4u;
    SET_GPR_U32(ctx, 31, 0x1BE3DCu);
    ctx->pc = 0x1BE3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE3D4u;
    // 0x1be3d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x1BE3D4u, 0x1BE3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE3DCu;
label_1be3dc:
    // 0x1be3dc: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1be3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1be3e0: 0xc051d4a  jal         func_147528
    ctx->pc = 0x1BE3E0u;
    SET_GPR_U32(ctx, 31, 0x1BE3E8u);
    ctx->pc = 0x1BE3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE3E0u;
    // 0x1be3e4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x1BE3E0u, 0x1BE3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE3E8u;
label_1be3e8:
    // 0x1be3e8: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x1be3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be3ec: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1be3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be3f0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1be3f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1be3f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1be3f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1be3f8: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x1be3f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be3fc: 0x0  nop
    ctx->pc = 0x1be3fcu;
    // NOP
    // 0x1be400: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE400u;
    {
        const bool branch_taken_0x1be400 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BE404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE400u;
        // 0x1be404: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be400) {
            ctx->pc = 0x1BE414u;
            goto label_1be414;
        }
    }
    ctx->pc = 0x1BE408u;
    // 0x1be408: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1be408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be40c: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1BE40Cu;
    SET_GPR_U32(ctx, 31, 0x1BE414u);
    ctx->pc = 0x1BE410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE40Cu;
    // 0x1be410: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1BE40Cu, 0x1BE414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE414u;
label_1be414:
    // 0x1be414: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1be414u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1be418:
    // 0x1be418: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x1be418u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x1be41c: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x1be41cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1be420: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x1be420u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x1be424: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x1be424u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x1be428: 0x2ac20008  slti        $v0, $s6, 0x8
    ctx->pc = 0x1be428u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1be42c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE42Cu;
    {
        const bool branch_taken_0x1be42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE42Cu;
        // 0x1be430: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be42c) {
            ctx->pc = 0x1BE440u;
            goto label_1be440;
        }
    }
    ctx->pc = 0x1BE434u;
    // 0x1be434: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1be434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1be438: 0x1456ffb9  bne         $v0, $s6, . + 4 + (-0x47 << 2)
    ctx->pc = 0x1BE438u;
    {
        const bool branch_taken_0x1be438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x1be438) {
            ctx->pc = 0x1BE320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be320;
        }
    }
    ctx->pc = 0x1BE440u;
label_1be440:
    // 0x1be440: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x1be440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1be444: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x1be444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1be448: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x1be448u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1be44c: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x1be44cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1be450: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x1be450u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1be454: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x1be454u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1be458: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1be458u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1be45c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1be45cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1be460: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x1be460u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1be464: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1be464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1be468: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x1be468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1be46c: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x1be46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1be470: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE470u;
        // 0x1be474: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE478u;
}
