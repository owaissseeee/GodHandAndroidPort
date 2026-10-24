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

// Function: func_001851C0
// Address: 0x1851c0 - 0x1852e8
void func_001851C0_0x1851c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001851C0_0x1851c0");
#endif

    switch (ctx->pc) {
        case 0x1851e4u: goto label_1851e4;
        case 0x1851f4u: goto label_1851f4;
        case 0x18521cu: goto label_18521c;
        case 0x185230u: goto label_185230;
        case 0x18523cu: goto label_18523c;
        case 0x185248u: goto label_185248;
        case 0x185254u: goto label_185254;
        case 0x185264u: goto label_185264;
        case 0x185284u: goto label_185284;
        case 0x1852b0u: goto label_1852b0;
        case 0x1852d4u: goto label_1852d4;
        default: break;
    }

    ctx->pc = 0x1851c0u;

    // 0x1851c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1851c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1851c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1851c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1851c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1851c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1851cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1851ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1851d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1851d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1851d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1851d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1851d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1851d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1851dc: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1851DCu;
    SET_GPR_U32(ctx, 31, 0x1851E4u);
    ctx->pc = 0x1851E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1851DCu;
    // 0x1851e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1851DCu, 0x1851E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1851E4u;
label_1851e4:
    // 0x1851e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1851e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1851e8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1851e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1851ec: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1851ECu;
    SET_GPR_U32(ctx, 31, 0x1851F4u);
    ctx->pc = 0x1851F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1851ECu;
    // 0x1851f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1851ECu, 0x1851F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1851F4u;
label_1851f4:
    // 0x1851f4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1851F4u;
    {
        const bool branch_taken_0x1851f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1851F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1851F4u;
        // 0x1851f8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1851f4) {
            ctx->pc = 0x18520Cu;
            goto label_18520c;
        }
    }
    ctx->pc = 0x1851FCu;
    // 0x1851fc: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1851FCu;
    {
        const bool branch_taken_0x1851fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x185200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1851FCu;
        // 0x185200: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1851fc) {
            ctx->pc = 0x185224u;
            goto label_185224;
        }
    }
    ctx->pc = 0x185204u;
    // 0x185204: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x185204u;
    {
        const bool branch_taken_0x185204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185204u;
        // 0x185208: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185204) {
            ctx->pc = 0x1852DCu;
            goto label_1852dc;
        }
    }
    ctx->pc = 0x18520Cu;
label_18520c:
    // 0x18520c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18520cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185210: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185214: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185214u;
    SET_GPR_U32(ctx, 31, 0x18521Cu);
    ctx->pc = 0x185218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185214u;
    // 0x185218: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185214u, 0x18521Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18521Cu;
label_18521c:
    // 0x18521c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x18521Cu;
    {
        const bool branch_taken_0x18521c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18521Cu;
        // 0x185220: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18521c) {
            ctx->pc = 0x1852D8u;
            goto label_1852d8;
        }
    }
    ctx->pc = 0x185224u;
label_185224:
    // 0x185224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185228: 0xc06180e  jal         func_186038
    ctx->pc = 0x185228u;
    SET_GPR_U32(ctx, 31, 0x185230u);
    ctx->pc = 0x18522Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185228u;
    // 0x18522c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186038u, 0x185228u, 0x185230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185230u;
label_185230:
    // 0x185230: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185234: 0xc06180e  jal         func_186038
    ctx->pc = 0x185234u;
    SET_GPR_U32(ctx, 31, 0x18523Cu);
    ctx->pc = 0x185238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185234u;
    // 0x185238: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186038u, 0x185234u, 0x18523Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18523Cu;
label_18523c:
    // 0x18523c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18523cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185240: 0xc06180e  jal         func_186038
    ctx->pc = 0x185240u;
    SET_GPR_U32(ctx, 31, 0x185248u);
    ctx->pc = 0x185244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185240u;
    // 0x185244: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186038u, 0x185240u, 0x185248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185248u;
label_185248:
    // 0x185248: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18524c: 0xc06180e  jal         func_186038
    ctx->pc = 0x18524Cu;
    SET_GPR_U32(ctx, 31, 0x185254u);
    ctx->pc = 0x185250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18524Cu;
    // 0x185250: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186038u, 0x18524Cu, 0x185254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185254u;
label_185254:
    // 0x185254: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185258: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x185258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x18525c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x18525Cu;
    SET_GPR_U32(ctx, 31, 0x185264u);
    ctx->pc = 0x185260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18525Cu;
    // 0x185260: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x18525Cu, 0x185264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185264u;
label_185264:
    // 0x185264: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x185264u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x185268: 0x24040298  addiu       $a0, $zero, 0x298
    ctx->pc = 0x185268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
    // 0x18526c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18526cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185270: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x185270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185274: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x185274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185278: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x185278u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18527c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x18527Cu;
    SET_GPR_U32(ctx, 31, 0x185284u);
    ctx->pc = 0x185280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18527Cu;
    // 0x185280: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x18527Cu, 0x185284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185284u;
label_185284:
    // 0x185284: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x185284u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x185288: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x185288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18528c: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x18528cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x185290: 0x24060116  addiu       $a2, $zero, 0x116
    ctx->pc = 0x185290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x185294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185298: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x185298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18529c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18529cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1852a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1852a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1852a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1852a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1852a8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1852A8u;
    SET_GPR_U32(ctx, 31, 0x1852B0u);
    ctx->pc = 0x1852ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1852A8u;
    // 0x1852ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1852A8u, 0x1852B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1852B0u;
label_1852b0:
    // 0x1852b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1852b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1852b4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1852b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1852b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1852b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1852bc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1852bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1852c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1852c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1852c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1852c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1852c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1852c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1852cc: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1852CCu;
    SET_GPR_U32(ctx, 31, 0x1852D4u);
    ctx->pc = 0x1852D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1852CCu;
    // 0x1852d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1852CCu, 0x1852D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1852D4u;
label_1852d4:
    // 0x1852d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1852d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1852d8:
    // 0x1852d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1852d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1852dc:
    // 0x1852dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1852dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1852e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1852E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1852E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1852E0u;
        // 0x1852e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1852E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1852E8u;
}
