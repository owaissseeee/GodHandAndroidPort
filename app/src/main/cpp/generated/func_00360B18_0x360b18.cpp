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

// Function: func_00360B18
// Address: 0x360b18 - 0x360c40
void func_00360B18_0x360b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00360B18_0x360b18");
#endif

    ctx->pc = 0x360b18u;

    // 0x360b18: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x360b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x360b1c: 0x2442ea78  addiu       $v0, $v0, -0x1588
    ctx->pc = 0x360b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961784));
    // 0x360b20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x360b20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EEA78u));
    // 0x360b24: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x360B24u;
    {
        const bool branch_taken_0x360b24 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x360B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360B24u;
        // 0x360b28: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360b24) {
            ctx->pc = 0x360B3Cu;
            goto label_360b3c;
        }
    }
    ctx->pc = 0x360B2Cu;
    // 0x360b2c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x360b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x360b30: 0x8c46ea7c  lw          $a2, -0x1584($v0)
    ctx->pc = 0x360b30u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EEA7Cu));
    // 0x360b34: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x360B34u;
    {
        const bool branch_taken_0x360b34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x360B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360B34u;
        // 0x360b38: 0x3c090076  lui         $t1, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)118 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360b34) {
            ctx->pc = 0x360B48u;
            goto label_360b48;
        }
    }
    ctx->pc = 0x360B3Cu;
label_360b3c:
    // 0x360b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x360B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360B3Cu;
        // 0x360b40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360B44u;
    // 0x360b44: 0x0  nop
    ctx->pc = 0x360b44u;
    // NOP
label_360b48:
    // 0x360b48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x360b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360b4c: 0x25236ccc  addiu       $v1, $t1, 0x6CCC
    ctx->pc = 0x360b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 27852));
    // 0x360b50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x360b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x360b54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x360b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x360b58: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x360b58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x360b5c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x360b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x360b60: 0x1485001f  bne         $a0, $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x360B60u;
    {
        const bool branch_taken_0x360b60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x360B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360B60u;
        // 0x360b64: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360b60) {
            ctx->pc = 0x360BE0u;
            goto label_360be0;
        }
    }
    ctx->pc = 0x360B68u;
    // 0x360b68: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x360b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x360b6c: 0x3c030076  lui         $v1, 0x76
    ctx->pc = 0x360b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
    // 0x360b70: 0x24476ca8  addiu       $a3, $v0, 0x6CA8
    ctx->pc = 0x360b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 27816));
    // 0x360b74: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x360b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x360b78: 0xdce50000  ld          $a1, 0x0($a3)
    ctx->pc = 0x360b78u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x766CA8u));
    // 0x360b7c: 0x24636cb8  addiu       $v1, $v1, 0x6CB8
    ctx->pc = 0x360b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27832));
    // 0x360b80: 0x24486cc8  addiu       $t0, $v0, 0x6CC8
    ctx->pc = 0x360b80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 27848));
    // 0x360b84: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x360b84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x360b88: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x360b88u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x360b8c: 0xdce20008  ld          $v0, 0x8($a3)
    ctx->pc = 0x360b8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x360b90: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x360b90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x360b94: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x360b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x360b98: 0x8cc6a270  lw          $a2, -0x5D90($a2)
    ctx->pc = 0x360b98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294943344)));
    // 0x360b9c: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x360b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x360ba0: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x360ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x360ba4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x360ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x360ba8: 0x94e20008  lhu         $v0, 0x8($a3)
    ctx->pc = 0x360ba8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x360bac: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x360bacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x360bb0: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x360bb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x360bb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x360BB4u;
    {
        const bool branch_taken_0x360bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x360bb4) {
            ctx->pc = 0x360BCCu;
            goto label_360bcc;
        }
    }
    ctx->pc = 0x360BBCu;
    // 0x360bbc: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x360bbcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x360bc0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x360bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x360bc4: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x360bc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x360bc8: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x360bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
label_360bcc:
    // 0x360bcc: 0xa4e60008  sh          $a2, 0x8($a3)
    ctx->pc = 0x360bccu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 8), (uint16_t)GPR_U32(ctx, 6));
    // 0x360bd0: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x360bd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x360bd4: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x360bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x360bd8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x360BD8u;
    {
        const bool branch_taken_0x360bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360BD8u;
        // 0x360bdc: 0xc2282d  daddu       $a1, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360bd8) {
            ctx->pc = 0x360C24u;
            goto label_360c24;
        }
    }
    ctx->pc = 0x360BE0u;
label_360be0:
    // 0x360be0: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x360be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x360be4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x360be4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x360be8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x360be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x360bec: 0x8c84a270  lw          $a0, -0x5D90($a0)
    ctx->pc = 0x360becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943344)));
    // 0x360bf0: 0x24426cc8  addiu       $v0, $v0, 0x6CC8
    ctx->pc = 0x360bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27848));
    // 0x360bf4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x360bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x360bf8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x360bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x766CC8u));
    // 0x360bfc: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x360bfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x360c00: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x360c00u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x360c04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x360c04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x766CC8u));
    // 0x360c08: 0xc4282d  daddu       $a1, $a2, $a0
    ctx->pc = 0x360c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 4));
    // 0x360c0c: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x360c0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x360c10: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x360c10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x360c14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x360C14u;
    {
        const bool branch_taken_0x360c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x360C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360C14u;
        // 0x360c18: 0x25246ccc  addiu       $a0, $t1, 0x6CCC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 27852));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360c14) {
            ctx->pc = 0x360C28u;
            goto label_360c28;
        }
    }
    ctx->pc = 0x360C1Cu;
    // 0x360c1c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x360c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x360c20: 0xa2282d  daddu       $a1, $a1, $v0
    ctx->pc = 0x360c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
label_360c24:
    // 0x360c24: 0x25246ccc  addiu       $a0, $t1, 0x6CCC
    ctx->pc = 0x360c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 27852));
label_360c28:
    // 0x360c28: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x360c28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360c2c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x360c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x360c30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x360c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x360c34: 0x3e00008  jr          $ra
    ctx->pc = 0x360C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360C34u;
        // 0x360c38: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360C3Cu;
    // 0x360c3c: 0x0  nop
    ctx->pc = 0x360c3cu;
    // NOP
    ctx->pc = 0x360c40u;
}
