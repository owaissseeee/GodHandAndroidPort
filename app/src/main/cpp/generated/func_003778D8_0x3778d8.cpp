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

// Function: func_003778D8
// Address: 0x3778d8 - 0x377998
void func_003778D8_0x3778d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003778D8_0x3778d8");
#endif

    switch (ctx->pc) {
        case 0x3778f8u: goto label_3778f8;
        default: break;
    }

    ctx->pc = 0x3778d8u;

    // 0x3778d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3778d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3778dc: 0x3c030077  lui         $v1, 0x77
    ctx->pc = 0x3778dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)119 << 16));
    // 0x3778e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3778e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3778e4: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x3778e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x3778e8: 0x244fafc0  addiu       $t7, $v0, -0x5040
    ctx->pc = 0x3778e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946752));
    // 0x3778ec: 0x2478e910  addiu       $t8, $v1, -0x16F0
    ctx->pc = 0x3778ecu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961424));
    // 0x3778f0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3778f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3778f4: 0x0  nop
    ctx->pc = 0x3778f4u;
    // NOP
label_3778f8:
    // 0x3778f8: 0x97190000  lhu         $t9, 0x0($t8)
    ctx->pc = 0x3778f8u;
    SET_GPR_ZE32(ctx, 25, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3778fc: 0x57200004  bnel        $t9, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3778FCu;
    {
        const bool branch_taken_0x3778fc = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        if (branch_taken_0x3778fc) {
            ctx->pc = 0x377900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3778FCu;
            // 0x377900: 0x9302000e  lbu         $v0, 0xE($t8) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x377910u;
            goto label_377910;
        }
    }
    ctx->pc = 0x377904u;
    // 0x377904: 0xa5e00000  sh          $zero, 0x0($t7)
    ctx->pc = 0x377904u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x377908: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x377908u;
    {
        const bool branch_taken_0x377908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377908u;
        // 0x37790c: 0xade00004  sw          $zero, 0x4($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377908) {
            ctx->pc = 0x377978u;
            goto label_377978;
        }
    }
    ctx->pc = 0x377910u;
label_377910:
    // 0x377910: 0x9303000f  lbu         $v1, 0xF($t8)
    ctx->pc = 0x377910u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 15)));
    // 0x377914: 0x8f040004  lw          $a0, 0x4($t8)
    ctx->pc = 0x377914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x377918: 0x97050008  lhu         $a1, 0x8($t8)
    ctx->pc = 0x377918u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x37791c: 0x9706000a  lhu         $a2, 0xA($t8)
    ctx->pc = 0x37791cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10)));
    // 0x377920: 0x9707000c  lhu         $a3, 0xC($t8)
    ctx->pc = 0x377920u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 12)));
    // 0x377924: 0x97080012  lhu         $t0, 0x12($t8)
    ctx->pc = 0x377924u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 18)));
    // 0x377928: 0x8f090078  lw          $t1, 0x78($t8)
    ctx->pc = 0x377928u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 120)));
    // 0x37792c: 0x8f0a007c  lw          $t2, 0x7C($t8)
    ctx->pc = 0x37792cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 124)));
    // 0x377930: 0x8f0b0080  lw          $t3, 0x80($t8)
    ctx->pc = 0x377930u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 128)));
    // 0x377934: 0x8f0c0084  lw          $t4, 0x84($t8)
    ctx->pc = 0x377934u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 132)));
    // 0x377938: 0x8f0d0088  lw          $t5, 0x88($t8)
    ctx->pc = 0x377938u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 136)));
    // 0x37793c: 0x8f0e008c  lw          $t6, 0x8C($t8)
    ctx->pc = 0x37793cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 140)));
    // 0x377940: 0xa5f90000  sh          $t9, 0x0($t7)
    ctx->pc = 0x377940u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 25));
    // 0x377944: 0xa1e20002  sb          $v0, 0x2($t7)
    ctx->pc = 0x377944u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x377948: 0xa1e30003  sb          $v1, 0x3($t7)
    ctx->pc = 0x377948u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x37794c: 0xade40004  sw          $a0, 0x4($t7)
    ctx->pc = 0x37794cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 4));
    // 0x377950: 0xa5e50008  sh          $a1, 0x8($t7)
    ctx->pc = 0x377950u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x377954: 0xa5e6000a  sh          $a2, 0xA($t7)
    ctx->pc = 0x377954u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 10), (uint16_t)GPR_U32(ctx, 6));
    // 0x377958: 0xa5e7000c  sh          $a3, 0xC($t7)
    ctx->pc = 0x377958u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 12), (uint16_t)GPR_U32(ctx, 7));
    // 0x37795c: 0xa5e8000e  sh          $t0, 0xE($t7)
    ctx->pc = 0x37795cu;
    WRITE16(ADD32(GPR_U32(ctx, 15), 14), (uint16_t)GPR_U32(ctx, 8));
    // 0x377960: 0xade90010  sw          $t1, 0x10($t7)
    ctx->pc = 0x377960u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 9));
    // 0x377964: 0xadea0014  sw          $t2, 0x14($t7)
    ctx->pc = 0x377964u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 20), GPR_U32(ctx, 10));
    // 0x377968: 0xadeb0018  sw          $t3, 0x18($t7)
    ctx->pc = 0x377968u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 24), GPR_U32(ctx, 11));
    // 0x37796c: 0xadec001c  sw          $t4, 0x1C($t7)
    ctx->pc = 0x37796cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 28), GPR_U32(ctx, 12));
    // 0x377970: 0xaded0020  sw          $t5, 0x20($t7)
    ctx->pc = 0x377970u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 32), GPR_U32(ctx, 13));
    // 0x377974: 0xadee0024  sw          $t6, 0x24($t7)
    ctx->pc = 0x377974u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 36), GPR_U32(ctx, 14));
label_377978:
    // 0x377978: 0x25ef0040  addiu       $t7, $t7, 0x40
    ctx->pc = 0x377978u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 64));
    // 0x37797c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x37797cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x377980: 0x601ffdd  bgez        $s0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x377980u;
    {
        const bool branch_taken_0x377980 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x377984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377980u;
        // 0x377984: 0x271800a0  addiu       $t8, $t8, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377980) {
            ctx->pc = 0x3778F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3778f8;
        }
    }
    ctx->pc = 0x377988u;
    // 0x377988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x377988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37798c: 0x3e00008  jr          $ra
    ctx->pc = 0x37798Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37798Cu;
        // 0x377990: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37798Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377994u;
    // 0x377994: 0x0  nop
    ctx->pc = 0x377994u;
    // NOP
    ctx->pc = 0x377998u;
}
