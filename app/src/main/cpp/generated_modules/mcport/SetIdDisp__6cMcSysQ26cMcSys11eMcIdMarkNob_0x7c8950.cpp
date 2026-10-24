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
// Function: SetIdDisp__6cMcSysQ26cMcSys11eMcIdMarkNob
// Address: 0x7c8950 - 0x7c89e8
void SetIdDisp__6cMcSysQ26cMcSys11eMcIdMarkNob_0x7c8950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetIdDisp__6cMcSysQ26cMcSys11eMcIdMarkNob_0x7c8950");
#endif

    switch (ctx->pc) {
        case 0x7c8988u: goto label_7c8988;
        case 0x7c89ccu: goto label_7c89cc;
        default: break;
    }

    ctx->pc = 0x7c8950u;

    // 0x7c8950: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7c8950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7c8954: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x7c8954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x7c8958: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7c8958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7c895c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x7c895cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x7c8960: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x7c8960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8964: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7c8964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7c8968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c8968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c896c: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x7c896cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x7c8970: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c8970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c8974: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x7C8974u;
    {
        const bool branch_taken_0x7c8974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C8978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8974u;
        // 0x7c8978: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8974) {
            ctx->pc = 0x7C89CCu;
            goto label_7c89cc;
        }
    }
    ctx->pc = 0x7C897Cu;
    // 0x7c897c: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x7c897cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x7c8980: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x7C8980u;
    SET_GPR_U32(ctx, 31, 0x7C8988u);
    ctx->pc = 0x7C8984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8980u;
    // 0x7c8984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x7C8980u, 0x7C8988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8988u;
label_7c8988:
    // 0x7c8988: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c8988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c898c: 0x3a420001  xori        $v0, $s2, 0x1
    ctx->pc = 0x7c898cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
    // 0x7c8990: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C8990u;
    {
        const bool branch_taken_0x7c8990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C8994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8990u;
        // 0x7c8994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8990) {
            ctx->pc = 0x7C89ACu;
            goto label_7c89ac;
        }
    }
    ctx->pc = 0x7C8998u;
    // 0x7c8998: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x7c8998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x7c899c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x7c899cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x7c89a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7c89a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x7c89a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7C89A4u;
    {
        const bool branch_taken_0x7c89a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C89A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C89A4u;
        // 0x7c89a8: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c89a4) {
            ctx->pc = 0x7C89C0u;
            goto label_7c89c0;
        }
    }
    ctx->pc = 0x7C89ACu;
label_7c89ac:
    // 0x7c89ac: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x7c89acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x7c89b0: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x7c89b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x7c89b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x7c89b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x7c89b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x7c89b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x7c89bc: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x7c89bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_7c89c0:
    // 0x7c89c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7c89c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c89c4: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x7C89C4u;
    SET_GPR_U32(ctx, 31, 0x7C89CCu);
    ctx->pc = 0x7C89C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C89C4u;
    // 0x7c89c8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x7C89C4u, 0x7C89CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C89CCu;
label_7c89cc:
    // 0x7c89cc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7c89ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c89d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7c89d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c89d4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7c89d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c89d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c89d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c89dc: 0x3e00008  jr          $ra
    ctx->pc = 0x7C89DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C89E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C89DCu;
        // 0x7c89e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C89DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C89E4u;
    // 0x7c89e4: 0x0  nop
    ctx->pc = 0x7c89e4u;
    // NOP
    ctx->pc = 0x7c89e8u;
}
} // namespace gh_mcport
