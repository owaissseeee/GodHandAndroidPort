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

// Function: SJMEM_Create
// Address: 0x338bd8 - 0x338ca0
void SJMEM_Create_0x338bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SJMEM_Create_0x338bd8");
#endif

    switch (ctx->pc) {
        case 0x338c08u: goto label_338c08;
        case 0x338c8cu: goto label_338c8c;
        default: break;
    }

    ctx->pc = 0x338bd8u;

    // 0x338bd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x338bdc: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x338bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x338be0: 0x24c23ad0  addiu       $v0, $a2, 0x3AD0
    ctx->pc = 0x338be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 15056));
    // 0x338be4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x338be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x338be8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x338be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x338bec: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x338becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x338bf0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x338bf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338bf4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x338bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338bf8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x338bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E3AD4u));
    // 0x338bfc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x338BFCu;
    {
        const bool branch_taken_0x338bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x338C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338BFCu;
        // 0x338c00: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338bfc) {
            ctx->pc = 0x338C2Cu;
            goto label_338c2c;
        }
    }
    ctx->pc = 0x338C04u;
    // 0x338c04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x338c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_338c08:
    // 0x338c08: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x338c08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x338c0c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x338C0Cu;
    {
        const bool branch_taken_0x338c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x338C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338C0Cu;
        // 0x338c10: 0x24630024  addiu       $v1, $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338c0c) {
            ctx->pc = 0x338C2Cu;
            goto label_338c2c;
        }
    }
    ctx->pc = 0x338C14u;
    // 0x338c14: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x338c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x338c18: 0x0  nop
    ctx->pc = 0x338c18u;
    // NOP
    // 0x338c1c: 0x0  nop
    ctx->pc = 0x338c1cu;
    // NOP
    // 0x338c20: 0x0  nop
    ctx->pc = 0x338c20u;
    // NOP
    // 0x338c24: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x338C24u;
    {
        const bool branch_taken_0x338c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x338c24) {
            ctx->pc = 0x338C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338C24u;
            // 0x338c28: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338c08;
        }
    }
    ctx->pc = 0x338C2Cu;
label_338c2c:
    // 0x338c2c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x338c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x338c30: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x338C30u;
    {
        const bool branch_taken_0x338c30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x338C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338C30u;
        // 0x338c34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338c30) {
            ctx->pc = 0x338C90u;
            goto label_338c90;
        }
    }
    ctx->pc = 0x338C38u;
    // 0x338c38: 0x480c0  sll         $s0, $a0, 3
    ctx->pc = 0x338c38u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x338c3c: 0x24c23ad0  addiu       $v0, $a2, 0x3AD0
    ctx->pc = 0x338c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 15056));
    // 0x338c40: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x338c40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x338c44: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x338c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x338c48: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x338c48u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x338c4c: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x338c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
    // 0x338c50: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x338c50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x338c54: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x338c54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x338c58: 0x24633a98  addiu       $v1, $v1, 0x3A98
    ctx->pc = 0x338c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15000));
    // 0x338c5c: 0x24c658f0  addiu       $a2, $a2, 0x58F0
    ctx->pc = 0x338c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22768));
    // 0x338c60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x338c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338c64: 0x24a58a28  addiu       $a1, $a1, -0x75D8
    ctx->pc = 0x338c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937128));
    // 0x338c68: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x338c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x338c6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x338c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338c70: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x338c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x338c74: 0xae080014  sw          $t0, 0x14($s0)
    ctx->pc = 0x338c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 8));
    // 0x338c78: 0xae070018  sw          $a3, 0x18($s0)
    ctx->pc = 0x338c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
    // 0x338c7c: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x338c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x338c80: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x338c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x338c84: 0xc0ce3b2  jal         func_338EC8
    ctx->pc = 0x338C84u;
    SET_GPR_U32(ctx, 31, 0x338C8Cu);
    ctx->pc = 0x338C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338C84u;
    // 0x338c88: 0xae100020  sw          $s0, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338EC8u, 0x338C84u, 0x338C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338C8Cu;
label_338c8c:
    // 0x338c8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x338c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_338c90:
    // 0x338c90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x338c90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338c94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x338c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x338c98: 0x3e00008  jr          $ra
    ctx->pc = 0x338C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338C98u;
        // 0x338c9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338CA0u;
}
