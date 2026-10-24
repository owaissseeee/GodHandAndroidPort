#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r409_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r409
{
// Function: R409Init__Fv
// Address: 0x799220 - 0x7992d0
void R409Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R409Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799238u: goto label_799238;
        case 0x799240u: goto label_799240;
        case 0x79924cu: goto label_79924c;
        case 0x799268u: goto label_799268;
        case 0x79927cu: goto label_79927c;
        case 0x7992bcu: goto label_7992bc;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799224: 0x240402f0  addiu       $a0, $zero, 0x2F0
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 752));
    // 0x799228: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79922c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79922cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799230: 0xc1e6460  jal         func_799180
    ctx->pc = 0x799230u;
    SET_GPR_U32(ctx, 31, 0x799238u);
    ctx->pc = 0x799234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799230u;
    // 0x799234: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799230u, 0x799238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799238u;
label_799238:
    // 0x799238: 0xc1e6f44  jal         func_79BD10
    ctx->pc = 0x799238u;
    SET_GPR_U32(ctx, 31, 0x799240u);
    ctx->pc = 0x79923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799238u;
    // 0x79923c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BD10u, 0x799238u, 0x799240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799240u;
label_799240:
    // 0x799240: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x799240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799244: 0xc1e6688  jal         func_799A20
    ctx->pc = 0x799244u;
    SET_GPR_U32(ctx, 31, 0x79924Cu);
    ctx->pc = 0x799248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799244u;
    // 0x799248: 0xae02c180  sw          $v0, -0x3E80($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294951296), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799A20u, 0x799244u, 0x79924Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79924Cu;
label_79924c:
    // 0x79924c: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x79924cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x799250: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799254: 0x2610ae50  addiu       $s0, $s0, -0x51B0
    ctx->pc = 0x799254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946384));
    // 0x799258: 0x24a5c020  addiu       $a1, $a1, -0x3FE0
    ctx->pc = 0x799258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950944));
    // 0x79925c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79925cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799260: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x799260u;
    SET_GPR_U32(ctx, 31, 0x799268u);
    ctx->pc = 0x799264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799260u;
    // 0x799264: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799260u, 0x799268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799268u;
label_799268:
    // 0x799268: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79926c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79926cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799270: 0x24a5c028  addiu       $a1, $a1, -0x3FD8
    ctx->pc = 0x799270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950952));
    // 0x799274: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x799274u;
    SET_GPR_U32(ctx, 31, 0x79927Cu);
    ctx->pc = 0x799278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799274u;
    // 0x799278: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799274u, 0x79927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79927Cu;
label_79927c:
    // 0x79927c: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x79927cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x799280: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x799280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x799284: 0x8c838658  lw          $v1, -0x79A8($a0)
    ctx->pc = 0x799284u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799288: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79928c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x79928cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x799290: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x799290u;
    {
        const bool branch_taken_0x799290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799290u;
        // 0x799294: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799290) {
            ctx->pc = 0x7992C0u;
            goto label_7992c0;
        }
    }
    ctx->pc = 0x799298u;
    // 0x799298: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79929c: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79929cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x7992a0: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x7992a4: 0x24e792d8  addiu       $a3, $a3, -0x6D28
    ctx->pc = 0x7992a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939352));
    // 0x7992a8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x7992a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x7992ac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7992acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7992b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7992b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992b4: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x7992B4u;
    SET_GPR_U32(ctx, 31, 0x7992BCu);
    ctx->pc = 0x7992B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992B4u;
    // 0x7992b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x7992B4u, 0x7992BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992BCu;
label_7992bc:
    // 0x7992bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7992bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7992c0:
    // 0x7992c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7992c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7992c4: 0x3e00008  jr          $ra
    ctx->pc = 0x7992C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7992C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992C4u;
        // 0x7992c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7992C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7992CCu;
    // 0x7992cc: 0x0  nop
    ctx->pc = 0x7992ccu;
    // NOP
    ctx->pc = 0x7992d0u;
}
} // namespace gh_r409
