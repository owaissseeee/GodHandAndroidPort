#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r402_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r402
{
// Function: R402Init__Fv
// Address: 0x799220 - 0x799318
void R402Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R402Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799238u: goto label_799238;
        case 0x799254u: goto label_799254;
        case 0x799268u: goto label_799268;
        case 0x79927cu: goto label_79927c;
        case 0x7992a0u: goto label_7992a0;
        case 0x7992d0u: goto label_7992d0;
        case 0x799304u: goto label_799304;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799224: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
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
    // 0x799234: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799230u, 0x799238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799238u;
label_799238:
    // 0x799238: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79923c: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79923cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799240: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799244: 0xac629c80  sw          $v0, -0x6380($v1)
    ctx->pc = 0x799244u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x799C80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x799C80u, _value); } while (0);
    // 0x799248: 0x24a597f0  addiu       $a1, $a1, -0x6810
    ctx->pc = 0x799248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940656));
    // 0x79924c: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79924Cu;
    SET_GPR_U32(ctx, 31, 0x799254u);
    ctx->pc = 0x799250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79924Cu;
    // 0x799250: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79924Cu, 0x799254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799254u;
label_799254:
    // 0x799254: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799258: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79925c: 0x24a59460  addiu       $a1, $a1, -0x6BA0
    ctx->pc = 0x79925cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939744));
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
    // 0x799268: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79926c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79926cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799270: 0x24a59368  addiu       $a1, $a1, -0x6C98
    ctx->pc = 0x799270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939496));
    // 0x799274: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799274u;
    SET_GPR_U32(ctx, 31, 0x79927Cu);
    ctx->pc = 0x799278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799274u;
    // 0x799278: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799274u, 0x79927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79927Cu;
label_79927c:
    // 0x79927c: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79927cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799280: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x799280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x799284: 0x80649ba0  lb          $a0, -0x6460($v1)
    ctx->pc = 0x799284u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x799BA0u));
    // 0x799288: 0x24669ba0  addiu       $a2, $v1, -0x6460
    ctx->pc = 0x799288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941600));
    // 0x79928c: 0x24484c38  addiu       $t0, $v0, 0x4C38
    ctx->pc = 0x79928cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19512));
    // 0x799290: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799294: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x799294u;
    {
        const bool branch_taken_0x799294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799294u;
        // 0x799298: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799294) {
            ctx->pc = 0x7992C8u;
            goto label_7992c8;
        }
    }
    ctx->pc = 0x79929Cu;
    // 0x79929c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79929cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7992a0:
    // 0x7992a0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7992a4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7992a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x7992a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7992a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7992ac: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7992acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x7992b0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7992b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x7992b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7992B4u;
    {
        const bool branch_taken_0x7992b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992B4u;
        // 0x7992b8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992b4) {
            ctx->pc = 0x7992C8u;
            goto label_7992c8;
        }
    }
    ctx->pc = 0x7992BCu;
    // 0x7992bc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7992bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7992c0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7992C0u;
    {
        const bool branch_taken_0x7992c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7992c0) {
            ctx->pc = 0x7992C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7992C0u;
            // 0x7992c4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7992A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7992a0;
        }
    }
    ctx->pc = 0x7992C8u;
label_7992c8:
    // 0x7992c8: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x7992C8u;
    SET_GPR_U32(ctx, 31, 0x7992D0u);
    ctx->pc = 0x7992CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992C8u;
    // 0x7992cc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x7992C8u, 0x7992D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992D0u;
label_7992d0:
    // 0x7992d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7992d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992d4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x7992D4u;
    {
        const bool branch_taken_0x7992d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992D4u;
        // 0x7992d8: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992d4) {
            ctx->pc = 0x7992E0u;
            goto label_7992e0;
        }
    }
    ctx->pc = 0x7992DCu;
    // 0x7992dc: 0xa06202b5  sb          $v0, 0x2B5($v1)
    ctx->pc = 0x7992dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 693), (uint8_t)GPR_U32(ctx, 2));
label_7992e0:
    // 0x7992e0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7992e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7992e4: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x7992e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x7992e8: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x7992e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x7992ec: 0x24e79320  addiu       $a3, $a3, -0x6CE0
    ctx->pc = 0x7992ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939424));
    // 0x7992f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7992f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7992f4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7992f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7992f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7992f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992fc: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x7992FCu;
    SET_GPR_U32(ctx, 31, 0x799304u);
    ctx->pc = 0x799300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992FCu;
    // 0x799300: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x7992FCu, 0x799304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799304u;
label_799304:
    // 0x799304: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x799304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79930c: 0x3e00008  jr          $ra
    ctx->pc = 0x79930Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79930Cu;
        // 0x799310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79930Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799314u;
    // 0x799314: 0x0  nop
    ctx->pc = 0x799314u;
    // NOP
    ctx->pc = 0x799318u;
}
} // namespace gh_r402
