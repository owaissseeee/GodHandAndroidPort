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

// Function: func_002884E0
// Address: 0x2884e0 - 0x288570
void func_002884E0_0x2884e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002884E0_0x2884e0");
#endif

    switch (ctx->pc) {
        case 0x288538u: goto label_288538;
        case 0x28854cu: goto label_28854c;
        case 0x288554u: goto label_288554;
        case 0x28855cu: goto label_28855c;
        default: break;
    }

    ctx->pc = 0x2884e0u;

    // 0x2884e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2884e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2884e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2884e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2884e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2884e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2884ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2884ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2884f0: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2884f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2884f4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2884F4u;
    {
        const bool branch_taken_0x2884f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2884F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884F4u;
        // 0x2884f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884f4) {
            ctx->pc = 0x28850Cu;
            goto label_28850c;
        }
    }
    ctx->pc = 0x2884FCu;
    // 0x2884fc: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2884FCu;
    {
        const bool branch_taken_0x2884fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2884fc) {
            ctx->pc = 0x288544u;
            goto label_288544;
        }
    }
    ctx->pc = 0x288504u;
    // 0x288504: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x288504u;
    {
        const bool branch_taken_0x288504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288504u;
        // 0x288508: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288504) {
            ctx->pc = 0x288560u;
            goto label_288560;
        }
    }
    ctx->pc = 0x28850Cu;
label_28850c:
    // 0x28850c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28850cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x288510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288514: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x288514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x288518: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x288518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28851c: 0x8c4500d8  lw          $a1, 0xD8($v0)
    ctx->pc = 0x28851cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x288520: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x288520u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288524: 0x8c4600dc  lw          $a2, 0xDC($v0)
    ctx->pc = 0x288524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x288528: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x288528u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28852c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x28852cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x288530: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x288530u;
    SET_GPR_U32(ctx, 31, 0x288538u);
    ctx->pc = 0x288534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288530u;
    // 0x288534: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x288530u, 0x288538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288538u;
label_288538:
    // 0x288538: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x288538u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x28853c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28853cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x288540: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x288540u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_288544:
    // 0x288544: 0xc055f06  jal         func_157C18
    ctx->pc = 0x288544u;
    SET_GPR_U32(ctx, 31, 0x28854Cu);
    ctx->pc = 0x288548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288544u;
    // 0x288548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x288544u, 0x28854Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28854Cu;
label_28854c:
    // 0x28854c: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x28854Cu;
    SET_GPR_U32(ctx, 31, 0x288554u);
    ctx->pc = 0x288550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28854Cu;
    // 0x288550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x28854Cu, 0x288554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288554u;
label_288554:
    // 0x288554: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x288554u;
    SET_GPR_U32(ctx, 31, 0x28855Cu);
    ctx->pc = 0x288558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288554u;
    // 0x288558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x288554u, 0x28855Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28855Cu;
label_28855c:
    // 0x28855c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28855cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_288560:
    // 0x288560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288564: 0x3e00008  jr          $ra
    ctx->pc = 0x288564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288564u;
        // 0x288568: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28856Cu;
    // 0x28856c: 0x0  nop
    ctx->pc = 0x28856cu;
    // NOP
    ctx->pc = 0x288570u;
}
