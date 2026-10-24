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

// Function: func_00359518
// Address: 0x359518 - 0x359590
void func_00359518_0x359518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00359518_0x359518");
#endif

    switch (ctx->pc) {
        case 0x35957cu: goto label_35957c;
        default: break;
    }

    ctx->pc = 0x359518u;

    // 0x359518: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x359518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x35951c: 0x24831310  addiu       $v1, $a0, 0x1310
    ctx->pc = 0x35951cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4880));
    // 0x359520: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x359520u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x359524: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359524u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359528: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x359528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35952c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35952cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359530: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x359530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x359534: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x359534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x359538: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x359538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35953c: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x35953cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x359540: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x359540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x359544: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x359544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359548: 0x24640038  addiu       $a0, $v1, 0x38
    ctx->pc = 0x359548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x35954c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x35954cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x359550: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x359550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x359554: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x359554u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359558: 0x8c68000c  lw          $t0, 0xC($v1)
    ctx->pc = 0x359558u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x35955c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x35955cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359560: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x359560u;
    {
        const bool branch_taken_0x359560 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x359564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359560u;
        // 0x359564: 0x8c670008  lw          $a3, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359560) {
            ctx->pc = 0x359580u;
            goto label_359580;
        }
    }
    ctx->pc = 0x359568u;
    // 0x359568: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x359568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x35956c: 0x1282823  subu        $a1, $t1, $t0
    ctx->pc = 0x35956cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x359570: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x359570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x359574: 0xc0d6564  jal         func_359590
    ctx->pc = 0x359574u;
    SET_GPR_U32(ctx, 31, 0x35957Cu);
    ctx->pc = 0x359578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359574u;
    // 0x359578: 0x122280b  movn        $a1, $t1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359590u, 0x359574u, 0x35957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35957Cu;
label_35957c:
    // 0x35957c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35957cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_359580:
    // 0x359580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359584: 0x3e00008  jr          $ra
    ctx->pc = 0x359584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359584u;
        // 0x359588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35958Cu;
    // 0x35958c: 0x0  nop
    ctx->pc = 0x35958cu;
    // NOP
    ctx->pc = 0x359590u;
}
