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

// Function: cModel_setTextureExchange
// Address: 0x149ad8 - 0x149be8
void cModel_setTextureExchange_0x149ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cModel_setTextureExchange_0x149ad8");
#endif

    switch (ctx->pc) {
        case 0x149b48u: goto label_149b48;
        case 0x149b70u: goto label_149b70;
        case 0x149b88u: goto label_149b88;
        case 0x149ba0u: goto label_149ba0;
        default: break;
    }

    ctx->pc = 0x149ad8u;

    // 0x149ad8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x149ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x149adc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x149adcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ae0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x149ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x149ae4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x149ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x149ae8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x149ae8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149aec: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x149aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x149af0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x149af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x149af4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x149af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x149af8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x149af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x149afc: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x149AFCu;
    {
        const bool branch_taken_0x149afc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x149B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149AFCu;
        // 0x149b00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149afc) {
            ctx->pc = 0x149B2Cu;
            goto label_149b2c;
        }
    }
    ctx->pc = 0x149B04u;
    // 0x149b04: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x149B04u;
    {
        const bool branch_taken_0x149b04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x149B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149B04u;
        // 0x149b08: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b04) {
            ctx->pc = 0x149B2Cu;
            goto label_149b2c;
        }
    }
    ctx->pc = 0x149B0Cu;
    // 0x149b0c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x149b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x149b10: 0x8c43ea80  lw          $v1, -0x1580($v0)
    ctx->pc = 0x149b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961792)));
    // 0x149b14: 0x1483002a  bne         $a0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x149B14u;
    {
        const bool branch_taken_0x149b14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x149B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149B14u;
        // 0x149b18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b14) {
            ctx->pc = 0x149BC0u;
            goto label_149bc0;
        }
    }
    ctx->pc = 0x149B1Cu;
    // 0x149b1c: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x149b1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x149b20: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x149b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x149b24: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x149B24u;
    {
        const bool branch_taken_0x149b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149b24) {
            ctx->pc = 0x149B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149B24u;
            // 0x149b28: 0x94c20006  lhu         $v0, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149B34u;
            goto label_149b34;
        }
    }
    ctx->pc = 0x149B2Cu;
label_149b2c:
    // 0x149b2c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x149B2Cu;
    {
        const bool branch_taken_0x149b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149B2Cu;
        // 0x149b30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b2c) {
            ctx->pc = 0x149BC0u;
            goto label_149bc0;
        }
    }
    ctx->pc = 0x149B34u;
label_149b34:
    // 0x149b34: 0x24d30008  addiu       $s3, $a2, 0x8
    ctx->pc = 0x149b34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x149b38: 0x251202d4  addiu       $s2, $t0, 0x2D4
    ctx->pc = 0x149b38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), 724));
    // 0x149b3c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x149b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x149b40: 0x18e00007  blez        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x149B40u;
    {
        const bool branch_taken_0x149b40 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x149B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149B40u;
        // 0x149b44: 0x2628021  addu        $s0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b40) {
            ctx->pc = 0x149B60u;
            goto label_149b60;
        }
    }
    ctx->pc = 0x149B48u;
label_149b48:
    // 0x149b48: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x149b48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x149b4c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x149b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x149b50: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x149b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x149b54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x149b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x149b58: 0x14e0fffb  bnez        $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x149B58u;
    {
        const bool branch_taken_0x149b58 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x149B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149B58u;
        // 0x149b5c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b58) {
            ctx->pc = 0x149B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149b48;
        }
    }
    ctx->pc = 0x149B60u;
label_149b60:
    // 0x149b60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x149b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149b64: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x149b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x149b68: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x149B68u;
    SET_GPR_U32(ctx, 31, 0x149B70u);
    ctx->pc = 0x149B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149B68u;
    // 0x149b6c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x149B68u, 0x149B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149B70u;
label_149b70:
    // 0x149b70: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x149b70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x149b74: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x149B74u;
    {
        const bool branch_taken_0x149b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149B74u;
        // 0x149b78: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b74) {
            ctx->pc = 0x149BBCu;
            goto label_149bbc;
        }
    }
    ctx->pc = 0x149B7Cu;
    // 0x149b7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x149b7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149b80: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x149b80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x149b84: 0x0  nop
    ctx->pc = 0x149b84u;
    // NOP
label_149b88:
    // 0x149b88: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x149b88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x149b8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x149b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149b90: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x149b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x149b94: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x149b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x149b98: 0xc0548d0  jal         func_152340
    ctx->pc = 0x149B98u;
    SET_GPR_U32(ctx, 31, 0x149BA0u);
    ctx->pc = 0x149B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149B98u;
    // 0x149b9c: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152340u, 0x149B98u, 0x149BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149BA0u;
label_149ba0:
    // 0x149ba0: 0x10550003  beq         $v0, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x149BA0u;
    {
        const bool branch_taken_0x149ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x149BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149BA0u;
        // 0x149ba4: 0x2421021  addu        $v0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ba0) {
            ctx->pc = 0x149BB0u;
            goto label_149bb0;
        }
    }
    ctx->pc = 0x149BA8u;
    // 0x149ba8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x149ba8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x149bac: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x149bacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_149bb0:
    // 0x149bb0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x149bb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x149bb4: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x149BB4u;
    {
        const bool branch_taken_0x149bb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x149BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149BB4u;
        // 0x149bb8: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149bb4) {
            ctx->pc = 0x149B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149b88;
        }
    }
    ctx->pc = 0x149BBCu;
label_149bbc:
    // 0x149bbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_149bc0:
    // 0x149bc0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x149bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x149bc4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x149bc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x149bc8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x149bc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x149bcc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x149bccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149bd0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x149bd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149bd4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x149bd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149bd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x149BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149BDCu;
        // 0x149be0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149BE4u;
    // 0x149be4: 0x0  nop
    ctx->pc = 0x149be4u;
    // NOP
    ctx->pc = 0x149be8u;
}
