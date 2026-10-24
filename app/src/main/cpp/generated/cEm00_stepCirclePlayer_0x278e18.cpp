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

// Function: cEm00_stepCirclePlayer
// Address: 0x278e18 - 0x279390
void cEm00_stepCirclePlayer_0x278e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_stepCirclePlayer_0x278e18");
#endif

    switch (ctx->pc) {
        case 0x278e58u: goto label_278e58;
        case 0x278eb0u: goto label_278eb0;
        case 0x278ed0u: goto label_278ed0;
        case 0x278ef8u: goto label_278ef8;
        case 0x278f04u: goto label_278f04;
        case 0x278f3cu: goto label_278f3c;
        case 0x278fb8u: goto label_278fb8;
        case 0x27900cu: goto label_27900c;
        case 0x279070u: goto label_279070;
        case 0x27907cu: goto label_27907c;
        case 0x2790d4u: goto label_2790d4;
        case 0x27912cu: goto label_27912c;
        case 0x279180u: goto label_279180;
        case 0x2791e4u: goto label_2791e4;
        case 0x2791f0u: goto label_2791f0;
        case 0x279260u: goto label_279260;
        case 0x27927cu: goto label_27927c;
        case 0x279340u: goto label_279340;
        case 0x279370u: goto label_279370;
        default: break;
    }

    ctx->pc = 0x278e18u;

    // 0x278e18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x278e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x278e1c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x278e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x278e20: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x278e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x278e24: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x278e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x278e28: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x278e28u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x278e2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x278e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278e30: 0x8c516a7c  lw          $s1, 0x6A7C($v0)
    ctx->pc = 0x278e30u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x586A7Cu));
    // 0x278e34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x278e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x278e38: 0x3c015a0e  lui         $at, 0x5A0E
    ctx->pc = 0x278e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23054 << 16));
    // 0x278e3c: 0x34211bca  ori         $at, $at, 0x1BCA
    ctx->pc = 0x278e3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7114);
    // 0x278e40: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x278e40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x278e44: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x278E44u;
    {
        const bool branch_taken_0x278e44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x278E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E44u;
        // 0x278e48: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278e44) {
            ctx->pc = 0x278E5Cu;
            goto label_278e5c;
        }
    }
    ctx->pc = 0x278E4Cu;
    // 0x278e4c: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x278e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x278e50: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x278E50u;
    SET_GPR_U32(ctx, 31, 0x278E58u);
    ctx->pc = 0x278E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278E50u;
    // 0x278e54: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x278E50u, 0x278E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278E58u;
label_278e58:
    // 0x278e58: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x278e58u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_278e5c:
    // 0x278e5c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x278e5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x278e60: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x278e60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x278e64: 0x104000f4  beqz        $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x278E64u;
    {
        const bool branch_taken_0x278e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E64u;
        // 0x278e68: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278e64) {
            ctx->pc = 0x279238u;
            goto label_279238;
        }
    }
    ctx->pc = 0x278E6Cu;
    // 0x278e6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x278e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x278e70: 0x24427cf0  addiu       $v0, $v0, 0x7CF0
    ctx->pc = 0x278e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31984));
    // 0x278e74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x278e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x278e78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x278e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278e7c: 0x800008  jr          $a0
    ctx->pc = 0x278E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x278E84u: goto label_278e84;
            case 0x278EC8u: goto label_278ec8;
            case 0x278F0Cu: goto label_278f0c;
            case 0x278F78u: goto label_278f78;
            case 0x2790A8u: goto label_2790a8;
            case 0x2790ECu: goto label_2790ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278E7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x278E84u;
label_278e84:
    // 0x278e84: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x278e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x278e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278e8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x278e8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x278e90: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x278e90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x278e94: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x278e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x278e98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x278e98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278e9c: 0x8c460020  lw          $a2, 0x20($v0)
    ctx->pc = 0x278e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x278ea0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x278ea0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278ea4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x278ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x278ea8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x278EA8u;
    SET_GPR_U32(ctx, 31, 0x278EB0u);
    ctx->pc = 0x278EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278EA8u;
    // 0x278eac: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x278EA8u, 0x278EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278EB0u;
label_278eb0:
    // 0x278eb0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x278eb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x278eb4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x278eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x278eb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x278eb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278ebc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x278ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x278ec0: 0xe6000608  swc1        $f0, 0x608($s0)
    ctx->pc = 0x278ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1544), bits); }
    // 0x278ec4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x278ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_278ec8:
    // 0x278ec8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x278EC8u;
    SET_GPR_U32(ctx, 31, 0x278ED0u);
    ctx->pc = 0x278ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278EC8u;
    // 0x278ecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x278EC8u, 0x278ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278ED0u;
label_278ed0:
    // 0x278ed0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x278ED0u;
    {
        const bool branch_taken_0x278ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x278ed0) {
            ctx->pc = 0x278EE4u;
            goto label_278ee4;
        }
    }
    ctx->pc = 0x278ED8u;
    // 0x278ed8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x278ed8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x278edc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x278edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x278ee0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x278ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_278ee4:
    // 0x278ee4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x278ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x278ee8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x278ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x278eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278ef0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x278EF0u;
    SET_GPR_U32(ctx, 31, 0x278EF8u);
    ctx->pc = 0x278EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278EF0u;
    // 0x278ef4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x278EF0u, 0x278EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278EF8u;
label_278ef8:
    // 0x278ef8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x278ef8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x278efc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x278EFCu;
    SET_GPR_U32(ctx, 31, 0x278F04u);
    ctx->pc = 0x278F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278EFCu;
    // 0x278f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x278EFCu, 0x278F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278F04u;
label_278f04:
    // 0x278f04: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x278F04u;
    {
        const bool branch_taken_0x278f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F04u;
        // 0x278f08: 0xc6000608  lwc1        $f0, 0x608($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f04) {
            ctx->pc = 0x27923Cu;
            goto label_27923c;
        }
    }
    ctx->pc = 0x278F0Cu;
label_278f0c:
    // 0x278f0c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x278f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x278f10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278f14: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x278f14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x278f18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x278f18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278f1c: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x278f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x278f20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x278f20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278f24: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x278f24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x278f28: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x278f28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x278f2c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x278f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x278f30: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x278f30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278f34: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x278F34u;
    SET_GPR_U32(ctx, 31, 0x278F3Cu);
    ctx->pc = 0x278F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278F34u;
    // 0x278f38: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x278F34u, 0x278F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278F3Cu;
label_278f3c:
    // 0x278f3c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x278f3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x278f40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x278f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x278f44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x278f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278f48: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x278f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x278f4c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x278f4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x278f50: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x278f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x278f54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x278f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x278f58: 0x3c0143e1  lui         $at, 0x43E1
    ctx->pc = 0x278f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17377 << 16));
    // 0x278f5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x278f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x278f60: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x278f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x278f64: 0xe6140584  swc1        $f20, 0x584($s0)
    ctx->pc = 0x278f64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1412), bits); }
    // 0x278f68: 0xe6020588  swc1        $f2, 0x588($s0)
    ctx->pc = 0x278f68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1416), bits); }
    // 0x278f6c: 0xe6010604  swc1        $f1, 0x604($s0)
    ctx->pc = 0x278f6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
    // 0x278f70: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x278f70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x278f74: 0xe6140580  swc1        $f20, 0x580($s0)
    ctx->pc = 0x278f74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
label_278f78:
    // 0x278f78: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x278F78u;
    {
        const bool branch_taken_0x278f78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x278f78) {
            ctx->pc = 0x279004u;
            goto label_279004;
        }
    }
    ctx->pc = 0x278F80u;
    // 0x278f80: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x278f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x278f84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x278f84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278f88: 0x0  nop
    ctx->pc = 0x278f88u;
    // NOP
    // 0x278f8c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x278f8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x278f90: 0x0  nop
    ctx->pc = 0x278f90u;
    // NOP
    // 0x278f94: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x278F94u;
    {
        const bool branch_taken_0x278f94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x278F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F94u;
        // 0x278f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f94) {
            ctx->pc = 0x278FB8u;
            goto label_278fb8;
        }
    }
    ctx->pc = 0x278F9Cu;
    // 0x278f9c: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x278f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278fa0: 0x3c013cc9  lui         $at, 0x3CC9
    ctx->pc = 0x278fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15561 << 16));
    // 0x278fa4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x278fa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x278fa8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x278fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x278fac: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x278facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x278fb0: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x278FB0u;
    SET_GPR_U32(ctx, 31, 0x278FB8u);
    ctx->pc = 0x278FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278FB0u;
    // 0x278fb4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x278FB0u, 0x278FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278FB8u;
label_278fb8:
    // 0x278fb8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x278fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x278fbc: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x278fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x278fc0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x278fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x278fc4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x278fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278fc8: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x278fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x278fcc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x278fccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x278fd0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x278fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x278fd4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x278fd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x278fd8: 0x0  nop
    ctx->pc = 0x278fd8u;
    // NOP
    // 0x278fdc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x278FDCu;
    {
        const bool branch_taken_0x278fdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x278fdc) {
            ctx->pc = 0x279004u;
            goto label_279004;
        }
    }
    ctx->pc = 0x278FE4u;
    // 0x278fe4: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x278fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278fe8: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x278fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x278fec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x278fecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x278ff0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x278ff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x278ff4: 0x0  nop
    ctx->pc = 0x278ff4u;
    // NOP
    // 0x278ff8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x278ff8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x278ffc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x278ffcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x279000: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x279000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_279004:
    // 0x279004: 0xc055f06  jal         func_157C18
    ctx->pc = 0x279004u;
    SET_GPR_U32(ctx, 31, 0x27900Cu);
    ctx->pc = 0x279008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279004u;
    // 0x279008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x279004u, 0x27900Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27900Cu;
label_27900c:
    // 0x27900c: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x27900cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279010: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x279010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x279014: 0x26020580  addiu       $v0, $s0, 0x580
    ctx->pc = 0x279014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x279018: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x279018u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27901c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x27901cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x279020: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x279020u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279024: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x279024u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x279028: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x279028u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x27902c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x27902cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x279030: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x279030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x279034: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x279034u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279038: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x279038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x27903c: 0x26020330  addiu       $v0, $s0, 0x330
    ctx->pc = 0x27903cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    // 0x279040: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x279040u;
    {
        const bool branch_taken_0x279040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x279044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279040u;
        // 0x279044: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x279040) {
            ctx->pc = 0x27905Cu;
            goto label_27905c;
        }
    }
    ctx->pc = 0x279048u;
    // 0x279048: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x279048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27904c: 0xe6000330  swc1        $f0, 0x330($s0)
    ctx->pc = 0x27904cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 816), bits); }
    // 0x279050: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x279050u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x279054: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x279054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279058: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x279058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_27905c:
    // 0x27905c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27905cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x279060: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x279060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x279064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279068: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x279068u;
    SET_GPR_U32(ctx, 31, 0x279070u);
    ctx->pc = 0x27906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279068u;
    // 0x27906c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x279068u, 0x279070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279070u;
label_279070:
    // 0x279070: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x279070u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x279074: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x279074u;
    SET_GPR_U32(ctx, 31, 0x27907Cu);
    ctx->pc = 0x279078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279074u;
    // 0x279078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x279074u, 0x27907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27907Cu;
label_27907c:
    // 0x27907c: 0xc6000604  lwc1        $f0, 0x604($s0)
    ctx->pc = 0x27907cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279080: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x279080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279084: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x279084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x279088: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x279088u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27908c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x27908cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x279090: 0x0  nop
    ctx->pc = 0x279090u;
    // NOP
    // 0x279094: 0x45000068  bc1f        . + 4 + (0x68 << 2)
    ctx->pc = 0x279094u;
    {
        const bool branch_taken_0x279094 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279094u;
        // 0x279098: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x279094) {
            ctx->pc = 0x279238u;
            goto label_279238;
        }
    }
    ctx->pc = 0x27909Cu;
    // 0x27909c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27909cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2790a0: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2790A0u;
    {
        const bool branch_taken_0x2790a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2790A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2790A0u;
        // 0x2790a4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2790a0) {
            ctx->pc = 0x279234u;
            goto label_279234;
        }
    }
    ctx->pc = 0x2790A8u;
label_2790a8:
    // 0x2790a8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2790a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2790ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2790acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2790b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2790b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2790b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2790b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2790b8: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x2790b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2790bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2790bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2790c0: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x2790c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2790c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2790c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2790c8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2790c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2790cc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2790CCu;
    SET_GPR_U32(ctx, 31, 0x2790D4u);
    ctx->pc = 0x2790D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2790CCu;
    // 0x2790d0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2790CCu, 0x2790D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2790D4u;
label_2790d4:
    // 0x2790d4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2790d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2790d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2790d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2790dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2790dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2790e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2790e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2790e4: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x2790e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x2790e8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2790e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2790ec:
    // 0x2790ec: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2790ECu;
    {
        const bool branch_taken_0x2790ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2790ec) {
            ctx->pc = 0x279178u;
            goto label_279178;
        }
    }
    ctx->pc = 0x2790F4u;
    // 0x2790f4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2790f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2790f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2790f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2790fc: 0x0  nop
    ctx->pc = 0x2790fcu;
    // NOP
    // 0x279100: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x279100u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x279104: 0x0  nop
    ctx->pc = 0x279104u;
    // NOP
    // 0x279108: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x279108u;
    {
        const bool branch_taken_0x279108 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279108u;
        // 0x27910c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279108) {
            ctx->pc = 0x27912Cu;
            goto label_27912c;
        }
    }
    ctx->pc = 0x279110u;
    // 0x279110: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x279110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279114: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x279114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x279118: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x279118u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x27911c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27911cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x279120: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x279120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x279124: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x279124u;
    SET_GPR_U32(ctx, 31, 0x27912Cu);
    ctx->pc = 0x279128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279124u;
    // 0x279128: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x279124u, 0x27912Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27912Cu;
label_27912c:
    // 0x27912c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x27912cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x279130: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x279130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x279134: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x279134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x279138: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x279138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27913c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x27913cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x279140: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x279140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x279144: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x279144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x279148: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x279148u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27914c: 0x0  nop
    ctx->pc = 0x27914cu;
    // NOP
    // 0x279150: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x279150u;
    {
        const bool branch_taken_0x279150 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x279150) {
            ctx->pc = 0x279178u;
            goto label_279178;
        }
    }
    ctx->pc = 0x279158u;
    // 0x279158: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x279158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27915c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x27915cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x279160: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x279160u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x279164: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x279164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x279168: 0x0  nop
    ctx->pc = 0x279168u;
    // NOP
    // 0x27916c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27916cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x279170: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x279170u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x279174: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x279174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_279178:
    // 0x279178: 0xc055f06  jal         func_157C18
    ctx->pc = 0x279178u;
    SET_GPR_U32(ctx, 31, 0x279180u);
    ctx->pc = 0x27917Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279178u;
    // 0x27917c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x279178u, 0x279180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279180u;
label_279180:
    // 0x279180: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x279180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279184: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x279184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x279188: 0x26020580  addiu       $v0, $s0, 0x580
    ctx->pc = 0x279188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x27918c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x27918cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279190: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x279190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x279194: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x279194u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279198: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x279198u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x27919c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x27919cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2791a0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2791a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2791a4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2791a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2791a8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2791a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2791ac: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2791acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2791b0: 0x26020330  addiu       $v0, $s0, 0x330
    ctx->pc = 0x2791b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    // 0x2791b4: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2791B4u;
    {
        const bool branch_taken_0x2791b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2791B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791B4u;
        // 0x2791b8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2791b4) {
            ctx->pc = 0x2791D0u;
            goto label_2791d0;
        }
    }
    ctx->pc = 0x2791BCu;
    // 0x2791bc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2791bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2791c0: 0xe6000330  swc1        $f0, 0x330($s0)
    ctx->pc = 0x2791c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 816), bits); }
    // 0x2791c4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2791c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2791c8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2791c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2791cc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2791ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2791d0:
    // 0x2791d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2791d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2791d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2791d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2791d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2791d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2791dc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2791DCu;
    SET_GPR_U32(ctx, 31, 0x2791E4u);
    ctx->pc = 0x2791E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2791DCu;
    // 0x2791e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2791DCu, 0x2791E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2791E4u;
label_2791e4:
    // 0x2791e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2791e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2791e8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2791E8u;
    SET_GPR_U32(ctx, 31, 0x2791F0u);
    ctx->pc = 0x2791ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2791E8u;
    // 0x2791ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2791E8u, 0x2791F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2791F0u;
label_2791f0:
    // 0x2791f0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2791f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2791f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2791f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2791f8: 0x0  nop
    ctx->pc = 0x2791f8u;
    // NOP
    // 0x2791fc: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2791fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x279200: 0x0  nop
    ctx->pc = 0x279200u;
    // NOP
    // 0x279204: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x279204u;
    {
        const bool branch_taken_0x279204 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279204u;
        // 0x279208: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279204) {
            ctx->pc = 0x27921Cu;
            goto label_27921c;
        }
    }
    ctx->pc = 0x27920Cu;
    // 0x27920c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x27920cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x279210: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x279210u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x279214: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x279214u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x279218: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x279218u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_27921c:
    // 0x27921c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27921Cu;
    {
        const bool branch_taken_0x27921c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x279220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27921Cu;
        // 0x279220: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27921c) {
            ctx->pc = 0x279238u;
            goto label_279238;
        }
    }
    ctx->pc = 0x279224u;
    // 0x279224: 0x922302f4  lbu         $v1, 0x2F4($s1)
    ctx->pc = 0x279224u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
    // 0x279228: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x279228u;
    {
        const bool branch_taken_0x279228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x279228) {
            ctx->pc = 0x27922Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279228u;
            // 0x27922c: 0xc6000608  lwc1        $f0, 0x608($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27923Cu;
            goto label_27923c;
        }
    }
    ctx->pc = 0x279230u;
    // 0x279230: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x279230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_279234:
    // 0x279234: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x279234u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_279238:
    // 0x279238: 0xc6000608  lwc1        $f0, 0x608($s0)
    ctx->pc = 0x279238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27923c:
    // 0x27923c: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x27923cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279240: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x279240u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x279244: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x279244u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x279248: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x279248u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27924c: 0x0  nop
    ctx->pc = 0x27924cu;
    // NOP
    // 0x279250: 0x45000047  bc1f        . + 4 + (0x47 << 2)
    ctx->pc = 0x279250u;
    {
        const bool branch_taken_0x279250 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279250u;
        // 0x279254: 0xe6000608  swc1        $f0, 0x608($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1544), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x279250) {
            ctx->pc = 0x279370u;
            goto label_279370;
        }
    }
    ctx->pc = 0x279258u;
    // 0x279258: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x279258u;
    SET_GPR_U32(ctx, 31, 0x279260u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x279258u, 0x279260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279260u;
label_279260:
    // 0x279260: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x279260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x279264: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x279264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x279268: 0x0  nop
    ctx->pc = 0x279268u;
    // NOP
    // 0x27926c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27926cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x279270: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x279270u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x279274: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x279274u;
    SET_GPR_U32(ctx, 31, 0x27927Cu);
    ctx->pc = 0x279278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279274u;
    // 0x279278: 0xe6000608  swc1        $f0, 0x608($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1544), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x279274u, 0x27927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27927Cu;
label_27927c:
    // 0x27927c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x27927cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x279280: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x279280u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x279284: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x279284u;
    {
        const bool branch_taken_0x279284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x279284) {
            ctx->pc = 0x279288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279284u;
            // 0x279288: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27928Cu;
            goto label_27928c;
        }
    }
    ctx->pc = 0x27928Cu;
label_27928c:
    // 0x27928c: 0x2010  mfhi        $a0
    ctx->pc = 0x27928cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x279290: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x279290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x279294: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x279294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x279298: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x279298u;
    {
        const bool branch_taken_0x279298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279298u;
        // 0x27929c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279298) {
            ctx->pc = 0x2792B8u;
            goto label_2792b8;
        }
    }
    ctx->pc = 0x2792A0u;
    // 0x2792a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2792a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2792a4: 0x24427d10  addiu       $v0, $v0, 0x7D10
    ctx->pc = 0x2792a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32016));
    // 0x2792a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2792a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2792ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2792acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2792b0: 0x800008  jr          $a0
    ctx->pc = 0x2792B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2792B8u: goto label_2792b8;
            case 0x2792D0u: goto label_2792d0;
            case 0x2792E8u: goto label_2792e8;
            case 0x279300u: goto label_279300;
            case 0x279318u: goto label_279318;
            case 0x279348u: goto label_279348;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2792B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2792B8u;
label_2792b8:
    // 0x2792b8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2792b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2792bc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2792bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2792c0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2792c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2792c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2792c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2792c8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2792C8u;
    {
        const bool branch_taken_0x2792c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2792CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792C8u;
        // 0x2792cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2792c8) {
            ctx->pc = 0x27932Cu;
            goto label_27932c;
        }
    }
    ctx->pc = 0x2792D0u;
label_2792d0:
    // 0x2792d0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2792d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2792d4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2792d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2792d8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2792d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2792dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2792dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2792e0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2792E0u;
    {
        const bool branch_taken_0x2792e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2792E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792E0u;
        // 0x2792e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2792e0) {
            ctx->pc = 0x27932Cu;
            goto label_27932c;
        }
    }
    ctx->pc = 0x2792E8u;
label_2792e8:
    // 0x2792e8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2792e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2792ec: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2792ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2792f0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2792f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2792f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2792f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2792f8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2792F8u;
    {
        const bool branch_taken_0x2792f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2792FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792F8u;
        // 0x2792fc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2792f8) {
            ctx->pc = 0x27932Cu;
            goto label_27932c;
        }
    }
    ctx->pc = 0x279300u;
label_279300:
    // 0x279300: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x279300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x279304: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x279304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279308: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x279308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x27930c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27930cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279310: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x279310u;
    {
        const bool branch_taken_0x279310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279310u;
        // 0x279314: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279310) {
            ctx->pc = 0x27932Cu;
            goto label_27932c;
        }
    }
    ctx->pc = 0x279318u;
label_279318:
    // 0x279318: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x279318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x27931c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27931cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279320: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x279320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x279324: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x279324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279328: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x279328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27932c:
    // 0x27932c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27932cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279330: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x279330u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279334: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x279334u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279338: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x279338u;
    SET_GPR_U32(ctx, 31, 0x279340u);
    ctx->pc = 0x27933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279338u;
    // 0x27933c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x279338u, 0x279340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279340u;
label_279340:
    // 0x279340: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x279340u;
    {
        const bool branch_taken_0x279340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279340u;
        // 0x279344: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279340) {
            ctx->pc = 0x279374u;
            goto label_279374;
        }
    }
    ctx->pc = 0x279348u;
label_279348:
    // 0x279348: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x279348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x27934c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27934cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279350: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x279350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x279354: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x279354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279358: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x279358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27935c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27935cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279360: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x279360u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279364: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x279364u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279368: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x279368u;
    SET_GPR_U32(ctx, 31, 0x279370u);
    ctx->pc = 0x27936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279368u;
    // 0x27936c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x279368u, 0x279370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279370u;
label_279370:
    // 0x279370: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x279370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_279374:
    // 0x279374: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x279374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279378: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x279378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27937c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x27937cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x279380: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x279380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x279384: 0x3e00008  jr          $ra
    ctx->pc = 0x279384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279384u;
        // 0x279388: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27938Cu;
    // 0x27938c: 0x0  nop
    ctx->pc = 0x27938cu;
    // NOP
    ctx->pc = 0x279390u;
}
