#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r303_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r303
{
// Function: R303Init__Fv
// Address: 0x799220 - 0x7992f8
void R303Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R303Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799244u: goto label_799244;
        case 0x79925cu: goto label_79925c;
        case 0x799268u: goto label_799268;
        case 0x799274u: goto label_799274;
        case 0x799294u: goto label_799294;
        case 0x7992a4u: goto label_7992a4;
        case 0x7992b4u: goto label_7992b4;
        case 0x7992c8u: goto label_7992c8;
        case 0x7992dcu: goto label_7992dc;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x799224: 0x2404009c  addiu       $a0, $zero, 0x9C
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x799228: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79922c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x799230: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x799230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x799234: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x799234u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x799238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79923c: 0xc1e6460  jal         func_799180
    ctx->pc = 0x79923Cu;
    SET_GPR_U32(ctx, 31, 0x799244u);
    ctx->pc = 0x799240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79923Cu;
    // 0x799240: 0x3c12003c  lui         $s2, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x79923Cu, 0x799244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799244u;
label_799244:
    // 0x799244: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x799244u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x799248: 0xae229b00  sw          $v0, -0x6500($s1)
    ctx->pc = 0x799248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294941440), GPR_U32(ctx, 2));
    // 0x79924c: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x79924cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799250: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799254: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x799254u;
    SET_GPR_U32(ctx, 31, 0x79925Cu);
    ctx->pc = 0x799258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799254u;
    // 0x799258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799254u, 0x79925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79925Cu;
label_79925c:
    // 0x79925c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79925cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799260: 0xc0b0a3e  jal         func_2C28F8
    ctx->pc = 0x799260u;
    SET_GPR_U32(ctx, 31, 0x799268u);
    ctx->pc = 0x799264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799260u;
    // 0x799264: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C28F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C28F8u, 0x799260u, 0x799268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799268u;
label_799268:
    // 0x799268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79926c: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x79926Cu;
    SET_GPR_U32(ctx, 31, 0x799274u);
    ctx->pc = 0x799270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79926Cu;
    // 0x799270: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x79926Cu, 0x799274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799274u;
label_799274:
    // 0x799274: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799274u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x799278: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79927c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79927cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799280: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799280u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799284: 0x24e79328  addiu       $a3, $a3, -0x6CD8
    ctx->pc = 0x799284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939432));
    // 0x799288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79928c: 0xc0b09d4  jal         func_2C2750
    ctx->pc = 0x79928Cu;
    SET_GPR_U32(ctx, 31, 0x799294u);
    ctx->pc = 0x799290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79928Cu;
    // 0x799290: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2750u, 0x79928Cu, 0x799294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799294u;
label_799294:
    // 0x799294: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799298: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x799298u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x79929c: 0xc04fccc  jal         func_13F330
    ctx->pc = 0x79929Cu;
    SET_GPR_U32(ctx, 31, 0x7992A4u);
    ctx->pc = 0x7992A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79929Cu;
    // 0x7992a0: 0x24841e90  addiu       $a0, $a0, 0x1E90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F330u, 0x79929Cu, 0x7992A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992A4u;
label_7992a4:
    // 0x7992a4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7992a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7992a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7992a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7992ac: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x7992ACu;
    SET_GPR_U32(ctx, 31, 0x7992B4u);
    ctx->pc = 0x7992B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992ACu;
    // 0x7992b0: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x7992ACu, 0x7992B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992B4u;
label_7992b4:
    // 0x7992b4: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x7992b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x7992b8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7992b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7992bc: 0x24a59408  addiu       $a1, $a1, -0x6BF8
    ctx->pc = 0x7992bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939656));
    // 0x7992c0: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7992C0u;
    SET_GPR_U32(ctx, 31, 0x7992C8u);
    ctx->pc = 0x7992C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992C0u;
    // 0x7992c4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7992C0u, 0x7992C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992C8u;
label_7992c8:
    // 0x7992c8: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x7992c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x7992cc: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7992ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7992d0: 0x24a59750  addiu       $a1, $a1, -0x68B0
    ctx->pc = 0x7992d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940496));
    // 0x7992d4: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7992D4u;
    SET_GPR_U32(ctx, 31, 0x7992DCu);
    ctx->pc = 0x7992D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992D4u;
    // 0x7992d8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7992D4u, 0x7992DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992DCu;
label_7992dc:
    // 0x7992dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7992dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7992e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7992e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7992e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7992e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7992e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7992e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7992ec: 0x3e00008  jr          $ra
    ctx->pc = 0x7992ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7992F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992ECu;
        // 0x7992f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7992ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7992F4u;
    // 0x7992f4: 0x0  nop
    ctx->pc = 0x7992f4u;
    // NOP
    ctx->pc = 0x7992f8u;
}
} // namespace gh_r303
