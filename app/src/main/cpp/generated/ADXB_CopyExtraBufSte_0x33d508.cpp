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

// Function: ADXB_CopyExtraBufSte
// Address: 0x33d508 - 0x33d578
void ADXB_CopyExtraBufSte_0x33d508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ADXB_CopyExtraBufSte_0x33d508");
#endif

    switch (ctx->pc) {
        case 0x33d540u: goto label_33d540;
        default: break;
    }

    ctx->pc = 0x33d508u;

    // 0x33d508: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33d508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33d50c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33d50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33d510: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33d510u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d514: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33d514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33d518: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33d518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d51c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33d51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x33d520: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x33d520u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d524: 0x122840  sll         $a1, $s2, 1
    ctx->pc = 0x33d524u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x33d528: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33d528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33d52c: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x33d52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x33d530: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x33d530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d534: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33d534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33d538: 0xc0cf536  jal         func_33D4D8
    ctx->pc = 0x33D538u;
    SET_GPR_U32(ctx, 31, 0x33D540u);
    ctx->pc = 0x33D53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D538u;
    // 0x33d53c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D4D8u, 0x33D538u, 0x33D540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D540u;
label_33d540:
    // 0x33d540: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x33d540u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x33d544: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x33d544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x33d548: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33d548u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33d54c: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x33d54cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x33d550: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x33d550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x33d554: 0x2302821  addu        $a1, $s1, $s0
    ctx->pc = 0x33d554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x33d558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33d558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33d55c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x33d55cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d560: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33d560u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33d564: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33d564u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33d568: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33d568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33d56c: 0x80cf536  j           func_33D4D8
    ctx->pc = 0x33D56Cu;
    ctx->pc = 0x33D570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D56Cu;
    // 0x33d570: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D4D8u, 0x33D56Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33D574u;
    // 0x33d574: 0x0  nop
    ctx->pc = 0x33d574u;
    // NOP
    ctx->pc = 0x33d578u;
}
