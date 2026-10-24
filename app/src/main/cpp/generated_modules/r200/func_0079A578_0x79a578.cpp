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
// Function: func_0079A578
// Address: 0x79a578 - 0x79a5f8
void func_0079A578_0x79a578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A578_0x79a578");
#endif

    switch (ctx->pc) {
        case 0x79a59cu: goto label_79a59c;
        case 0x79a5a8u: goto label_79a5a8;
        case 0x79a5d8u: goto label_79a5d8;
        default: break;
    }

    ctx->pc = 0x79a578u;

    // 0x79a578: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79a578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79a57c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x79a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x79a580: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x79a580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79a584: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79a584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79a588: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a58c: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x79a58cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x79a590: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79a590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79a594: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A594u;
    SET_GPR_U32(ctx, 31, 0x79A59Cu);
    ctx->pc = 0x79A598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A594u;
    // 0x79a598: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A594u, 0x79A59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A59Cu;
label_79a59c:
    // 0x79a59c: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x79a59cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x79a5a0: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A5A0u;
    SET_GPR_U32(ctx, 31, 0x79A5A8u);
    ctx->pc = 0x79A5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5A0u;
    // 0x79a5a4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A5A0u, 0x79A5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5A8u;
label_79a5a8:
    // 0x79a5a8: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x79a5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x79a5ac: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x79a5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x79a5b0: 0x8c658658  lw          $a1, -0x79A8($v1)
    ctx->pc = 0x79a5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79a5b4: 0x82800b  movn        $s0, $a0, $v0
    ctx->pc = 0x79a5b4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x79a5b8: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x79a5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x79a5bc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x79a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79a5c0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x79a5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x79a5c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A5C4u;
    {
        const bool branch_taken_0x79a5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5C4u;
        // 0x79a5c8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5c4) {
            ctx->pc = 0x79A5E0u;
            goto label_79a5e0;
        }
    }
    ctx->pc = 0x79A5CCu;
    // 0x79a5cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x79a5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79a5d0: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A5D0u;
    SET_GPR_U32(ctx, 31, 0x79A5D8u);
    ctx->pc = 0x79A5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5D0u;
    // 0x79a5d4: 0xa3a20020  sb          $v0, 0x20($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A5D0u, 0x79A5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5D8u;
label_79a5d8:
    // 0x79a5d8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x79a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x79a5dc: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x79a5dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_79a5e0:
    // 0x79a5e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x79a5e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79a5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a5e8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79a5e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x79A5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5ECu;
        // 0x79a5f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A5F4u;
    // 0x79a5f4: 0x0  nop
    ctx->pc = 0x79a5f4u;
    // NOP
    ctx->pc = 0x79a5f8u;
}
} // namespace gh_r200
