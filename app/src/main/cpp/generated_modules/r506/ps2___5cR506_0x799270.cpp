#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r506_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r506
{
// Function: __5cR506
// Address: 0x799270 - 0x799358
void ps2___5cR506_0x799270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___5cR506_0x799270");
#endif

    switch (ctx->pc) {
        case 0x7992ccu: goto label_7992cc;
        case 0x799300u: goto label_799300;
        case 0x799320u: goto label_799320;
        case 0x799340u: goto label_799340;
        default: break;
    }

    ctx->pc = 0x799270u;

    // 0x799270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799274: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799278: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79927c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x79927cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x799280: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x799280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799288: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x799288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79928c: 0x8c458658  lw          $a1, -0x79A8($v0)
    ctx->pc = 0x79928cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799290: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x799290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x799294: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x799294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x799298: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x799298u;
    {
        const bool branch_taken_0x799298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799298u;
        // 0x79929c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799298) {
            ctx->pc = 0x7992D4u;
            goto label_7992d4;
        }
    }
    ctx->pc = 0x7992A0u;
    // 0x7992a0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x7992a4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x7992a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x7992a8: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x7992A8u;
    {
        const bool branch_taken_0x7992a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7992ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992A8u;
        // 0x7992ac: 0x8e028658  lw          $v0, -0x79A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992a8) {
            ctx->pc = 0x799304u;
            goto label_799304;
        }
    }
    ctx->pc = 0x7992B0u;
    // 0x7992b0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7992b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7992b4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7992b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7992b8: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x7992b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x7992bc: 0x24a59358  addiu       $a1, $a1, -0x6CA8
    ctx->pc = 0x7992bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939480));
    // 0x7992c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x7992c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992c4: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x7992C4u;
    SET_GPR_U32(ctx, 31, 0x7992CCu);
    ctx->pc = 0x7992C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992C4u;
    // 0x7992c8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x7992C4u, 0x7992CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992CCu;
label_7992cc:
    // 0x7992cc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x7992CCu;
    {
        const bool branch_taken_0x7992cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992CCu;
        // 0x7992d0: 0x8e028658  lw          $v0, -0x79A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992cc) {
            ctx->pc = 0x799304u;
            goto label_799304;
        }
    }
    ctx->pc = 0x7992D4u;
label_7992d4:
    // 0x7992d4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x7992d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x7992d8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x7992d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x7992dc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7992DCu;
    {
        const bool branch_taken_0x7992dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7992E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992DCu;
        // 0x7992e0: 0x8e028658  lw          $v0, -0x79A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992dc) {
            ctx->pc = 0x799304u;
            goto label_799304;
        }
    }
    ctx->pc = 0x7992E4u;
    // 0x7992e4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7992e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7992e8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7992e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7992ec: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x7992ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x7992f0: 0x24a59928  addiu       $a1, $a1, -0x66D8
    ctx->pc = 0x7992f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940968));
    // 0x7992f4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x7992f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992f8: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x7992F8u;
    SET_GPR_U32(ctx, 31, 0x799300u);
    ctx->pc = 0x7992FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992F8u;
    // 0x7992fc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x7992F8u, 0x799300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799300u;
label_799300:
    // 0x799300: 0x8e028658  lw          $v0, -0x79A8($s0)
    ctx->pc = 0x799300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936152)));
label_799304:
    // 0x799304: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799308: 0x460000d  bltz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x799308u;
    {
        const bool branch_taken_0x799308 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x79930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799308u;
        // 0x79930c: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799308) {
            ctx->pc = 0x799340u;
            goto label_799340;
        }
    }
    ctx->pc = 0x799310u;
    // 0x799310: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799314: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x799314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799318: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x799318u;
    SET_GPR_U32(ctx, 31, 0x799320u);
    ctx->pc = 0x79931Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799318u;
    // 0x79931c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799318u, 0x799320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799320u;
label_799320:
    // 0x799320: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799320u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x799324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799328: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79932c: 0x24e796a8  addiu       $a3, $a3, -0x6958
    ctx->pc = 0x79932cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940328));
    // 0x799330: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799334: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x799334u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799338: 0xc0b09d4  jal         func_2C2750
    ctx->pc = 0x799338u;
    SET_GPR_U32(ctx, 31, 0x799340u);
    ctx->pc = 0x79933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799338u;
    // 0x79933c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2750u, 0x799338u, 0x799340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799340u;
label_799340:
    // 0x799340: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x799340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799344: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x799344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799348: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x799348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79934c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79934cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799350: 0x3e00008  jr          $ra
    ctx->pc = 0x799350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799350u;
        // 0x799354: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799358u;
}
} // namespace gh_r506
