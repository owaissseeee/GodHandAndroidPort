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

// Function: func_0033C458
// Address: 0x33c458 - 0x33c4c0
void func_0033C458_0x33c458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033C458_0x33c458");
#endif

    switch (ctx->pc) {
        case 0x33c458u: goto label_33c458;
        case 0x33c45cu: goto label_33c45c;
        case 0x33c460u: goto label_33c460;
        case 0x33c464u: goto label_33c464;
        case 0x33c468u: goto label_33c468;
        case 0x33c46cu: goto label_33c46c;
        case 0x33c470u: goto label_33c470;
        case 0x33c474u: goto label_33c474;
        case 0x33c478u: goto label_33c478;
        case 0x33c47cu: goto label_33c47c;
        case 0x33c480u: goto label_33c480;
        case 0x33c484u: goto label_33c484;
        case 0x33c488u: goto label_33c488;
        case 0x33c48cu: goto label_33c48c;
        case 0x33c490u: goto label_33c490;
        case 0x33c494u: goto label_33c494;
        case 0x33c498u: goto label_33c498;
        case 0x33c49cu: goto label_33c49c;
        case 0x33c4a0u: goto label_33c4a0;
        case 0x33c4a4u: goto label_33c4a4;
        case 0x33c4a8u: goto label_33c4a8;
        case 0x33c4acu: goto label_33c4ac;
        case 0x33c4b0u: goto label_33c4b0;
        case 0x33c4b4u: goto label_33c4b4;
        case 0x33c4b8u: goto label_33c4b8;
        case 0x33c4bcu: goto label_33c4bc;
        default: break;
    }

    ctx->pc = 0x33c458u;

label_33c458:
    // 0x33c458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33c458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33c45c:
    // 0x33c45c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33c45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33c460:
    // 0x33c460: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33c460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33c464:
    // 0x33c464: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33c464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33c468:
    // 0x33c468: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33c468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33c46c:
    // 0x33c46c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33c46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_33c470:
    // 0x33c470: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x33c470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_33c474:
    // 0x33c474: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_33c478:
    if (ctx->pc == 0x33C478u) {
        ctx->pc = 0x33C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C474u;
        // 0x33c478: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C47Cu;
        goto label_33c47c;
    }
    ctx->pc = 0x33C474u;
    {
        const bool branch_taken_0x33c474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C474u;
        // 0x33c478: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c474) {
            ctx->pc = 0x33C48Cu;
            goto label_33c48c;
        }
    }
    ctx->pc = 0x33C47Cu;
label_33c47c:
    // 0x33c47c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_33c480:
    // 0x33c480: 0x8c439d28  lw          $v1, -0x62D8($v0)
    ctx->pc = 0x33c480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941992)));
label_33c484:
    // 0x33c484: 0x60f809  jalr        $v1
label_33c488:
    if (ctx->pc == 0x33C488u) {
        ctx->pc = 0x33C48Cu;
        goto label_33c48c;
    }
    ctx->pc = 0x33C484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33C48Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C484u, 0x33C48Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33C48Cu;
label_33c48c:
    // 0x33c48c: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x33c48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_33c490:
    // 0x33c490: 0xae3000b8  sw          $s0, 0xB8($s1)
    ctx->pc = 0x33c490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 16));
label_33c494:
    // 0x33c494: 0x202001a  div         $zero, $s0, $v0
    ctx->pc = 0x33c494u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_33c498:
    // 0x33c498: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_33c49c:
    if (ctx->pc == 0x33C49Cu) {
        ctx->pc = 0x33C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C498u;
        // 0x33c49c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C4A0u;
        goto label_33c4a0;
    }
    ctx->pc = 0x33C498u;
    {
        const bool branch_taken_0x33c498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c498) {
            ctx->pc = 0x33C49Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C498u;
            // 0x33c49c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C4A0u;
            goto label_33c4a0;
        }
    }
    ctx->pc = 0x33C4A0u;
label_33c4a0:
    // 0x33c4a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33c4a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33c4a4:
    // 0x33c4a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33c4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33c4a8:
    // 0x33c4a8: 0x1812  mflo        $v1
    ctx->pc = 0x33c4a8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_33c4ac:
    // 0x33c4ac: 0xae2300bc  sw          $v1, 0xBC($s1)
    ctx->pc = 0x33c4acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 3));
label_33c4b0:
    // 0x33c4b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33c4b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33c4b4:
    // 0x33c4b4: 0x3e00008  jr          $ra
label_33c4b8:
    if (ctx->pc == 0x33C4B8u) {
        ctx->pc = 0x33C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C4B4u;
        // 0x33c4b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C4BCu;
        goto label_33c4bc;
    }
    ctx->pc = 0x33C4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C4B4u;
        // 0x33c4b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C4BCu;
label_33c4bc:
    // 0x33c4bc: 0x0  nop
    ctx->pc = 0x33c4bcu;
    // NOP
    ctx->pc = 0x33c4c0u;
}
