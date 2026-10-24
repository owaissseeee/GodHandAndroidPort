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

// Function: func_00133810
// Address: 0x133810 - 0x133888
void func_00133810_0x133810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00133810_0x133810");
#endif

    switch (ctx->pc) {
        case 0x133858u: goto label_133858;
        case 0x13386cu: goto label_13386c;
        default: break;
    }

    ctx->pc = 0x133810u;

    // 0x133810: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x133810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x133814: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x133814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x133818: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x133818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13381c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x13381cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x133820: 0x24515528  addiu       $s1, $v0, 0x5528
    ctx->pc = 0x133820u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 21800));
    // 0x133824: 0x8c435528  lw          $v1, 0x5528($v0)
    ctx->pc = 0x133824u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x785528u));
    // 0x133828: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x133828u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13382c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13382cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x133830: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x133830u;
    {
        const bool branch_taken_0x133830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x133834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133830u;
        // 0x133834: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133830) {
            ctx->pc = 0x13386Cu;
            goto label_13386c;
        }
    }
    ctx->pc = 0x133838u;
    // 0x133838: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x133838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x13383c: 0x8c620d00  lw          $v0, 0xD00($v1)
    ctx->pc = 0x13383cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460D00u));
    // 0x133840: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x133840u;
    {
        const bool branch_taken_0x133840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x133844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133840u;
        // 0x133844: 0x24700d00  addiu       $s0, $v1, 0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133840) {
            ctx->pc = 0x133858u;
            goto label_133858;
        }
    }
    ctx->pc = 0x133848u;
    // 0x133848: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x133848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x13384c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13384cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133850: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x133850u;
    SET_GPR_U32(ctx, 31, 0x133858u);
    ctx->pc = 0x133854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133850u;
    // 0x133854: 0x24a5d5d0  addiu       $a1, $a1, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x133850u, 0x133858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133858u;
label_133858:
    // 0x133858: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x133858u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x13385c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13385cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133860: 0x24a5d5e8  addiu       $a1, $a1, -0x2A18
    ctx->pc = 0x133860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956520));
    // 0x133864: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x133864u;
    SET_GPR_U32(ctx, 31, 0x13386Cu);
    ctx->pc = 0x133868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133864u;
    // 0x133868: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x133864u, 0x13386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13386Cu;
label_13386c:
    // 0x13386c: 0x26425528  addiu       $v0, $s2, 0x5528
    ctx->pc = 0x13386cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 21800));
    // 0x133870: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x133870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x133874: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x133874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133878: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x133878u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13387c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13387cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133880: 0x3e00008  jr          $ra
    ctx->pc = 0x133880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133880u;
        // 0x133884: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133888u;
}
