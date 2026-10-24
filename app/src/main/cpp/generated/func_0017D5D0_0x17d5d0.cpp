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

// Function: func_0017D5D0
// Address: 0x17d5d0 - 0x17d638
void func_0017D5D0_0x17d5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017D5D0_0x17d5d0");
#endif

    switch (ctx->pc) {
        case 0x17d5e4u: goto label_17d5e4;
        case 0x17d608u: goto label_17d608;
        default: break;
    }

    ctx->pc = 0x17d5d0u;

    // 0x17d5d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17d5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d5d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17d5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17d5d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d5dc: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x17D5DCu;
    SET_GPR_U32(ctx, 31, 0x17D5E4u);
    ctx->pc = 0x17D5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D5DCu;
    // 0x17d5e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x17D5DCu, 0x17D5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D5E4u;
label_17d5e4:
    // 0x17d5e4: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x17d5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x17d5e8: 0x24631f20  addiu       $v1, $v1, 0x1F20
    ctx->pc = 0x17d5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7968));
    // 0x17d5ec: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x17d5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x17d5f0: 0xfa000610  sqc2        $vf0, 0x610($s0)
    ctx->pc = 0x17d5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1552), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17d5f4: 0xfa000620  sqc2        $vf0, 0x620($s0)
    ctx->pc = 0x17d5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1568), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17d5f8: 0xfa000630  sqc2        $vf0, 0x630($s0)
    ctx->pc = 0x17d5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1584), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17d5fc: 0xfa000640  sqc2        $vf0, 0x640($s0)
    ctx->pc = 0x17d5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1600), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17d600: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x17d600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x17d604: 0x26020670  addiu       $v0, $s0, 0x670
    ctx->pc = 0x17d604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1648));
label_17d608:
    // 0x17d608: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17d608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17d60c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17d60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17d610: 0x0  nop
    ctx->pc = 0x17d610u;
    // NOP
    // 0x17d614: 0x0  nop
    ctx->pc = 0x17d614u;
    // NOP
    // 0x17d618: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x17D618u;
    {
        const bool branch_taken_0x17d618 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x17D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D618u;
        // 0x17d61c: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d618) {
            ctx->pc = 0x17D608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d608;
        }
    }
    ctx->pc = 0x17D620u;
    // 0x17d620: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17d620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d624: 0xae000674  sw          $zero, 0x674($s0)
    ctx->pc = 0x17d624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1652), GPR_U32(ctx, 0));
    // 0x17d628: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17d628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d62c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d630: 0x3e00008  jr          $ra
    ctx->pc = 0x17D630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D630u;
        // 0x17d634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D638u;
}
