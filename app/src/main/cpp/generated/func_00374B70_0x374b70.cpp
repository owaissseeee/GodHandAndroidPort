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

// Function: func_00374B70
// Address: 0x374b70 - 0x374cb8
void func_00374B70_0x374b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00374B70_0x374b70");
#endif

    switch (ctx->pc) {
        case 0x374ca4u: goto label_374ca4;
        default: break;
    }

    ctx->pc = 0x374b70u;

    // 0x374b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374b74: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x374b74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x374b78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374b7c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x374b7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374b80: 0x46403  sra         $t4, $a0, 16
    ctx->pc = 0x374b80u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 4), 16));
    // 0x374b84: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x374b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x374b88: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x374b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x374b8c: 0x2442df10  addiu       $v0, $v0, -0x20F0
    ctx->pc = 0x374b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958864));
    // 0x374b90: 0xc1940  sll         $v1, $t4, 5
    ctx->pc = 0x374b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
    // 0x374b94: 0x3c040077  lui         $a0, 0x77
    ctx->pc = 0x374b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)119 << 16));
    // 0x374b98: 0x625021  addu        $t2, $v1, $v0
    ctx->pc = 0x374b98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x374b9c: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x374b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x374ba0: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x374ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x374ba4: 0xad460008  sw          $a2, 0x8($t2)
    ctx->pc = 0x374ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 6));
    // 0x374ba8: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x374ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x374bac: 0xad47000c  sw          $a3, 0xC($t2)
    ctx->pc = 0x374bacu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 7));
    // 0x374bb0: 0xad420004  sw          $v0, 0x4($t2)
    ctx->pc = 0x374bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
    // 0x374bb4: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x374bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x374bb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x374BB8u;
    {
        const bool branch_taken_0x374bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x374BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374BB8u;
        // 0x374bbc: 0x248ba880  addiu       $t3, $a0, -0x5780 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374bb8) {
            ctx->pc = 0x374BC8u;
            goto label_374bc8;
        }
    }
    ctx->pc = 0x374BC0u;
    // 0x374bc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x374BC0u;
    {
        const bool branch_taken_0x374bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374BC0u;
        // 0x374bc4: 0xad400010  sw          $zero, 0x10($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374bc0) {
            ctx->pc = 0x374BD0u;
            goto label_374bd0;
        }
    }
    ctx->pc = 0x374BC8u;
label_374bc8:
    // 0x374bc8: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x374bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x374bcc: 0xad420010  sw          $v0, 0x10($t2)
    ctx->pc = 0x374bccu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 2));
label_374bd0:
    // 0x374bd0: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x374bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x374bd4: 0xad420014  sw          $v0, 0x14($t2)
    ctx->pc = 0x374bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 2));
    // 0x374bd8: 0x8d220018  lw          $v0, 0x18($t1)
    ctx->pc = 0x374bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x374bdc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x374BDCu;
    {
        const bool branch_taken_0x374bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x374BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374BDCu;
        // 0x374be0: 0x1221021  addu        $v0, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374bdc) {
            ctx->pc = 0x374BECu;
            goto label_374bec;
        }
    }
    ctx->pc = 0x374BE4u;
    // 0x374be4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x374BE4u;
    {
        const bool branch_taken_0x374be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374BE4u;
        // 0x374be8: 0xad400018  sw          $zero, 0x18($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374be4) {
            ctx->pc = 0x374BF0u;
            goto label_374bf0;
        }
    }
    ctx->pc = 0x374BECu;
label_374bec:
    // 0x374bec: 0xad420018  sw          $v0, 0x18($t2)
    ctx->pc = 0x374becu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 2));
label_374bf0:
    // 0x374bf0: 0x8d22001c  lw          $v0, 0x1C($t1)
    ctx->pc = 0x374bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x374bf4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x374BF4u;
    {
        const bool branch_taken_0x374bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x374BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374BF4u;
        // 0x374bf8: 0x1221021  addu        $v0, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374bf4) {
            ctx->pc = 0x374C04u;
            goto label_374c04;
        }
    }
    ctx->pc = 0x374BFCu;
    // 0x374bfc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x374BFCu;
    {
        const bool branch_taken_0x374bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374BFCu;
        // 0x374c00: 0xad40001c  sw          $zero, 0x1C($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374bfc) {
            ctx->pc = 0x374C08u;
            goto label_374c08;
        }
    }
    ctx->pc = 0x374C04u;
label_374c04:
    // 0x374c04: 0xad42001c  sw          $v0, 0x1C($t2)
    ctx->pc = 0x374c04u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 2));
label_374c08:
    // 0x374c08: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x374c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x374c0c: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x374c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x374c10: 0x24423250  addiu       $v0, $v0, 0x3250
    ctx->pc = 0x374c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12880));
    // 0x374c14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x374c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x374c18: 0x1100000f  beqz        $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x374C18u;
    {
        const bool branch_taken_0x374c18 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x374C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374C18u;
        // 0x374c1c: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374c18) {
            ctx->pc = 0x374C58u;
            goto label_374c58;
        }
    }
    ctx->pc = 0x374C20u;
    // 0x374c20: 0x9102000c  lbu         $v0, 0xC($t0)
    ctx->pc = 0x374c20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x374c24: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x374C24u;
    {
        const bool branch_taken_0x374c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x374c24) {
            ctx->pc = 0x374C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374C24u;
            // 0x374c28: 0x8d430000  lw          $v1, 0x0($t2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x374C5Cu;
            goto label_374c5c;
        }
    }
    ctx->pc = 0x374C2Cu;
    // 0x374c2c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x374c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x374c30: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x374c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x374c34: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x374c34u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x374c38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x374c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x374c3c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x374c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x374c40: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x374C40u;
    {
        const bool branch_taken_0x374c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x374C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374C40u;
        // 0x374c44: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374c40) {
            ctx->pc = 0x374C4Cu;
            goto label_374c4c;
        }
    }
    ctx->pc = 0x374C48u;
    // 0x374c48: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x374c48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_374c4c:
    // 0x374c4c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x374c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x374c50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x374c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374c54: 0xa062000c  sb          $v0, 0xC($v1)
    ctx->pc = 0x374c54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 2));
label_374c58:
    // 0x374c58: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x374c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_374c5c:
    // 0x374c5c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x374c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x374c60: 0x8d450004  lw          $a1, 0x4($t2)
    ctx->pc = 0x374c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x374c64: 0x8d460008  lw          $a2, 0x8($t2)
    ctx->pc = 0x374c64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x374c68: 0x8d47000c  lw          $a3, 0xC($t2)
    ctx->pc = 0x374c68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x374c6c: 0x8d480010  lw          $t0, 0x10($t2)
    ctx->pc = 0x374c6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x374c70: 0x8d490014  lw          $t1, 0x14($t2)
    ctx->pc = 0x374c70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x374c74: 0x8d42001c  lw          $v0, 0x1C($t2)
    ctx->pc = 0x374c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x374c78: 0x8d4a0018  lw          $t2, 0x18($t2)
    ctx->pc = 0x374c78u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x374c7c: 0xad620024  sw          $v0, 0x24($t3)
    ctx->pc = 0x374c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 36), GPR_U32(ctx, 2));
    // 0x374c80: 0xad6c0004  sw          $t4, 0x4($t3)
    ctx->pc = 0x374c80u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 12));
    // 0x374c84: 0xad630008  sw          $v1, 0x8($t3)
    ctx->pc = 0x374c84u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 3));
    // 0x374c88: 0xad65000c  sw          $a1, 0xC($t3)
    ctx->pc = 0x374c88u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 5));
    // 0x374c8c: 0xad660010  sw          $a2, 0x10($t3)
    ctx->pc = 0x374c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 6));
    // 0x374c90: 0xad670014  sw          $a3, 0x14($t3)
    ctx->pc = 0x374c90u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 7));
    // 0x374c94: 0xad680018  sw          $t0, 0x18($t3)
    ctx->pc = 0x374c94u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 8));
    // 0x374c98: 0xad69001c  sw          $t1, 0x1C($t3)
    ctx->pc = 0x374c98u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 9));
    // 0x374c9c: 0xc0dd63a  jal         func_3758E8
    ctx->pc = 0x374C9Cu;
    SET_GPR_U32(ctx, 31, 0x374CA4u);
    ctx->pc = 0x374CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374C9Cu;
    // 0x374ca0: 0xad6a0020  sw          $t2, 0x20($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3758E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3758E8u, 0x374C9Cu, 0x374CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374CA4u;
label_374ca4:
    // 0x374ca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x374CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374CA8u;
        // 0x374cac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374CB0u;
    // 0x374cb0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x374cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x374cb4: 0x0  nop
    ctx->pc = 0x374cb4u;
    // NOP
    ctx->pc = 0x374cb8u;
}
