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

// Function: func_002E0B78
// Address: 0x2e0b78 - 0x2e0c80
void func_002E0B78_0x2e0b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E0B78_0x2e0b78");
#endif

    switch (ctx->pc) {
        case 0x2e0bc0u: goto label_2e0bc0;
        case 0x2e0bd0u: goto label_2e0bd0;
        case 0x2e0be4u: goto label_2e0be4;
        case 0x2e0bfcu: goto label_2e0bfc;
        case 0x2e0c20u: goto label_2e0c20;
        case 0x2e0c40u: goto label_2e0c40;
        case 0x2e0c4cu: goto label_2e0c4c;
        default: break;
    }

    ctx->pc = 0x2e0b78u;

    // 0x2e0b78: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e0b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e0b7c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2e0b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2e0b80: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2e0b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2e0b84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e0b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b88: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2e0b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2e0b8c: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x2e0b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b90: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e0b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e0b94: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e0b94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b98: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2e0b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2e0b9c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2e0b9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ba0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2e0ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2e0ba4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2e0ba4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ba8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2e0ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2e0bac: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2e0bacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0bb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0bb4: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x2e0bb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0bb8: 0xc0b82b6  jal         func_2E0AD8
    ctx->pc = 0x2E0BB8u;
    SET_GPR_U32(ctx, 31, 0x2E0BC0u);
    ctx->pc = 0x2E0BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0BB8u;
    // 0x2e0bbc: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0AD8u, 0x2E0BB8u, 0x2E0BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0BC0u;
label_2e0bc0:
    // 0x2e0bc0: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x2E0BC0u;
    {
        const bool branch_taken_0x2e0bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0bc0) {
            ctx->pc = 0x2E0BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0BC0u;
            // 0x2e0bc4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0C50u;
            goto label_2e0c50;
        }
    }
    ctx->pc = 0x2E0BC8u;
    // 0x2e0bc8: 0xc0b82b8  jal         func_2E0AE0
    ctx->pc = 0x2E0BC8u;
    SET_GPR_U32(ctx, 31, 0x2E0BD0u);
    ctx->pc = 0x2E0BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0BC8u;
    // 0x2e0bcc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0AE0u, 0x2E0BC8u, 0x2E0BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0BD0u;
label_2e0bd0:
    // 0x2e0bd0: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E0BD0u;
    {
        const bool branch_taken_0x2e0bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0bd0) {
            ctx->pc = 0x2E0BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0BD0u;
            // 0x2e0bd4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0C50u;
            goto label_2e0c50;
        }
    }
    ctx->pc = 0x2E0BD8u;
    // 0x2e0bd8: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x2e0bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2e0bdc: 0xc0b84f6  jal         func_2E13D8
    ctx->pc = 0x2E0BDCu;
    SET_GPR_U32(ctx, 31, 0x2E0BE4u);
    ctx->pc = 0x2E0BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0BDCu;
    // 0x2e0be0: 0x324500ff  andi        $a1, $s2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E13D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E13D8u, 0x2E0BDCu, 0x2E0BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0BE4u;
label_2e0be4:
    // 0x2e0be4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e0be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0be8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2e0be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2e0bec: 0x2450b298  addiu       $s0, $v0, -0x4D68
    ctx->pc = 0x2e0becu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947480));
    // 0x2e0bf0: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x2e0bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e0bf4: 0xc0e9eba  jal         func_3A7AE8
    ctx->pc = 0x2E0BF4u;
    SET_GPR_U32(ctx, 31, 0x2E0BFCu);
    ctx->pc = 0x2E0BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0BF4u;
    // 0x2e0bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7AE8u, 0x2E0BF4u, 0x2E0BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0BFCu;
label_2e0bfc:
    // 0x2e0bfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e0bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c00: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2e0c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e0c04: 0x28420200  slti        $v0, $v0, 0x200
    ctx->pc = 0x2e0c04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x2e0c08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0C08u;
    {
        const bool branch_taken_0x2e0c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0c08) {
            ctx->pc = 0x2E0C18u;
            goto label_2e0c18;
        }
    }
    ctx->pc = 0x2E0C10u;
    // 0x2e0c10: 0x3c011111  lui         $at, 0x1111
    ctx->pc = 0x2e0c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4369 << 16));
    // 0x2e0c14: 0xac201111  sw          $zero, 0x1111($at)
    ctx->pc = 0x2e0c14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x11111111u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x11111111u, _value); } while (0);
label_2e0c18:
    // 0x2e0c18: 0xc0b82c6  jal         func_2E0B18
    ctx->pc = 0x2E0C18u;
    SET_GPR_U32(ctx, 31, 0x2E0C20u);
    ctx->pc = 0x2E0C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0C18u;
    // 0x2e0c1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0B18u, 0x2E0C18u, 0x2E0C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0C20u;
label_2e0c20:
    // 0x2e0c20: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2E0C20u;
    {
        const bool branch_taken_0x2e0c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0c20) {
            ctx->pc = 0x2E0C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0C20u;
            // 0x2e0c24: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0C50u;
            goto label_2e0c50;
        }
    }
    ctx->pc = 0x2E0C28u;
    // 0x2e0c28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e0c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c30: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2e0c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c34: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2e0c34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c38: 0xc0b83c6  jal         func_2E0F18
    ctx->pc = 0x2E0C38u;
    SET_GPR_U32(ctx, 31, 0x2E0C40u);
    ctx->pc = 0x2E0C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0C38u;
    // 0x2e0c3c: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0F18u, 0x2E0C38u, 0x2E0C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0C40u;
label_2e0c40:
    // 0x2e0c40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e0c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c44: 0xc0b84f6  jal         func_2E13D8
    ctx->pc = 0x2E0C44u;
    SET_GPR_U32(ctx, 31, 0x2E0C4Cu);
    ctx->pc = 0x2E0C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0C44u;
    // 0x2e0c48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E13D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E13D8u, 0x2E0C44u, 0x2E0C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0C4Cu;
label_2e0c4c:
    // 0x2e0c4c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2e0c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2e0c50:
    // 0x2e0c50: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2e0c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e0c54: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2e0c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e0c58: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e0c58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0c5c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2e0c5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0c60: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2e0c60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0c64: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2e0c64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0C6Cu;
        // 0x2e0c70: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0C74u;
    // 0x2e0c74: 0x0  nop
    ctx->pc = 0x2e0c74u;
    // NOP
    // 0x2e0c78: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e0c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e0c7c: 0x0  nop
    ctx->pc = 0x2e0c7cu;
    // NOP
    ctx->pc = 0x2e0c80u;
}
