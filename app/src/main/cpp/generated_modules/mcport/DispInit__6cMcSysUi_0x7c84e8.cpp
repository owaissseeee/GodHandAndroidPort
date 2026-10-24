#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
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
void DispInit__6cMcSysUi_0x7c84e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DispInit__6cMcSysUi_0x7c84e8");
#endif

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

    ctx->pc = 0x7c84e8u;

    // 0x7c84e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x7c84e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x7c84ec: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7c84ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7c84f0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x7c84f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x7c84f4: 0x3c06007d  lui         $a2, 0x7D
    ctx->pc = 0x7c84f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)125 << 16));
    // 0x7c84f8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x7c84f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x7c84fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c84fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8500: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x7c8500u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x7c8504: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x7c8504u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8508: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c8508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c850c: 0x24c60f10  addiu       $a2, $a2, 0xF10
    ctx->pc = 0x7c850cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3856));
    // 0x7c8510: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x7c8510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x7c8514: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c8514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c8518: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x7c8518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x7c851c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x7c851cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x7c8520: 0xc0ab3ea  jal         func_2ACFA8
    ctx->pc = 0x7C8520u;
    SET_GPR_U32(ctx, 31, 0x7C8528u);
    ctx->pc = 0x7C8524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8520u;
    // 0x7c8524: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACFA8u, 0x7C8520u, 0x7C8528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8528u;
label_7c8528:
    // 0x7c8528: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c8528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c852c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c852cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8530: 0xc1f20dc  jal         func_7C8370
    ctx->pc = 0x7C8530u;
    SET_GPR_U32(ctx, 31, 0x7C8538u);
    ctx->pc = 0x7C8534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8530u;
    // 0x7c8534: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8370u, 0x7C8530u, 0x7C8538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8538u;
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
    ctx->pc = 0x7C8540u;
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
    ctx->pc = 0x7C8548u;
    // 0x7c8548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c8548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c854c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x7c854cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7c8550: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C8550u;
    SET_GPR_U32(ctx, 31, 0x7C8558u);
    ctx->pc = 0x7C8554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8550u;
    // 0x7c8554: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C8550u, 0x7C8558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8558u;
label_7c8558:
    // 0x7c8558: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c8558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c855c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x7c855cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x7c8560: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C8560u;
    SET_GPR_U32(ctx, 31, 0x7C8568u);
    ctx->pc = 0x7C8564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8560u;
    // 0x7c8564: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C8560u, 0x7C8568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8568u;
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
    ctx->pc = 0x7C8570u;
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
    ctx->pc = 0x7C8578u;
    // 0x7c8578: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x7c8578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7c857c: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C857Cu;
    SET_GPR_U32(ctx, 31, 0x7C8584u);
    ctx->pc = 0x7C8580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C857Cu;
    // 0x7c8580: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C857Cu, 0x7C8584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8584u;
label_7c8584:
    // 0x7c8584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c8584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8588: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x7c8588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x7c858c: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C858Cu;
    SET_GPR_U32(ctx, 31, 0x7C8594u);
    ctx->pc = 0x7C8590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C858Cu;
    // 0x7c8590: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C858Cu, 0x7C8594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8594u;
label_7c8594:
    // 0x7c8594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c8594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7c8598:
    // 0x7c8598: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x7c8598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x7c859c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7c859cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c85a0: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C85A0u;
    SET_GPR_U32(ctx, 31, 0x7C85A8u);
    ctx->pc = 0x7C85A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C85A0u;
    // 0x7c85a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C85A0u, 0x7C85A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C85A8u;
label_7c85a8:
    // 0x7c85a8: 0x26320020  addiu       $s2, $s1, 0x20
    ctx->pc = 0x7c85a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x7c85ac: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x7c85acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_7c85b0:
    // 0x7c85b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x7c85b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c85b4: 0xc1f223a  jal         func_7C88E8
    ctx->pc = 0x7C85B4u;
    SET_GPR_U32(ctx, 31, 0x7C85BCu);
    ctx->pc = 0x7C85B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C85B4u;
    // 0x7c85b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C88E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C88E8u, 0x7C85B4u, 0x7C85BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C85BCu;
label_7c85bc:
    // 0x7c85bc: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x7c85bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x7c85c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c85c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c85c4: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C85C4u;
    SET_GPR_U32(ctx, 31, 0x7C85CCu);
    ctx->pc = 0x7C85C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C85C4u;
    // 0x7c85c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C85C4u, 0x7C85CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C85CCu;
label_7c85cc:
    // 0x7c85cc: 0x26050060  addiu       $a1, $s0, 0x60
    ctx->pc = 0x7c85ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x7c85d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c85d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c85d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7c85d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c85d8: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C85D8u;
    SET_GPR_U32(ctx, 31, 0x7C85E0u);
    ctx->pc = 0x7C85DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C85D8u;
    // 0x7c85dc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C85D8u, 0x7C85E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C85E0u;
label_7c85e0:
    // 0x7c85e0: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x7c85e0u;
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
    ctx->pc = 0x7C85ECu;
    // 0x7c85ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c85ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c85f0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x7c85f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x7c85f4: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C85F4u;
    SET_GPR_U32(ctx, 31, 0x7C85FCu);
    ctx->pc = 0x7C85F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C85F4u;
    // 0x7c85f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C85F4u, 0x7C85FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C85FCu;
label_7c85fc:
    // 0x7c85fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c85fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8600: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x7c8600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7c8604: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C8604u;
    SET_GPR_U32(ctx, 31, 0x7C860Cu);
    ctx->pc = 0x7C8608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8604u;
    // 0x7c8608: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C8604u, 0x7C860Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C860Cu;
label_7c860c:
    // 0x7c860c: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x7C860Cu;
    SET_GPR_U32(ctx, 31, 0x7C8614u);
    ctx->pc = 0x7C8610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C860Cu;
    // 0x7c8610: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x7C860Cu, 0x7C8614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8614u;
label_7c8614:
    // 0x7c8614: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x7c8614u;
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
    ctx->pc = 0x7C8620u;
    // 0x7c8620: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x7c8620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x7c8624: 0x3c0142fa  lui         $at, 0x42FA
    ctx->pc = 0x7c8624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17146 << 16));
    // 0x7c8628: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x7c8628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x7c862c: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C862Cu;
    SET_GPR_U32(ctx, 31, 0x7C8634u);
    ctx->pc = 0x7C8630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C862Cu;
    // 0x7c8630: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C862Cu, 0x7C8634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8634u;
label_7c8634:
    // 0x7c8634: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c8634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8638: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x7c8638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x7c863c: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C863Cu;
    SET_GPR_U32(ctx, 31, 0x7C8644u);
    ctx->pc = 0x7C8640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C863Cu;
    // 0x7c8640: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C863Cu, 0x7C8644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8644u;
label_7c8644:
    // 0x7c8644: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c8644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8648: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x7c8648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x7c864c: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C864Cu;
    SET_GPR_U32(ctx, 31, 0x7C8654u);
    ctx->pc = 0x7C8650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C864Cu;
    // 0x7c8650: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C864Cu, 0x7C8654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8654u;
label_7c8654:
    // 0x7c8654: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c8654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8658: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x7c8658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7c865c: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C865Cu;
    SET_GPR_U32(ctx, 31, 0x7C8664u);
    ctx->pc = 0x7C8660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C865Cu;
    // 0x7c8660: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C865Cu, 0x7C8664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8664u;
label_7c8664:
    // 0x7c8664: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7c8664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8668: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c8668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c866c: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C866Cu;
    SET_GPR_U32(ctx, 31, 0x7C8674u);
    ctx->pc = 0x7C8670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C866Cu;
    // 0x7c8670: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C866Cu, 0x7C8674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8674u;
label_7c8674:
    // 0x7c8674: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7c8674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7c8678: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x7c8678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7c867c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c867cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8680: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x7c8680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
    // 0x7c8684: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x7c8684u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x7c8688: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x7c8688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7c868c: 0xc1f22a6  jal         func_7C8A98
    ctx->pc = 0x7C868Cu;
    SET_GPR_U32(ctx, 31, 0x7C8694u);
    ctx->pc = 0x7C8690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C868Cu;
    // 0x7c8690: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8A98u, 0x7C868Cu, 0x7C8694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8694u;
label_7c8694:
    // 0x7c8694: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c8694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8698: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x7C8698u;
    SET_GPR_U32(ctx, 31, 0x7C86A0u);
    ctx->pc = 0x7C869Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8698u;
    // 0x7c869c: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x7C8698u, 0x7C86A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C86A0u;
label_7c86a0:
    // 0x7c86a0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x7c86a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x7c86a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7c86a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7c86a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c86a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c86ac: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x7c86acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7c86b0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x7c86b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x7c86b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x7c86b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x7c86b8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x7C86B8u;
    SET_GPR_U32(ctx, 31, 0x7C86C0u);
    ctx->pc = 0x7C86BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C86B8u;
    // 0x7c86bc: 0xe440003c  swc1        $f0, 0x3C($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x7C86B8u, 0x7C86C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C86C0u;
label_7c86c0:
    // 0x7c86c0: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x7c86c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x7c86c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7c86c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7c86c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c86c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c86cc: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x7c86ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7c86d0: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x7c86d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x7c86d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x7c86d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x7c86d8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x7C86D8u;
    SET_GPR_U32(ctx, 31, 0x7C86E0u);
    ctx->pc = 0x7C86DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C86D8u;
    // 0x7c86dc: 0xe440003c  swc1        $f0, 0x3C($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x7C86D8u, 0x7C86E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C86E0u;
label_7c86e0:
    // 0x7c86e0: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x7c86e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7c86e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c86e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c86e8: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x7c86e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x7c86ec: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x7c86ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x7c86f0: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x7C86F0u;
    SET_GPR_U32(ctx, 31, 0x7C86F8u);
    ctx->pc = 0x7C86F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C86F0u;
    // 0x7c86f4: 0xe440003c  swc1        $f0, 0x3C($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x7C86F0u, 0x7C86F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C86F8u;
label_7c86f8:
    // 0x7c86f8: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x7c86f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7c86fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c86fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8700: 0x24050055  addiu       $a1, $zero, 0x55
    ctx->pc = 0x7c8700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x7c8704: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x7c8704u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x7c8708: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x7C8708u;
    SET_GPR_U32(ctx, 31, 0x7C8710u);
    ctx->pc = 0x7C870Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8708u;
    // 0x7c870c: 0xe440003c  swc1        $f0, 0x3C($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x7C8708u, 0x7C8710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8710u;
label_7c8710:
    // 0x7c8710: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x7c8710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7c8714: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c8714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8718: 0x24050056  addiu       $a1, $zero, 0x56
    ctx->pc = 0x7c8718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x7c871c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x7c871cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x7c8720: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x7C8720u;
    SET_GPR_U32(ctx, 31, 0x7C8728u);
    ctx->pc = 0x7C8724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8720u;
    // 0x7c8724: 0xe440003c  swc1        $f0, 0x3C($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x7C8720u, 0x7C8728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8728u;
label_7c8728:
    // 0x7c8728: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x7c8728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7c872c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x7c872cu;
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
    ctx->pc = 0x7C8738u;
label_7c8738:
    // 0x7c8738: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x7c8738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7c873c: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C873Cu;
    SET_GPR_U32(ctx, 31, 0x7C8744u);
    ctx->pc = 0x7C8740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C873Cu;
    // 0x7c8740: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C873Cu, 0x7C8744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8744u;
label_7c8744:
    // 0x7c8744: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c8744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8748: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x7c8748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7c874c: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C874Cu;
    SET_GPR_U32(ctx, 31, 0x7C8754u);
    ctx->pc = 0x7C8750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C874Cu;
    // 0x7c8750: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C874Cu, 0x7C8754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8754u;
label_7c8754:
    // 0x7c8754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c8754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8758: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x7c8758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7c875c: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C875Cu;
    SET_GPR_U32(ctx, 31, 0x7C8764u);
    ctx->pc = 0x7C8760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C875Cu;
    // 0x7c8760: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C875Cu, 0x7C8764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8764u;
label_7c8764:
    // 0x7c8764: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c8764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8768: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x7c8768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x7c876c: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C876Cu;
    SET_GPR_U32(ctx, 31, 0x7C8774u);
    ctx->pc = 0x7C8770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C876Cu;
    // 0x7c8770: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C876Cu, 0x7C8774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8774u;
label_7c8774:
    // 0x7c8774: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c8774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8778: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x7c8778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7c877c: 0xc1f21f6  jal         func_7C87D8
    ctx->pc = 0x7C877Cu;
    SET_GPR_U32(ctx, 31, 0x7C8784u);
    ctx->pc = 0x7C8780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C877Cu;
    // 0x7c8780: 0x240620a4  addiu       $a2, $zero, 0x20A4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C87D8u, 0x7C877Cu, 0x7C8784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8784u;
label_7c8784:
    // 0x7c8784: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c8784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8788: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x7c8788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7c878c: 0xc1f21f6  jal         func_7C87D8
    ctx->pc = 0x7C878Cu;
    SET_GPR_U32(ctx, 31, 0x7C8794u);
    ctx->pc = 0x7C8790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C878Cu;
    // 0x7c8790: 0x240620a5  addiu       $a2, $zero, 0x20A5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8357));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C87D8u, 0x7C878Cu, 0x7C8794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8794u;
label_7c8794:
    // 0x7c8794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c8794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8798: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x7c8798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7c879c: 0xc1f21f6  jal         func_7C87D8
    ctx->pc = 0x7C879Cu;
    SET_GPR_U32(ctx, 31, 0x7C87A4u);
    ctx->pc = 0x7C87A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C879Cu;
    // 0x7c87a0: 0x240620a4  addiu       $a2, $zero, 0x20A4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C87D8u, 0x7C879Cu, 0x7C87A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C87A4u;
label_7c87a4:
    // 0x7c87a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c87a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c87a8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x7c87a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x7c87ac: 0xc1f21f6  jal         func_7C87D8
    ctx->pc = 0x7C87ACu;
    SET_GPR_U32(ctx, 31, 0x7C87B4u);
    ctx->pc = 0x7C87B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C87ACu;
    // 0x7c87b0: 0x240620a5  addiu       $a2, $zero, 0x20A5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8357));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C87D8u, 0x7C87ACu, 0x7C87B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C87B4u;
label_7c87b4:
    // 0x7c87b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c87b4u;
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
