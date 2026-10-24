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

// Function: cPadVib_init
// Address: 0x2bdb78 - 0x2bdbd0
void cPadVib_init_0x2bdb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cPadVib_init_0x2bdb78");
#endif

    switch (ctx->pc) {
        case 0x2bdba0u: goto label_2bdba0;
        default: break;
    }

    ctx->pc = 0x2bdb78u;

    // 0x2bdb78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bdb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bdb7c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2bdb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2bdb80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2bdb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2bdb84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bdb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bdb88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bdb88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdb8c: 0x8c4379f4  lw          $v1, 0x79F4($v0)
    ctx->pc = 0x2bdb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7479F4u));
    // 0x2bdb90: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2bdb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2bdb94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bdb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bdb98: 0xc0af7f6  jal         func_2BDFD8
    ctx->pc = 0x2BDB98u;
    SET_GPR_U32(ctx, 31, 0x2BDBA0u);
    ctx->pc = 0x2BDB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDB98u;
    // 0x2bdb9c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDFD8u, 0x2BDB98u, 0x2BDBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDBA0u;
label_2bdba0:
    // 0x2bdba0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2bdba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2bdba4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bdba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bdba8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2bdba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2bdbac: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2bdbacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2bdbb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2bdbb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBB4u;
        // 0x2bdbb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDBBCu;
    // 0x2bdbbc: 0x0  nop
    ctx->pc = 0x2bdbbcu;
    // NOP
    // 0x2bdbc0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2bdbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bdbc4: 0x0  nop
    ctx->pc = 0x2bdbc4u;
    // NOP
    // 0x2bdbc8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2bdbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bdbcc: 0x0  nop
    ctx->pc = 0x2bdbccu;
    // NOP
    ctx->pc = 0x2bdbd0u;
}
