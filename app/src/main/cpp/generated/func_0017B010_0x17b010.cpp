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

// Function: func_0017B010
// Address: 0x17b010 - 0x17b0d8
void func_0017B010_0x17b010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017B010_0x17b010");
#endif

    switch (ctx->pc) {
        case 0x17b038u: goto label_17b038;
        case 0x17b054u: goto label_17b054;
        case 0x17b078u: goto label_17b078;
        case 0x17b088u: goto label_17b088;
        case 0x17b090u: goto label_17b090;
        case 0x17b098u: goto label_17b098;
        case 0x17b0acu: goto label_17b0ac;
        case 0x17b0c4u: goto label_17b0c4;
        default: break;
    }

    ctx->pc = 0x17b010u;

    // 0x17b010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17b010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17b014: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17b014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17b018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17b018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17b01c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17b01cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b020: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b024: 0x92020602  lbu         $v0, 0x602($s0)
    ctx->pc = 0x17b024u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1538)));
    // 0x17b028: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17B028u;
    {
        const bool branch_taken_0x17b028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b028) {
            ctx->pc = 0x17B088u;
            goto label_17b088;
        }
    }
    ctx->pc = 0x17B030u;
    // 0x17b030: 0xc05ee04  jal         func_17B810
    ctx->pc = 0x17B030u;
    SET_GPR_U32(ctx, 31, 0x17B038u);
    ctx->pc = 0x17B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B810u, 0x17B030u, 0x17B038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B038u;
label_17b038:
    // 0x17b038: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17b038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b03c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b040: 0x16220011  bne         $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17B040u;
    {
        const bool branch_taken_0x17b040 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x17b040) {
            ctx->pc = 0x17B088u;
            goto label_17b088;
        }
    }
    ctx->pc = 0x17B048u;
    // 0x17b048: 0x8e05060c  lw          $a1, 0x60C($s0)
    ctx->pc = 0x17b048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1548)));
    // 0x17b04c: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x17B04Cu;
    SET_GPR_U32(ctx, 31, 0x17B054u);
    ctx->pc = 0x17B050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B04Cu;
    // 0x17b050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x17B04Cu, 0x17B054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B054u;
label_17b054:
    // 0x17b054: 0x1451000c  bne         $v0, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x17B054u;
    {
        const bool branch_taken_0x17b054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x17b054) {
            ctx->pc = 0x17B088u;
            goto label_17b088;
        }
    }
    ctx->pc = 0x17B05Cu;
    // 0x17b05c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x17b05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x17b060: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17b060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b064: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x17b064u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x17b068: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B068u;
    {
        const bool branch_taken_0x17b068 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x17B06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B068u;
        // 0x17b06c: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b068) {
            ctx->pc = 0x17B080u;
            goto label_17b080;
        }
    }
    ctx->pc = 0x17B070u;
    // 0x17b070: 0xc05edba  jal         func_17B6E8
    ctx->pc = 0x17B070u;
    SET_GPR_U32(ctx, 31, 0x17B078u);
    ctx->pc = 0x17B074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B070u;
    // 0x17b074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B6E8u, 0x17B070u, 0x17B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B078u;
label_17b078:
    // 0x17b078: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17B078u;
    {
        const bool branch_taken_0x17b078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b078) {
            ctx->pc = 0x17B088u;
            goto label_17b088;
        }
    }
    ctx->pc = 0x17B080u;
label_17b080:
    // 0x17b080: 0xc05eba8  jal         func_17AEA0
    ctx->pc = 0x17B080u;
    SET_GPR_U32(ctx, 31, 0x17B088u);
    ctx->pc = 0x17B084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B080u;
    // 0x17b084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AEA0u, 0x17B080u, 0x17B088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B088u;
label_17b088:
    // 0x17b088: 0xc05ebac  jal         func_17AEB0
    ctx->pc = 0x17B088u;
    SET_GPR_U32(ctx, 31, 0x17B090u);
    ctx->pc = 0x17B08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B088u;
    // 0x17b08c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AEB0u, 0x17B088u, 0x17B090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B090u;
label_17b090:
    // 0x17b090: 0xc05ee04  jal         func_17B810
    ctx->pc = 0x17B090u;
    SET_GPR_U32(ctx, 31, 0x17B098u);
    ctx->pc = 0x17B094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B090u;
    // 0x17b094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B810u, 0x17B090u, 0x17B098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B098u;
label_17b098:
    // 0x17b098: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17b098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b09c: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x17B09Cu;
    {
        const bool branch_taken_0x17b09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17b09c) {
            ctx->pc = 0x17B0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B09Cu;
            // 0x17b0a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B0C8u;
            goto label_17b0c8;
        }
    }
    ctx->pc = 0x17B0A4u;
    // 0x17b0a4: 0xc05ee06  jal         func_17B818
    ctx->pc = 0x17B0A4u;
    SET_GPR_U32(ctx, 31, 0x17B0ACu);
    ctx->pc = 0x17B0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B0A4u;
    // 0x17b0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B818u, 0x17B0A4u, 0x17B0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B0ACu;
label_17b0ac:
    // 0x17b0ac: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B0ACu;
    {
        const bool branch_taken_0x17b0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b0ac) {
            ctx->pc = 0x17B0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B0ACu;
            // 0x17b0b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B0C8u;
            goto label_17b0c8;
        }
    }
    ctx->pc = 0x17B0B4u;
    // 0x17b0b4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x17b0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x17b0b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17b0b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17b0bc: 0xc06dfb8  jal         func_1B7EE0
    ctx->pc = 0x17B0BCu;
    SET_GPR_U32(ctx, 31, 0x17B0C4u);
    ctx->pc = 0x17B0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B0BCu;
    // 0x17b0c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7EE0u, 0x17B0BCu, 0x17B0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B0C4u;
label_17b0c4:
    // 0x17b0c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17b0c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17b0c8:
    // 0x17b0c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b0c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b0cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x17B0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B0D0u;
        // 0x17b0d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B0D8u;
}
