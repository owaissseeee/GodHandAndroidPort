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

// Function: func_003454F0
// Address: 0x3454f0 - 0x345598
void func_003454F0_0x3454f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003454F0_0x3454f0");
#endif

    switch (ctx->pc) {
        case 0x345508u: goto label_345508;
        case 0x34551cu: goto label_34551c;
        case 0x345524u: goto label_345524;
        default: break;
    }

    ctx->pc = 0x3454f0u;

    // 0x3454f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3454f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3454f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3454f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3454f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3454f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3454fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3454fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x345500: 0xc0d14ac  jal         func_3452B0
    ctx->pc = 0x345500u;
    SET_GPR_U32(ctx, 31, 0x345508u);
    ctx->pc = 0x345504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345500u;
    // 0x345504: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3452B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3452B0u, 0x345500u, 0x345508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345508u;
label_345508:
    // 0x345508: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x345508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34550c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34550cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x345510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345514: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x345514u;
    SET_GPR_U32(ctx, 31, 0x34551Cu);
    ctx->pc = 0x345518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345514u;
    // 0x345518: 0x24061890  addiu       $a2, $zero, 0x1890 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x345514u, 0x34551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34551Cu;
label_34551c:
    // 0x34551c: 0xc0d25bc  jal         func_3496F0
    ctx->pc = 0x34551Cu;
    SET_GPR_U32(ctx, 31, 0x345524u);
    ctx->pc = 0x345520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34551Cu;
    // 0x345520: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3496F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3496F0u, 0x34551Cu, 0x345524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345524u;
label_345524:
    // 0x345524: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x345524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345528: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x345528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x34552c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x34552Cu;
    {
        const bool branch_taken_0x34552c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x345530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34552Cu;
        // 0x345530: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34552c) {
            ctx->pc = 0x345558u;
            goto label_345558;
        }
    }
    ctx->pc = 0x345534u;
    // 0x345534: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x345534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x345538: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x345538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x34553c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x34553cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x345540: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x345540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345544: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x345544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x345548: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x345548u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x34554c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x34554cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x345550: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x345550u;
    {
        const bool branch_taken_0x345550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345550u;
        // 0x345554: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345550) {
            ctx->pc = 0x345574u;
            goto label_345574;
        }
    }
    ctx->pc = 0x345558u;
label_345558:
    // 0x345558: 0x3c01426f  lui         $at, 0x426F
    ctx->pc = 0x345558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17007 << 16));
    // 0x34555c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x34555cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x345560: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x345560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345564: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x345564u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x345568: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x345568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x34556c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x34556cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x345570: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x345570u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_345574:
    // 0x345574: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x345574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345578: 0xae20188c  sw          $zero, 0x188C($s1)
    ctx->pc = 0x345578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6284), GPR_U32(ctx, 0));
    // 0x34557c: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x34557cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x345580: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x345580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x345584: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x345584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345588: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x345588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34558c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34558cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x345590: 0x3e00008  jr          $ra
    ctx->pc = 0x345590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345590u;
        // 0x345594: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345598u;
}
