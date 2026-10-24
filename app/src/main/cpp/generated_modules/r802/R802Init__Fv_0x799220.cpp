#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r802_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r802
{
// Function: R802Init__Fv
// Address: 0x799220 - 0x7992f0
void R802Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R802Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799240u: goto label_799240;
        case 0x799268u: goto label_799268;
        case 0x7992a4u: goto label_7992a4;
        case 0x7992ccu: goto label_7992cc;
        case 0x7992dcu: goto label_7992dc;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799224: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799228: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79922c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799230: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x799230u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
    // 0x799234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799238: 0xc1e6460  jal         func_799180
    ctx->pc = 0x799238u;
    SET_GPR_U32(ctx, 31, 0x799240u);
    ctx->pc = 0x79923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799238u;
    // 0x79923c: 0x3c11007a  lui         $s1, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799238u, 0x799240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799240u;
label_799240:
    // 0x799240: 0xae22af80  sw          $v0, -0x5080($s1)
    ctx->pc = 0x799240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294946688), GPR_U32(ctx, 2));
    // 0x799244: 0x8e028658  lw          $v0, -0x79A8($s0)
    ctx->pc = 0x799244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936152)));
    // 0x799248: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x79924c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x79924Cu;
    {
        const bool branch_taken_0x79924c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x799250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79924Cu;
        // 0x799250: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79924c) {
            ctx->pc = 0x799268u;
            goto label_799268;
        }
    }
    ctx->pc = 0x799254u;
    // 0x799254: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799258: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x799258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x79925c: 0x24a593a0  addiu       $a1, $a1, -0x6C60
    ctx->pc = 0x79925cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939552));
    // 0x799260: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799260u;
    SET_GPR_U32(ctx, 31, 0x799268u);
    ctx->pc = 0x799264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799260u;
    // 0x799264: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799260u, 0x799268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799268u;
label_799268:
    // 0x799268: 0x8e038658  lw          $v1, -0x79A8($s0)
    ctx->pc = 0x799268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936152)));
    // 0x79926c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x79926cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x799270: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x799270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799274: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x799274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x799278: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x799278u;
    {
        const bool branch_taken_0x799278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799278u;
        // 0x79927c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799278) {
            ctx->pc = 0x7992ACu;
            goto label_7992ac;
        }
    }
    ctx->pc = 0x799280u;
    // 0x799280: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799284: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799284u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x799288: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x799288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x79928c: 0x24e79c30  addiu       $a3, $a3, -0x63D0
    ctx->pc = 0x79928cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941744));
    // 0x799290: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799294: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799298: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799298u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79929c: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x79929Cu;
    SET_GPR_U32(ctx, 31, 0x7992A4u);
    ctx->pc = 0x7992A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79929Cu;
    // 0x7992a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x79929Cu, 0x7992A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992A4u;
label_7992a4:
    // 0x7992a4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x7992A4u;
    {
        const bool branch_taken_0x7992a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992A4u;
        // 0x7992a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992a4) {
            ctx->pc = 0x7992E0u;
            goto label_7992e0;
        }
    }
    ctx->pc = 0x7992ACu;
label_7992ac:
    // 0x7992ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x7992acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x7992b0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7992B0u;
    {
        const bool branch_taken_0x7992b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7992B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992B0u;
        // 0x7992b4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992b0) {
            ctx->pc = 0x7992D4u;
            goto label_7992d4;
        }
    }
    ctx->pc = 0x7992B8u;
    // 0x7992b8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7992b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7992bc: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x7992bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x7992c0: 0x24a59d48  addiu       $a1, $a1, -0x62B8
    ctx->pc = 0x7992c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942024));
    // 0x7992c4: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7992C4u;
    SET_GPR_U32(ctx, 31, 0x7992CCu);
    ctx->pc = 0x7992C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992C4u;
    // 0x7992c8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7992C4u, 0x7992CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992CCu;
label_7992cc:
    // 0x7992cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7992CCu;
    {
        const bool branch_taken_0x7992cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992CCu;
        // 0x7992d0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992cc) {
            ctx->pc = 0x7992E0u;
            goto label_7992e0;
        }
    }
    ctx->pc = 0x7992D4u;
label_7992d4:
    // 0x7992d4: 0xc1e6974  jal         func_79A5D0
    ctx->pc = 0x7992D4u;
    SET_GPR_U32(ctx, 31, 0x7992DCu);
    ctx->pc = 0x7992D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992D4u;
    // 0x7992d8: 0x8e24af80  lw          $a0, -0x5080($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A5D0u, 0x7992D4u, 0x7992DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992DCu;
label_7992dc:
    // 0x7992dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7992dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7992e0:
    // 0x7992e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7992e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7992e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7992e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7992e8: 0x3e00008  jr          $ra
    ctx->pc = 0x7992E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7992ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992E8u;
        // 0x7992ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7992E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7992F0u;
}
} // namespace gh_r802
