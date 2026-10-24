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

// Function: fde_merge
// Address: 0x3219d0 - 0x321ad0
void fde_merge_0x3219d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fde_merge_0x3219d0");
#endif

    switch (ctx->pc) {
        case 0x321a28u: goto label_321a28;
        case 0x321a68u: goto label_321a68;
        default: break;
    }

    ctx->pc = 0x3219d0u;

    // 0x3219d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3219d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3219d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3219d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3219d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3219d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3219dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3219dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3219e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3219e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3219e4: 0x8cb80004  lw          $t8, 0x4($a1)
    ctx->pc = 0x3219e4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3219e8: 0x13000033  beqz        $t8, . + 4 + (0x33 << 2)
    ctx->pc = 0x3219E8u;
    {
        const bool branch_taken_0x3219e8 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x3219ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3219E8u;
        // 0x3219ec: 0x300682d  daddu       $t5, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3219e8) {
            ctx->pc = 0x321AB8u;
            goto label_321ab8;
        }
    }
    ctx->pc = 0x3219F0u;
    // 0x3219f0: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3219f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3219f4: 0x182080  sll         $a0, $t8, 2
    ctx->pc = 0x3219f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x3219f8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3219f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3219fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3219fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x321a00: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x321a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x321a04: 0x320782d  daddu       $t7, $t9, $zero
    ctx->pc = 0x321a04u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321a08: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x321a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x321a0c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x321a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x321a10: 0x1e0902d  daddu       $s2, $t7, $zero
    ctx->pc = 0x321a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321a14: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x321a14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321a18: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x321a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x321a1c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x321a1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321a20: 0x4f5821  addu        $t3, $v0, $t7
    ctx->pc = 0x321a20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x321a24: 0x0  nop
    ctx->pc = 0x321a24u;
    // NOP
label_321a28:
    // 0x321a28: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x321a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x321a2c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x321a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x321a30: 0x8cae0000  lw          $t6, 0x0($a1)
    ctx->pc = 0x321a30u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x321a34: 0x11200019  beqz        $t1, . + 4 + (0x19 << 2)
    ctx->pc = 0x321A34u;
    {
        const bool branch_taken_0x321a34 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x321A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A34u;
        // 0x321a38: 0x25adffff  addiu       $t5, $t5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321a34) {
            ctx->pc = 0x321A9Cu;
            goto label_321a9c;
        }
    }
    ctx->pc = 0x321A3Cu;
    // 0x321a3c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x321a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x321a40: 0x8dc60008  lw          $a2, 0x8($t6)
    ctx->pc = 0x321a40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x321a44: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x321a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x321a48: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x321a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x321a4c: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x321A4Cu;
    {
        const bool branch_taken_0x321a4c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x321A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A4Cu;
        // 0x321a50: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321a4c) {
            ctx->pc = 0x321A9Cu;
            goto label_321a9c;
        }
    }
    ctx->pc = 0x321A54u;
    // 0x321a54: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x321a54u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321a58: 0x444021  addu        $t0, $v0, $a0
    ctx->pc = 0x321a58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x321a5c: 0x1593821  addu        $a3, $t2, $t9
    ctx->pc = 0x321a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 25)));
    // 0x321a60: 0x1523021  addu        $a2, $t2, $s2
    ctx->pc = 0x321a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 18)));
    // 0x321a64: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x321a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_321a68:
    // 0x321a68: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x321a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x321a6c: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x321a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x321a70: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x321a70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x321a74: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x321a74u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x321a78: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x321a78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x321a7c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x321a7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x321a80: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x321A80u;
    {
        const bool branch_taken_0x321a80 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x321A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A80u;
        // 0x321a84: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321a80) {
            ctx->pc = 0x321A9Cu;
            goto label_321a9c;
        }
    }
    ctx->pc = 0x321A88u;
    // 0x321a88: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x321a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x321a8c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x321a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x321a90: 0x4c1023  subu        $v0, $v0, $t4
    ctx->pc = 0x321a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x321a94: 0x5c40fff4  bgtzl       $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x321A94u;
    {
        const bool branch_taken_0x321a94 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x321a94) {
            ctx->pc = 0x321A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321A94u;
            // 0x321a98: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321a68;
        }
    }
    ctx->pc = 0x321A9Cu;
label_321a9c:
    // 0x321a9c: 0x12d1021  addu        $v0, $t1, $t5
    ctx->pc = 0x321a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x321aa0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x321aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x321aa4: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x321aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x321aa8: 0x15a0ffdf  bnez        $t5, . + 4 + (-0x21 << 2)
    ctx->pc = 0x321AA8u;
    {
        const bool branch_taken_0x321aa8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x321AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321AA8u;
        // 0x321aac: 0xac4e0000  sw          $t6, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321aa8) {
            ctx->pc = 0x321A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321a28;
        }
    }
    ctx->pc = 0x321AB0u;
    // 0x321ab0: 0x2181021  addu        $v0, $s0, $t8
    ctx->pc = 0x321ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 24)));
    // 0x321ab4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x321ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_321ab8:
    // 0x321ab8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x321ab8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321abc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x321abcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321ac0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x321ac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x321AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321AC4u;
        // 0x321ac8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321ACCu;
    // 0x321acc: 0x0  nop
    ctx->pc = 0x321accu;
    // NOP
    ctx->pc = 0x321ad0u;
}
