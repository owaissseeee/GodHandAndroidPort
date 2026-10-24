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

// Function: func_0027C888
// Address: 0x27c888 - 0x27ca50
void func_0027C888_0x27c888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027C888_0x27c888");
#endif

    switch (ctx->pc) {
        case 0x27c8e8u: goto label_27c8e8;
        case 0x27c960u: goto label_27c960;
        case 0x27c990u: goto label_27c990;
        case 0x27c9a4u: goto label_27c9a4;
        case 0x27c9e0u: goto label_27c9e0;
        case 0x27ca10u: goto label_27ca10;
        case 0x27ca24u: goto label_27ca24;
        default: break;
    }

    ctx->pc = 0x27c888u;

    // 0x27c888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27c888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27c88c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27c88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27c890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27c890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27c894: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27c894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c898: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x27c898u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27c89c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x27c89cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x27c8a0: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x27C8A0u;
    {
        const bool branch_taken_0x27c8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C8A0u;
        // 0x27c8a4: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c8a0) {
            ctx->pc = 0x27CA3Cu;
            goto label_27ca3c;
        }
    }
    ctx->pc = 0x27C8A8u;
    // 0x27c8a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27c8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27c8ac: 0x24428110  addiu       $v0, $v0, -0x7EF0
    ctx->pc = 0x27c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934800));
    // 0x27c8b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27c8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27c8b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27c8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27c8b8: 0x800008  jr          $a0
    ctx->pc = 0x27C8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27C8C0u: goto label_27c8c0;
            case 0x27C92Cu: goto label_27c92c;
            case 0x27C99Cu: goto label_27c99c;
            case 0x27C9ACu: goto label_27c9ac;
            case 0x27CA1Cu: goto label_27ca1c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C8B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27C8C0u;
label_27c8c0:
    // 0x27c8c0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x27c8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x27c8c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27c8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c8c8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x27c8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x27c8cc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x27c8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x27c8d0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27c8d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c8d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27c8d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c8d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27c8d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c8dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x27c8dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c8e0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x27C8E0u;
    SET_GPR_U32(ctx, 31, 0x27C8E8u);
    ctx->pc = 0x27C8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C8E0u;
    // 0x27c8e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x27C8E0u, 0x27C8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C8E8u;
label_27c8e8:
    // 0x27c8e8: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x27c8e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x27c8ec: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x27C8ECu;
    {
        const bool branch_taken_0x27c8ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C8ECu;
        // 0x27c8f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c8ec) {
            ctx->pc = 0x27C910u;
            goto label_27c910;
        }
    }
    ctx->pc = 0x27C8F4u;
    // 0x27c8f4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27c8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27c8f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c8fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27c8fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27c900: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x27c900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x27c904: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27c904u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c908: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x27C908u;
    {
        const bool branch_taken_0x27c908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C908u;
        // 0x27c90c: 0x8c460064  lw          $a2, 0x64($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c908) {
            ctx->pc = 0x27C950u;
            goto label_27c950;
        }
    }
    ctx->pc = 0x27C910u;
label_27c910:
    // 0x27c910: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27c910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27c914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c918: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27c918u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27c91c: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x27c91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x27c920: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27c920u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c924: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x27C924u;
    {
        const bool branch_taken_0x27c924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C924u;
        // 0x27c928: 0x8c46004c  lw          $a2, 0x4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c924) {
            ctx->pc = 0x27C980u;
            goto label_27c980;
        }
    }
    ctx->pc = 0x27C92Cu;
label_27c92c:
    // 0x27c92c: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x27c92cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x27c930: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27C930u;
    {
        const bool branch_taken_0x27c930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C930u;
        // 0x27c934: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c930) {
            ctx->pc = 0x27C968u;
            goto label_27c968;
        }
    }
    ctx->pc = 0x27C938u;
    // 0x27c938: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27c938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27c93c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c940: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27c940u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27c944: 0x8c450068  lw          $a1, 0x68($v0)
    ctx->pc = 0x27c944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x27c948: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27c948u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c94c: 0x8c46006c  lw          $a2, 0x6C($v0)
    ctx->pc = 0x27c94cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_27c950:
    // 0x27c950: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27c950u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c954: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27c954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27c958: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27C958u;
    SET_GPR_U32(ctx, 31, 0x27C960u);
    ctx->pc = 0x27C95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C958u;
    // 0x27c95c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27C958u, 0x27C960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C960u;
label_27c960:
    // 0x27c960: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27C960u;
    {
        const bool branch_taken_0x27c960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C960u;
        // 0x27c964: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c960) {
            ctx->pc = 0x27C994u;
            goto label_27c994;
        }
    }
    ctx->pc = 0x27C968u;
label_27c968:
    // 0x27c968: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27c968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27c96c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c970: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27c970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27c974: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x27c974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x27c978: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27c978u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c97c: 0x8c460054  lw          $a2, 0x54($v0)
    ctx->pc = 0x27c97cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_27c980:
    // 0x27c980: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27c980u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c984: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27c984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27c988: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27C988u;
    SET_GPR_U32(ctx, 31, 0x27C990u);
    ctx->pc = 0x27C98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C988u;
    // 0x27c98c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27C988u, 0x27C990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C990u;
label_27c990:
    // 0x27c990: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27c990u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_27c994:
    // 0x27c994: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c998: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27c998u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27c99c:
    // 0x27c99c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27C99Cu;
    SET_GPR_U32(ctx, 31, 0x27C9A4u);
    ctx->pc = 0x27C9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C99Cu;
    // 0x27c9a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27C99Cu, 0x27C9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C9A4u;
label_27c9a4:
    // 0x27c9a4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x27C9A4u;
    {
        const bool branch_taken_0x27c9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C9A4u;
        // 0x27c9a8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c9a4) {
            ctx->pc = 0x27CA40u;
            goto label_27ca40;
        }
    }
    ctx->pc = 0x27C9ACu;
label_27c9ac:
    // 0x27c9ac: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x27c9acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x27c9b0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27C9B0u;
    {
        const bool branch_taken_0x27c9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C9B0u;
        // 0x27c9b4: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c9b0) {
            ctx->pc = 0x27C9E8u;
            goto label_27c9e8;
        }
    }
    ctx->pc = 0x27C9B8u;
    // 0x27c9b8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27c9bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c9c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27c9c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27c9c4: 0x8c450070  lw          $a1, 0x70($v0)
    ctx->pc = 0x27c9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x27c9c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27c9c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c9cc: 0x8c460074  lw          $a2, 0x74($v0)
    ctx->pc = 0x27c9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x27c9d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27c9d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c9d4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27c9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27c9d8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27C9D8u;
    SET_GPR_U32(ctx, 31, 0x27C9E0u);
    ctx->pc = 0x27C9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C9D8u;
    // 0x27c9dc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27C9D8u, 0x27C9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C9E0u;
label_27c9e0:
    // 0x27c9e0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27C9E0u;
    {
        const bool branch_taken_0x27c9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C9E0u;
        // 0x27c9e4: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c9e0) {
            ctx->pc = 0x27CA14u;
            goto label_27ca14;
        }
    }
    ctx->pc = 0x27C9E8u;
label_27c9e8:
    // 0x27c9e8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27c9ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c9f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27c9f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27c9f4: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x27c9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x27c9f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27c9f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c9fc: 0x8c46005c  lw          $a2, 0x5C($v0)
    ctx->pc = 0x27c9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x27ca00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27ca00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ca04: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27ca04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27ca08: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27CA08u;
    SET_GPR_U32(ctx, 31, 0x27CA10u);
    ctx->pc = 0x27CA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CA08u;
    // 0x27ca0c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27CA08u, 0x27CA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CA10u;
label_27ca10:
    // 0x27ca10: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27ca10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_27ca14:
    // 0x27ca14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27ca18: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27ca18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27ca1c:
    // 0x27ca1c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27CA1Cu;
    SET_GPR_U32(ctx, 31, 0x27CA24u);
    ctx->pc = 0x27CA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CA1Cu;
    // 0x27ca20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27CA1Cu, 0x27CA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CA24u;
label_27ca24:
    // 0x27ca24: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27CA24u;
    {
        const bool branch_taken_0x27ca24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ca24) {
            ctx->pc = 0x27CA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CA24u;
            // 0x27ca28: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CA40u;
            goto label_27ca40;
        }
    }
    ctx->pc = 0x27CA2Cu;
    // 0x27ca2c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x27ca2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27ca30: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x27ca30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x27ca34: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x27ca34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x27ca38: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x27ca38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_27ca3c:
    // 0x27ca3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27ca3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27ca40:
    // 0x27ca40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27ca40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ca44: 0x3e00008  jr          $ra
    ctx->pc = 0x27CA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CA44u;
        // 0x27ca48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27CA4Cu;
    // 0x27ca4c: 0x0  nop
    ctx->pc = 0x27ca4cu;
    // NOP
    ctx->pc = 0x27ca50u;
}
