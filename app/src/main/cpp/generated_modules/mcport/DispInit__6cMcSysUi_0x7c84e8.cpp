#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: DispInit__6cMcSysUi
// Address: 0x7c84e8 - 0x7c87d8
void DispInit__6cMcSysUi_0x7c84e8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DispInit__6cMcSysUi_0x7c84e8");
#endif

    if (__builtin_expect(ctx->pc != 0x7c84e8u, 0)) {
        switch (ctx->pc) {
            case 0x7c8528u: goto label_7c8528;
            case 0x7c8538u: goto label_7c8538;
            case 0x7c8558u: goto label_7c8558;
            case 0x7c8568u: goto label_7c8568;
            case 0x7c8584u: goto label_7c8584;
            case 0x7c8594u: goto label_7c8594;
            case 0x7c85a8u: goto label_7c85a8;
            case 0x7c85b0u: goto label_7c85b0;
            case 0x7c85bcu: goto label_7c85bc;
            case 0x7c85ccu: goto label_7c85cc;
            case 0x7c85e0u: goto label_7c85e0;
            case 0x7c85fcu: goto label_7c85fc;
            case 0x7c860cu: goto label_7c860c;
            case 0x7c8614u: goto label_7c8614;
            case 0x7c8634u: goto label_7c8634;
            case 0x7c8644u: goto label_7c8644;
            case 0x7c8654u: goto label_7c8654;
            case 0x7c8664u: goto label_7c8664;
            case 0x7c8674u: goto label_7c8674;
            case 0x7c8694u: goto label_7c8694;
            case 0x7c86a0u: goto label_7c86a0;
            case 0x7c86c0u: goto label_7c86c0;
            case 0x7c86e0u: goto label_7c86e0;
            case 0x7c86f8u: goto label_7c86f8;
            case 0x7c8710u: goto label_7c8710;
            case 0x7c8728u: goto label_7c8728;
            case 0x7c8744u: goto label_7c8744;
            case 0x7c8754u: goto label_7c8754;
            case 0x7c8764u: goto label_7c8764;
            case 0x7c8774u: goto label_7c8774;
            case 0x7c8784u: goto label_7c8784;
            case 0x7c8794u: goto label_7c8794;
            case 0x7c87a4u: goto label_7c87a4;
            case 0x7c87b4u: goto label_7c87b4;
            default: break;
        }
    }



    // 0x7c84e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x7c84ec: 0x3c02003c  lui         $v0, 0x3C
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7c84f0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x7c84f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x7c84f4: 0x3c06007d  lui         $a2, 0x7D
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)125 << 16));
    // 0x7c84f8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x7c84f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x7c84fc: 0x80882d  daddu       $s1, $a0, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8500: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x7c8500u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x7c8504: 0xa0982d  daddu       $s3, $a1, $zero
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8508: 0x3a0282d  daddu       $a1, $sp, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c850c: 0x24c60f10  addiu       $a2, $a2, 0xF10
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3856));
    // 0x7c8510: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x7c8510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x7c8514: 0x2407ffff  addiu       $a3, $zero, -0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c8518: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x7c8518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x7c851c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x7c851cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x7c8520: 0xc0ab3ea  jal         func_2ACFA8
    SET_GPR_U32(ctx, 31, 0x7C8528u);
    ctx->pc = 0x7C8524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8520u;
    // 0x7c8524: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACFA8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDManager_getLocalFileName_0x2acfa8, 0x2ACFA8u, 0x7C8528u)) {
        return;
    }
label_7c8528:
    // 0x7c8528: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c852c: 0x3a0282d  daddu       $a1, $sp, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8530: 0xc1f20dc  jal         func_7C8370
    SET_GPR_U32(ctx, 31, 0x7C8538u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8530u;
    // 0x7c8534: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8370u, 0x7C8530u, 0x7C8538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c8538:
    // 0x7c8538: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x7C8538u;
    {
        const bool branch_taken_0x7c8538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8538u;
        // 0x7c853c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8538) {
            ctx->pc = 0x7C87B8u;
            goto label_7c87b8;
        }
    }
    // 0x7c8540: 0x1660000b  bnez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x7C8540u;
    {
        const bool branch_taken_0x7c8540 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C8544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8540u;
        // 0x7c8544: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8540) {
            ctx->pc = 0x7C8570u;
            goto label_7c8570;
        }
    }
    // 0x7c8548: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c854c: 0x2405000a  addiu       $a1, $zero, 0xA
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7c8550: 0xc1f2254  jal         func_7C8950
    SET_GPR_U32(ctx, 31, 0x7C8558u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8550u;
    // 0x7c8554: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C8550u, 0x7C8558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c8558:
    // 0x7c8558: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c855c: 0x2405000b  addiu       $a1, $zero, 0xB
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x7c8560: 0xc1f2254  jal         func_7C8950
    SET_GPR_U32(ctx, 31, 0x7C8568u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8560u;
    // 0x7c8564: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C8560u, 0x7C8568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c8568:
    // 0x7c8568: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x7C8568u;
    {
        const bool branch_taken_0x7c8568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8568u;
        // 0x7c856c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8568) {
            ctx->pc = 0x7C8598u;
            goto label_7c8598;
        }
    }
label_7c8570:
    // 0x7c8570: 0x16620009  bne         $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7C8570u;
    {
        const bool branch_taken_0x7c8570 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C8574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8570u;
        // 0x7c8574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8570) {
            ctx->pc = 0x7C8598u;
            goto label_7c8598;
        }
    }
    // 0x7c8578: 0x2405000a  addiu       $a1, $zero, 0xA
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7c857c: 0xc1f2254  jal         func_7C8950
    SET_GPR_U32(ctx, 31, 0x7C8584u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C857Cu;
    // 0x7c8580: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C857Cu, 0x7C8584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c8584:
    // 0x7c8584: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8588: 0x2405000b  addiu       $a1, $zero, 0xB
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x7c858c: 0xc1f2254  jal         func_7C8950
    SET_GPR_U32(ctx, 31, 0x7C8594u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C858Cu;
    // 0x7c8590: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C858Cu, 0x7C8594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c8594:
    // 0x7c8594: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7c8598:
    // 0x7c8598: 0x2405000c  addiu       $a1, $zero, 0xC
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x7c859c: 0x24060001  addiu       $a2, $zero, 0x1
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c85a0: 0xc1f2254  jal         func_7C8950
    SET_GPR_U32(ctx, 31, 0x7C85A8u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C85A0u;
    // 0x7c85a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C85A0u, 0x7C85A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c85a8:
    // 0x7c85a8: 0x26320020  addiu       $s2, $s1, 0x20
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x7c85ac: 0x26050014  addiu       $a1, $s0, 0x14
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_7c85b0:
    // 0x7c85b0: 0x200302d  daddu       $a2, $s0, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c85b4: 0xc1f223a  jal         func_7C88E8
    SET_GPR_U32(ctx, 31, 0x7C85BCu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C85B4u;
    // 0x7c85b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C88E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C88E8u, 0x7C85B4u, 0x7C85BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c85bc:
    // 0x7c85bc: 0x26050010  addiu       $a1, $s0, 0x10
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x7c85c0: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c85c4: 0xc1f2254  jal         func_7C8950
    SET_GPR_U32(ctx, 31, 0x7C85CCu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C85C4u;
    // 0x7c85c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C85C4u, 0x7C85CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c85cc:
    // 0x7c85cc: 0x26050060  addiu       $a1, $s0, 0x60
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x7c85d0: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c85d4: 0x302d  daddu       $a2, $zero, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c85d8: 0xc1f2254  jal         func_7C8950
    SET_GPR_U32(ctx, 31, 0x7C85E0u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C85D8u;
    // 0x7c85dc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C85D8u, 0x7C85E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c85e0:
    // 0x7c85e0: 0x2a020003  slti        $v0, $s0, 0x3
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x7c85e4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x7C85E4u;
    {
        const bool branch_taken_0x7c85e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C85E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C85E4u;
        // 0x7c85e8: 0x26050014  addiu       $a1, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c85e4) {
            ctx->pc = 0x7C85B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c85b0;
        }
    }
    // 0x7c85ec: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c85f0: 0x2405000d  addiu       $a1, $zero, 0xD
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x7c85f4: 0xc1f2254  jal         func_7C8950
    SET_GPR_U32(ctx, 31, 0x7C85FCu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C85F4u;
    // 0x7c85f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C85F4u, 0x7C85FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c85fc:
    // 0x7c85fc: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8600: 0x24050005  addiu       $a1, $zero, 0x5
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7c8604: 0xc1f2254  jal         func_7C8950
    SET_GPR_U32(ctx, 31, 0x7C860Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8604u;
    // 0x7c8608: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C8604u, 0x7C860Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c860c:
    // 0x7c860c: 0xc0aaefa  jal         func_2ABBE8
    SET_GPR_U32(ctx, 31, 0x7C8614u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C860Cu;
    // 0x7c8610: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_restartAnim_0x2abbe8, 0x2ABBE8u, 0x7C8614u)) {
        return;
    }
label_7c8614:
    // 0x7c8614: 0x24020002  addiu       $v0, $zero, 0x2
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7c8618: 0x16620047  bne         $s3, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x7C8618u;
    {
        const bool branch_taken_0x7c8618 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8618u;
        // 0x7c861c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8618) {
            ctx->pc = 0x7C8738u;
            goto label_7c8738;
        }
    }
    // 0x7c8620: 0x2405000c  addiu       $a1, $zero, 0xC
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x7c8624: 0x3c0142fa  lui         $at, 0x42FA
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17146 << 16));
    // 0x7c8628: 0x4481a000  mtc1        $at, $f20
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x7c862c: 0xc1f2254  jal         func_7C8950
    SET_GPR_U32(ctx, 31, 0x7C8634u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C862Cu;
    // 0x7c8630: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C862Cu, 0x7C8634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c8634:
    // 0x7c8634: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8638: 0x2405000d  addiu       $a1, $zero, 0xD
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x7c863c: 0xc1f2254  jal         func_7C8950
    SET_GPR_U32(ctx, 31, 0x7C8644u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C863Cu;
    // 0x7c8640: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C863Cu, 0x7C8644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c8644:
    // 0x7c8644: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8648: 0x2405000e  addiu       $a1, $zero, 0xE
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x7c864c: 0xc1f2254  jal         func_7C8950
    SET_GPR_U32(ctx, 31, 0x7C8654u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C864Cu;
    // 0x7c8650: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C864Cu, 0x7C8654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c8654:
    // 0x7c8654: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8658: 0x2405000a  addiu       $a1, $zero, 0xA
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7c865c: 0xc1f2254  jal         func_7C8950
    SET_GPR_U32(ctx, 31, 0x7C8664u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C865Cu;
    // 0x7c8660: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C865Cu, 0x7C8664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c8664:
    // 0x7c8664: 0x302d  daddu       $a2, $zero, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8668: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c866c: 0xc1f2254  jal         func_7C8950
    SET_GPR_U32(ctx, 31, 0x7C8674u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C866Cu;
    // 0x7c8670: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C866Cu, 0x7C8674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c8674:
    // 0x7c8674: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7c8678: 0x44816000  mtc1        $at, $f12
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7c867c: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8680: 0x3c013fb3  lui         $at, 0x3FB3
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
    // 0x7c8684: 0x34213333  ori         $at, $at, 0x3333
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x7c8688: 0x44816800  mtc1        $at, $f13
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7c868c: 0xc1f22a6  jal         func_7C8A98
    SET_GPR_U32(ctx, 31, 0x7C8694u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C868Cu;
    // 0x7c8690: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8A98u, 0x7C868Cu, 0x7C8694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c8694:
    // 0x7c8694: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8698: 0xc0aa904  jal         func_2AA410
    SET_GPR_U32(ctx, 31, 0x7C86A0u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8698u;
    // 0x7c869c: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_getIDWork_0x2aa410, 0x2AA410u, 0x7C86A0u)) {
        return;
    }
label_7c86a0:
    // 0x7c86a0: 0x3c0142c8  lui         $at, 0x42C8
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x7c86a4: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7c86a8: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c86ac: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x7c86acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7c86b0: 0x24050041  addiu       $a1, $zero, 0x41
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x7c86b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x7c86b8: 0xc0aa904  jal         func_2AA410
    SET_GPR_U32(ctx, 31, 0x7C86C0u);
    ctx->pc = 0x7C86BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C86B8u;
    // 0x7c86bc: 0xe440003c  swc1        $f0, 0x3C($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_getIDWork_0x2aa410, 0x2AA410u, 0x7C86C0u)) {
        return;
    }
label_7c86c0:
    // 0x7c86c0: 0x3c0142a0  lui         $at, 0x42A0
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x7c86c4: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7c86c8: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c86cc: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x7c86ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7c86d0: 0x24050051  addiu       $a1, $zero, 0x51
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x7c86d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x7c86d8: 0xc0aa904  jal         func_2AA410
    SET_GPR_U32(ctx, 31, 0x7C86E0u);
    ctx->pc = 0x7C86DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C86D8u;
    // 0x7c86dc: 0xe440003c  swc1        $f0, 0x3C($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_getIDWork_0x2aa410, 0x2AA410u, 0x7C86E0u)) {
        return;
    }
label_7c86e0:
    // 0x7c86e0: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x7c86e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7c86e4: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c86e8: 0x24050052  addiu       $a1, $zero, 0x52
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x7c86ec: 0x46140000  add.s       $f0, $f0, $f20
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x7c86f0: 0xc0aa904  jal         func_2AA410
    SET_GPR_U32(ctx, 31, 0x7C86F8u);
    ctx->pc = 0x7C86F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C86F0u;
    // 0x7c86f4: 0xe440003c  swc1        $f0, 0x3C($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_getIDWork_0x2aa410, 0x2AA410u, 0x7C86F8u)) {
        return;
    }
label_7c86f8:
    // 0x7c86f8: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x7c86f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7c86fc: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8700: 0x24050055  addiu       $a1, $zero, 0x55
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x7c8704: 0x46140000  add.s       $f0, $f0, $f20
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x7c8708: 0xc0aa904  jal         func_2AA410
    SET_GPR_U32(ctx, 31, 0x7C8710u);
    ctx->pc = 0x7C870Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8708u;
    // 0x7c870c: 0xe440003c  swc1        $f0, 0x3C($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_getIDWork_0x2aa410, 0x2AA410u, 0x7C8710u)) {
        return;
    }
label_7c8710:
    // 0x7c8710: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x7c8710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7c8714: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8718: 0x24050056  addiu       $a1, $zero, 0x56
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x7c871c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x7c8720: 0xc0aa904  jal         func_2AA410
    SET_GPR_U32(ctx, 31, 0x7C8728u);
    ctx->pc = 0x7C8724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8720u;
    // 0x7c8724: 0xe440003c  swc1        $f0, 0x3C($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_getIDWork_0x2aa410, 0x2AA410u, 0x7C8728u)) {
        return;
    }
label_7c8728:
    // 0x7c8728: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x7c8728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7c872c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x7c8730: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x7C8730u;
    {
        const bool branch_taken_0x7c8730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C8734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8730u;
        // 0x7c8734: 0xe440003c  swc1        $f0, 0x3C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8730) {
            ctx->pc = 0x7C87B4u;
            goto label_7c87b4;
        }
    }
label_7c8738:
    // 0x7c8738: 0x24050002  addiu       $a1, $zero, 0x2
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7c873c: 0xc1f2254  jal         func_7C8950
    SET_GPR_U32(ctx, 31, 0x7C8744u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C873Cu;
    // 0x7c8740: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C873Cu, 0x7C8744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c8744:
    // 0x7c8744: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8748: 0x24050003  addiu       $a1, $zero, 0x3
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7c874c: 0xc1f2254  jal         func_7C8950
    SET_GPR_U32(ctx, 31, 0x7C8754u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C874Cu;
    // 0x7c8750: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C874Cu, 0x7C8754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c8754:
    // 0x7c8754: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8758: 0x24050004  addiu       $a1, $zero, 0x4
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7c875c: 0xc1f2254  jal         func_7C8950
    SET_GPR_U32(ctx, 31, 0x7C8764u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C875Cu;
    // 0x7c8760: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C875Cu, 0x7C8764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c8764:
    // 0x7c8764: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8768: 0x24050009  addiu       $a1, $zero, 0x9
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x7c876c: 0xc1f2254  jal         func_7C8950
    SET_GPR_U32(ctx, 31, 0x7C8774u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C876Cu;
    // 0x7c8770: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C876Cu, 0x7C8774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c8774:
    // 0x7c8774: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8778: 0x24050002  addiu       $a1, $zero, 0x2
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7c877c: 0xc1f21f6  jal         func_7C87D8
    SET_GPR_U32(ctx, 31, 0x7C8784u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C877Cu;
    // 0x7c8780: 0x240620a4  addiu       $a2, $zero, 0x20A4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C87D8u, 0x7C877Cu, 0x7C8784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c8784:
    // 0x7c8784: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8788: 0x24050003  addiu       $a1, $zero, 0x3
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7c878c: 0xc1f21f6  jal         func_7C87D8
    SET_GPR_U32(ctx, 31, 0x7C8794u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C878Cu;
    // 0x7c8790: 0x240620a5  addiu       $a2, $zero, 0x20A5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8357));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C87D8u, 0x7C878Cu, 0x7C8794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c8794:
    // 0x7c8794: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8798: 0x24050004  addiu       $a1, $zero, 0x4
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7c879c: 0xc1f21f6  jal         func_7C87D8
    SET_GPR_U32(ctx, 31, 0x7C87A4u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C879Cu;
    // 0x7c87a0: 0x240620a4  addiu       $a2, $zero, 0x20A4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C87D8u, 0x7C879Cu, 0x7C87A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c87a4:
    // 0x7c87a4: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c87a8: 0x24050009  addiu       $a1, $zero, 0x9
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x7c87ac: 0xc1f21f6  jal         func_7C87D8
    SET_GPR_U32(ctx, 31, 0x7C87B4u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C87ACu;
    // 0x7c87b0: 0x240620a5  addiu       $a2, $zero, 0x20A5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8357));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C87D8u, 0x7C87ACu, 0x7C87B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c87b4:
    // 0x7c87b4: 0x24020001  addiu       $v0, $zero, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7c87b8:
    // 0x7c87b8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x7c87b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7c87bc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x7c87bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7c87c0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x7c87c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7c87c4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x7c87c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7c87c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x7c87c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7c87cc: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x7c87ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x7c87d0: 0x3e00008  jr          $ra
    ctx->pc = 0x7C87D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C87D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C87D0u;
        // 0x7c87d4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C87D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C87D8u;
}
} // namespace gh_mcport
