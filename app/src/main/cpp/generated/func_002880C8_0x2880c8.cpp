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

// Function: func_002880C8
// Address: 0x2880c8 - 0x288178
void func_002880C8_0x2880c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002880C8_0x2880c8");
#endif

    switch (ctx->pc) {
        case 0x28810cu: goto label_28810c;
        case 0x288154u: goto label_288154;
        case 0x288168u: goto label_288168;
        default: break;
    }

    ctx->pc = 0x2880c8u;

    // 0x2880c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2880c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2880cc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2880ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2880d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2880d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2880d4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2880d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x2880d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2880d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2880dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2880dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2880e0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2880e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2880e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2880e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2880e8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2880e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2880ec: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x2880ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x2880f0: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x2880f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x2880f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2880f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2880f8: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x2880f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x2880fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2880fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x288100: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x288100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288104: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x288104u;
    SET_GPR_U32(ctx, 31, 0x28810Cu);
    ctx->pc = 0x288108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288104u;
    // 0x288108: 0xae0315b0  sw          $v1, 0x15B0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x288104u, 0x28810Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28810Cu;
label_28810c:
    // 0x28810c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x28810cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x288110: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x288110u;
    {
        const bool branch_taken_0x288110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x288114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288110u;
        // 0x288114: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288110) {
            ctx->pc = 0x288128u;
            goto label_288128;
        }
    }
    ctx->pc = 0x288118u;
    // 0x288118: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x288118u;
    {
        const bool branch_taken_0x288118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x288118) {
            ctx->pc = 0x288160u;
            goto label_288160;
        }
    }
    ctx->pc = 0x288120u;
    // 0x288120: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x288120u;
    {
        const bool branch_taken_0x288120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288120u;
        // 0x288124: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288120) {
            ctx->pc = 0x28816Cu;
            goto label_28816c;
        }
    }
    ctx->pc = 0x288128u;
label_288128:
    // 0x288128: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x288128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28812c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28812cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288130: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x288130u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x288134: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x288134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x288138: 0x8c450168  lw          $a1, 0x168($v0)
    ctx->pc = 0x288138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 360)));
    // 0x28813c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28813cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288140: 0x8c46016c  lw          $a2, 0x16C($v0)
    ctx->pc = 0x288140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 364)));
    // 0x288144: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x288144u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288148: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x288148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28814c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x28814Cu;
    SET_GPR_U32(ctx, 31, 0x288154u);
    ctx->pc = 0x288150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28814Cu;
    // 0x288150: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x28814Cu, 0x288154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288154u;
label_288154:
    // 0x288154: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x288154u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x288158: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x288158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28815c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x28815cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_288160:
    // 0x288160: 0xc055f06  jal         func_157C18
    ctx->pc = 0x288160u;
    SET_GPR_U32(ctx, 31, 0x288168u);
    ctx->pc = 0x288164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288160u;
    // 0x288164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x288160u, 0x288168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288168u;
label_288168:
    // 0x288168: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x288168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28816c:
    // 0x28816c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28816cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288170: 0x3e00008  jr          $ra
    ctx->pc = 0x288170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288170u;
        // 0x288174: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288178u;
}
