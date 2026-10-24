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

// Function: func_00383B60
// Address: 0x383b60 - 0x383c70
void func_00383B60_0x383b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00383B60_0x383b60");
#endif

    switch (ctx->pc) {
        case 0x383bfcu: goto label_383bfc;
        case 0x383c4cu: goto label_383c4c;
        default: break;
    }

    ctx->pc = 0x383b60u;

    // 0x383b60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x383b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x383b64: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x383b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x383b68: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x383b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x383b6c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x383b6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383b70: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x383b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x383b74: 0x26710370  addiu       $s1, $s3, 0x370
    ctx->pc = 0x383b74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 880));
    // 0x383b78: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x383b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x383b7c: 0x30d200ff  andi        $s2, $a2, 0xFF
    ctx->pc = 0x383b7cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x383b80: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x383b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x383b84: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x383b84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383b88: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x383B88u;
    {
        const bool branch_taken_0x383b88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x383B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383B88u;
        // 0x383b8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383b88) {
            ctx->pc = 0x383BA0u;
            goto label_383ba0;
        }
    }
    ctx->pc = 0x383B90u;
    // 0x383b90: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x383b90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x383b94: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x383b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x383b98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x383B98u;
    {
        const bool branch_taken_0x383b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383B98u;
        // 0x383b9c: 0x24420026  addiu       $v0, $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383b98) {
            ctx->pc = 0x383BACu;
            goto label_383bac;
        }
    }
    ctx->pc = 0x383BA0u;
label_383ba0:
    // 0x383ba0: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x383ba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x383ba4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x383ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x383ba8: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x383ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_383bac:
    // 0x383bac: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x383bacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x383bb0: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x383bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x383bb4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x383bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x383bb8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x383BB8u;
    {
        const bool branch_taken_0x383bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383BB8u;
        // 0x383bbc: 0x2404ff80  addiu       $a0, $zero, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383bb8) {
            ctx->pc = 0x383BFCu;
            goto label_383bfc;
        }
    }
    ctx->pc = 0x383BC0u;
    // 0x383bc0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x383bc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x383bc4: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x383BC4u;
    {
        const bool branch_taken_0x383bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x383BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383BC4u;
        // 0x383bc8: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383bc4) {
            ctx->pc = 0x383BD8u;
            goto label_383bd8;
        }
    }
    ctx->pc = 0x383BCCu;
    // 0x383bcc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x383bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x383bd0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x383BD0u;
    {
        const bool branch_taken_0x383bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383BD0u;
        // 0x383bd4: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383bd0) {
            ctx->pc = 0x383BECu;
            goto label_383bec;
        }
    }
    ctx->pc = 0x383BD8u;
label_383bd8:
    // 0x383bd8: 0x2842fff2  slti        $v0, $v0, -0xE
    ctx->pc = 0x383bd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967282) ? 1 : 0);
    // 0x383bdc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x383BDCu;
    {
        const bool branch_taken_0x383bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x383bdc) {
            ctx->pc = 0x383BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383BDCu;
            // 0x383be0: 0xa6040000  sh          $a0, 0x0($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383BECu;
            goto label_383bec;
        }
    }
    ctx->pc = 0x383BE4u;
    // 0x383be4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x383be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x383be8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x383be8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_383bec:
    // 0x383bec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x383becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383bf0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x383bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383bf4: 0xc0e0f1c  jal         func_383C70
    ctx->pc = 0x383BF4u;
    SET_GPR_U32(ctx, 31, 0x383BFCu);
    ctx->pc = 0x383BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383BF4u;
    // 0x383bf8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383C70u, 0x383BF4u, 0x383BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383BFCu;
label_383bfc:
    // 0x383bfc: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x383bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x383c00: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x383c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x383c04: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x383C04u;
    {
        const bool branch_taken_0x383c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C04u;
        // 0x383c08: 0x2404ff80  addiu       $a0, $zero, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383c04) {
            ctx->pc = 0x383C4Cu;
            goto label_383c4c;
        }
    }
    ctx->pc = 0x383C0Cu;
    // 0x383c0c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x383c0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x383c10: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x383C10u;
    {
        const bool branch_taken_0x383c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x383C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C10u;
        // 0x383c14: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383c10) {
            ctx->pc = 0x383C24u;
            goto label_383c24;
        }
    }
    ctx->pc = 0x383C18u;
    // 0x383c18: 0x2402fff1  addiu       $v0, $zero, -0xF
    ctx->pc = 0x383c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x383c1c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x383C1Cu;
    {
        const bool branch_taken_0x383c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C1Cu;
        // 0x383c20: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383c1c) {
            ctx->pc = 0x383C3Cu;
            goto label_383c3c;
        }
    }
    ctx->pc = 0x383C24u;
label_383c24:
    // 0x383c24: 0x2842000f  slti        $v0, $v0, 0xF
    ctx->pc = 0x383c24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x383c28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x383C28u;
    {
        const bool branch_taken_0x383c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C28u;
        // 0x383c2c: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383c28) {
            ctx->pc = 0x383C38u;
            goto label_383c38;
        }
    }
    ctx->pc = 0x383C30u;
    // 0x383c30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x383C30u;
    {
        const bool branch_taken_0x383c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C30u;
        // 0x383c34: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383c30) {
            ctx->pc = 0x383C3Cu;
            goto label_383c3c;
        }
    }
    ctx->pc = 0x383C38u;
label_383c38:
    // 0x383c38: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x383c38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
label_383c3c:
    // 0x383c3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x383c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383c40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x383c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383c44: 0xc0e0f1c  jal         func_383C70
    ctx->pc = 0x383C44u;
    SET_GPR_U32(ctx, 31, 0x383C4Cu);
    ctx->pc = 0x383C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383C44u;
    // 0x383c48: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383C70u, 0x383C44u, 0x383C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383C4Cu;
label_383c4c:
    // 0x383c4c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x383c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x383c50: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x383c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x383c54: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x383c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x383c58: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x383c58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x383c5c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x383c5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x383c60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x383c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x383c64: 0x3e00008  jr          $ra
    ctx->pc = 0x383C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C64u;
        // 0x383c68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383C6Cu;
    // 0x383c6c: 0x0  nop
    ctx->pc = 0x383c6cu;
    // NOP
    ctx->pc = 0x383c70u;
}
