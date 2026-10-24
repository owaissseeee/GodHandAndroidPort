#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: func_007CC348
// Address: 0x7cc348 - 0x7cc448
void func_007CC348_0x7cc348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CC348_0x7cc348");
#endif

    switch (ctx->pc) {
        case 0x7cc3a0u: goto label_7cc3a0;
        case 0x7cc3e0u: goto label_7cc3e0;
        default: break;
    }

    ctx->pc = 0x7cc348u;

    // 0x7cc348: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7cc348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7cc34c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x7cc34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x7cc350: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x7cc350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x7cc354: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7cc354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cc358: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7cc358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7cc35c: 0x8cb80004  lw          $t8, 0x4($a1)
    ctx->pc = 0x7cc35cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x7cc360: 0x13000033  beqz        $t8, . + 4 + (0x33 << 2)
    ctx->pc = 0x7CC360u;
    {
        const bool branch_taken_0x7cc360 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC360u;
        // 0x7cc364: 0x300682d  daddu       $t5, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc360) {
            ctx->pc = 0x7CC430u;
            goto label_7cc430;
        }
    }
    ctx->pc = 0x7CC368u;
    // 0x7cc368: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x7cc368u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x7cc36c: 0x182080  sll         $a0, $t8, 2
    ctx->pc = 0x7cc36cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x7cc370: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x7cc370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7cc374: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x7cc374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x7cc378: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x7cc378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x7cc37c: 0x320782d  daddu       $t7, $t9, $zero
    ctx->pc = 0x7cc37cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cc380: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x7cc380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x7cc384: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x7cc384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x7cc388: 0x1e0902d  daddu       $s2, $t7, $zero
    ctx->pc = 0x7cc388u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cc38c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x7cc38cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cc390: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x7cc390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x7cc394: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x7cc394u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cc398: 0x4f5821  addu        $t3, $v0, $t7
    ctx->pc = 0x7cc398u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x7cc39c: 0x0  nop
    ctx->pc = 0x7cc39cu;
    // NOP
label_7cc3a0:
    // 0x7cc3a0: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x7cc3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x7cc3a4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x7cc3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x7cc3a8: 0x8cae0000  lw          $t6, 0x0($a1)
    ctx->pc = 0x7cc3a8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x7cc3ac: 0x11200019  beqz        $t1, . + 4 + (0x19 << 2)
    ctx->pc = 0x7CC3ACu;
    {
        const bool branch_taken_0x7cc3ac = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC3ACu;
        // 0x7cc3b0: 0x25adffff  addiu       $t5, $t5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc3ac) {
            ctx->pc = 0x7CC414u;
            goto label_7cc414;
        }
    }
    ctx->pc = 0x7CC3B4u;
    // 0x7cc3b4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x7cc3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x7cc3b8: 0x8dc60008  lw          $a2, 0x8($t6)
    ctx->pc = 0x7cc3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x7cc3bc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x7cc3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x7cc3c0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x7cc3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x7cc3c4: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x7CC3C4u;
    {
        const bool branch_taken_0x7cc3c4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7CC3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC3C4u;
        // 0x7cc3c8: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc3c4) {
            ctx->pc = 0x7CC414u;
            goto label_7cc414;
        }
    }
    ctx->pc = 0x7CC3CCu;
    // 0x7cc3cc: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x7cc3ccu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cc3d0: 0x444021  addu        $t0, $v0, $a0
    ctx->pc = 0x7cc3d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x7cc3d4: 0x1593821  addu        $a3, $t2, $t9
    ctx->pc = 0x7cc3d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 25)));
    // 0x7cc3d8: 0x1523021  addu        $a2, $t2, $s2
    ctx->pc = 0x7cc3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 18)));
    // 0x7cc3dc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x7cc3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_7cc3e0:
    // 0x7cc3e0: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x7cc3e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x7cc3e4: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x7cc3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x7cc3e8: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x7cc3e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x7cc3ec: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x7cc3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x7cc3f0: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x7cc3f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x7cc3f4: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x7cc3f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x7cc3f8: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CC3F8u;
    {
        const bool branch_taken_0x7cc3f8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC3F8u;
        // 0x7cc3fc: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc3f8) {
            ctx->pc = 0x7CC414u;
            goto label_7cc414;
        }
    }
    ctx->pc = 0x7CC400u;
    // 0x7cc400: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x7cc400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x7cc404: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x7cc404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x7cc408: 0x4c1023  subu        $v0, $v0, $t4
    ctx->pc = 0x7cc408u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x7cc40c: 0x5c40fff4  bgtzl       $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x7CC40Cu;
    {
        const bool branch_taken_0x7cc40c = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x7cc40c) {
            ctx->pc = 0x7CC410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CC40Cu;
            // 0x7cc410: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CC3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cc3e0;
        }
    }
    ctx->pc = 0x7CC414u;
label_7cc414:
    // 0x7cc414: 0x12d1021  addu        $v0, $t1, $t5
    ctx->pc = 0x7cc414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x7cc418: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x7cc418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x7cc41c: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x7cc41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x7cc420: 0x15a0ffdf  bnez        $t5, . + 4 + (-0x21 << 2)
    ctx->pc = 0x7CC420u;
    {
        const bool branch_taken_0x7cc420 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CC424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC420u;
        // 0x7cc424: 0xac4e0000  sw          $t6, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc420) {
            ctx->pc = 0x7CC3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cc3a0;
        }
    }
    ctx->pc = 0x7CC428u;
    // 0x7cc428: 0x2181021  addu        $v0, $s0, $t8
    ctx->pc = 0x7cc428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 24)));
    // 0x7cc42c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x7cc42cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_7cc430:
    // 0x7cc430: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x7cc430u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7cc434: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x7cc434u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cc438: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7cc438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cc43c: 0x3e00008  jr          $ra
    ctx->pc = 0x7CC43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CC440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC43Cu;
        // 0x7cc440: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CC43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CC444u;
    // 0x7cc444: 0x0  nop
    ctx->pc = 0x7cc444u;
    // NOP
    ctx->pc = 0x7cc448u;
}
} // namespace gh_mcport
