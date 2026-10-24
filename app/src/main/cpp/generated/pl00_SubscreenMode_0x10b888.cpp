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

// Function: pl00_SubscreenMode
// Address: 0x10b888 - 0x10b980
void pl00_SubscreenMode_0x10b888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pl00_SubscreenMode_0x10b888");
#endif

    switch (ctx->pc) {
        case 0x10b8e8u: goto label_10b8e8;
        case 0x10b8f0u: goto label_10b8f0;
        case 0x10b92cu: goto label_10b92c;
        case 0x10b934u: goto label_10b934;
        case 0x10b93cu: goto label_10b93c;
        case 0x10b948u: goto label_10b948;
        case 0x10b950u: goto label_10b950;
        case 0x10b964u: goto label_10b964;
        case 0x10b96cu: goto label_10b96c;
        default: break;
    }

    ctx->pc = 0x10b888u;

    // 0x10b888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b88c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10b88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10b890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10b894: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x10B894u;
    {
        const bool branch_taken_0x10b894 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B894u;
        // 0x10b898: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b894) {
            ctx->pc = 0x10B8CCu;
            goto label_10b8cc;
        }
    }
    ctx->pc = 0x10B89Cu;
    // 0x10b89c: 0x92020420  lbu         $v0, 0x420($s0)
    ctx->pc = 0x10b89cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1056)));
    // 0x10b8a0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x10b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10b8a4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x10b8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x10b8a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10b8a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b8ac: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x10b8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x10b8b0: 0xa20302f4  sb          $v1, 0x2F4($s0)
    ctx->pc = 0x10b8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
    // 0x10b8b4: 0xa2020420  sb          $v0, 0x420($s0)
    ctx->pc = 0x10b8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1056), (uint8_t)GPR_U32(ctx, 2));
    // 0x10b8b8: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x10b8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x10b8bc: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x10b8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x10b8c0: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x10b8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x10b8c4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x10B8C4u;
    {
        const bool branch_taken_0x10b8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8C4u;
        // 0x10b8c8: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b8c4) {
            ctx->pc = 0x10B96Cu;
            goto label_10b96c;
        }
    }
    ctx->pc = 0x10B8CCu;
label_10b8cc:
    // 0x10b8cc: 0x92020420  lbu         $v0, 0x420($s0)
    ctx->pc = 0x10b8ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1056)));
    // 0x10b8d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10b8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b8d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10b8d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b8d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b8dc: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x10b8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x10b8e0: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x10B8E0u;
    SET_GPR_U32(ctx, 31, 0x10B8E8u);
    ctx->pc = 0x10B8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B8E0u;
    // 0x10b8e4: 0xa2020420  sb          $v0, 0x420($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1056), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x10B8E0u, 0x10B8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B8E8u;
label_10b8e8:
    // 0x10b8e8: 0xc0499dc  jal         func_126770
    ctx->pc = 0x10B8E8u;
    SET_GPR_U32(ctx, 31, 0x10B8F0u);
    ctx->pc = 0x10B8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B8E8u;
    // 0x10b8ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126770u, 0x10B8E8u, 0x10B8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B8F0u;
label_10b8f0:
    // 0x10b8f0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x10b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x10b8f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10b8f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b8f8: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x10b8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x10b8fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10b8fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b900: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x10b900u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x10b904: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10b904u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b908: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x10b908u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x10b90c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b910: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x10b910u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x10b914: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10b914u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10b918: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x10b918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10b91c: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x10b91cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x10b920: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x10b920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x10b924: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x10B924u;
    SET_GPR_U32(ctx, 31, 0x10B92Cu);
    ctx->pc = 0x10B928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B924u;
    // 0x10b928: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10B924u, 0x10B92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B92Cu;
label_10b92c:
    // 0x10b92c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x10B92Cu;
    SET_GPR_U32(ctx, 31, 0x10B934u);
    ctx->pc = 0x10B930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B92Cu;
    // 0x10b930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10B92Cu, 0x10B934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B934u;
label_10b934:
    // 0x10b934: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x10B934u;
    SET_GPR_U32(ctx, 31, 0x10B93Cu);
    ctx->pc = 0x10B938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B934u;
    // 0x10b938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x10B934u, 0x10B93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B93Cu;
label_10b93c:
    // 0x10b93c: 0x26040448  addiu       $a0, $s0, 0x448
    ctx->pc = 0x10b93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1096));
    // 0x10b940: 0xc054a88  jal         func_152A20
    ctx->pc = 0x10B940u;
    SET_GPR_U32(ctx, 31, 0x10B948u);
    ctx->pc = 0x10B944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B940u;
    // 0x10b944: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x10B940u, 0x10B948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B948u;
label_10b948:
    // 0x10b948: 0xc05280e  jal         func_14A038
    ctx->pc = 0x10B948u;
    SET_GPR_U32(ctx, 31, 0x10B950u);
    ctx->pc = 0x10B94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B948u;
    // 0x10b94c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x10B948u, 0x10B950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B950u;
label_10b950:
    // 0x10b950: 0x8e0406a8  lw          $a0, 0x6A8($s0)
    ctx->pc = 0x10b950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1704)));
    // 0x10b954: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B954u;
    {
        const bool branch_taken_0x10b954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b954) {
            ctx->pc = 0x10B958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B954u;
            // 0x10b958: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B970u;
            goto label_10b970;
        }
    }
    ctx->pc = 0x10B95Cu;
    // 0x10b95c: 0xc073cea  jal         func_1CF3A8
    ctx->pc = 0x10B95Cu;
    SET_GPR_U32(ctx, 31, 0x10B964u);
    ctx->pc = 0x1CF3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF3A8u, 0x10B95Cu, 0x10B964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B964u;
label_10b964:
    // 0x10b964: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x10B964u;
    SET_GPR_U32(ctx, 31, 0x10B96Cu);
    ctx->pc = 0x10B968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B964u;
    // 0x10b968: 0x8e0406a8  lw          $a0, 0x6A8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x10B964u, 0x10B96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B96Cu;
label_10b96c:
    // 0x10b96c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10b96cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10b970:
    // 0x10b970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b974: 0x3e00008  jr          $ra
    ctx->pc = 0x10B974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B974u;
        // 0x10b978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B97Cu;
    // 0x10b97c: 0x0  nop
    ctx->pc = 0x10b97cu;
    // NOP
    ctx->pc = 0x10b980u;
}
