#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r200_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r200
{
// Function: func_0079A4F8
// Address: 0x79a4f8 - 0x79a578
void func_0079A4F8_0x79a4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A4F8_0x79a4f8");
#endif

    switch (ctx->pc) {
        case 0x79a51cu: goto label_79a51c;
        case 0x79a528u: goto label_79a528;
        case 0x79a558u: goto label_79a558;
        default: break;
    }

    ctx->pc = 0x79a4f8u;

    // 0x79a4f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79a4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79a4fc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x79a4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79a500: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x79a500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79a504: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79a504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79a508: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a50c: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x79a50cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x79a510: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79a510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79a514: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A514u;
    SET_GPR_U32(ctx, 31, 0x79A51Cu);
    ctx->pc = 0x79A518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A514u;
    // 0x79a518: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A514u, 0x79A51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A51Cu;
label_79a51c:
    // 0x79a51c: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x79a51cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x79a520: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A520u;
    SET_GPR_U32(ctx, 31, 0x79A528u);
    ctx->pc = 0x79A524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A520u;
    // 0x79a524: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A520u, 0x79A528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A528u;
label_79a528:
    // 0x79a528: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x79a528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x79a52c: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x79a52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x79a530: 0x8c658658  lw          $a1, -0x79A8($v1)
    ctx->pc = 0x79a530u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79a534: 0x82800b  movn        $s0, $a0, $v0
    ctx->pc = 0x79a534u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x79a538: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x79a538u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x79a53c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x79a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79a540: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x79a540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x79a544: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A544u;
    {
        const bool branch_taken_0x79a544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A544u;
        // 0x79a548: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a544) {
            ctx->pc = 0x79A560u;
            goto label_79a560;
        }
    }
    ctx->pc = 0x79A54Cu;
    // 0x79a54c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x79a54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79a550: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A550u;
    SET_GPR_U32(ctx, 31, 0x79A558u);
    ctx->pc = 0x79A554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A550u;
    // 0x79a554: 0xa3a20020  sb          $v0, 0x20($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A550u, 0x79A558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A558u;
label_79a558:
    // 0x79a558: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x79a558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x79a55c: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x79a55cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_79a560:
    // 0x79a560: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x79a560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a564: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79a564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a568: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79a568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a56c: 0x3e00008  jr          $ra
    ctx->pc = 0x79A56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A56Cu;
        // 0x79a570: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A574u;
    // 0x79a574: 0x0  nop
    ctx->pc = 0x79a574u;
    // NOP
    ctx->pc = 0x79a578u;
}
} // namespace gh_r200
