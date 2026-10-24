#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: result__10CannonGame
// Address: 0x79d880 - 0x79df68
void result__10CannonGame_0x79d880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("result__10CannonGame_0x79d880");
#endif

    switch (ctx->pc) {
        case 0x79d91cu: goto label_79d91c;
        case 0x79d940u: goto label_79d940;
        case 0x79d964u: goto label_79d964;
        case 0x79d988u: goto label_79d988;
        case 0x79d9d8u: goto label_79d9d8;
        case 0x79de8cu: goto label_79de8c;
        case 0x79dea0u: goto label_79dea0;
        case 0x79dea8u: goto label_79dea8;
        case 0x79debcu: goto label_79debc;
        case 0x79ded8u: goto label_79ded8;
        case 0x79dee8u: goto label_79dee8;
        case 0x79df24u: goto label_79df24;
        case 0x79df38u: goto label_79df38;
        default: break;
    }

    ctx->pc = 0x79d880u;

    // 0x79d880: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x79d880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x79d884: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x79d884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x79d888: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x79d888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x79d88c: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x79d88cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x79d890: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x79d890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x79d894: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x79d894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x79d898: 0x24519b70  addiu       $s1, $v0, -0x6490
    ctx->pc = 0x79d898u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x79d89c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x79d89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x79d8a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x79d8a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d8a4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x79d8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x79d8a8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x79d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x79d8ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x79d8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x79d8b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79d8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d8b4: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x79d8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x79d8b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x79d8b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d8bc: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x79d8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x79d8c0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x79d8c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d8c4: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x79d8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x79d8c8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x79d8c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d8cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79d8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79d8d0: 0x8e450074  lw          $a1, 0x74($s2)
    ctx->pc = 0x79d8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x79d8d4: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x79d8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x79d8d8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x79d8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x79d8dc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x79d8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x79d8e0: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x79d8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x79d8e4: 0x8e460068  lw          $a2, 0x68($s2)
    ctx->pc = 0x79d8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x79d8e8: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x79d8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x79d8ec: 0x8cc20060  lw          $v0, 0x60($a2)
    ctx->pc = 0x79d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x79d8f0: 0x8c650094  lw          $a1, 0x94($v1)
    ctx->pc = 0x79d8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x79d8f4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x79d8f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x79d8f8: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x79d8f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x79d8fc: 0x38540001  xori        $s4, $v0, 0x1
    ctx->pc = 0x79d8fcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x79d900: 0x3280b  movn        $a1, $zero, $v1
    ctx->pc = 0x79d900u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x79d904: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x79d904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79d908: 0x28a3000f  slti        $v1, $a1, 0xF
    ctx->pc = 0x79d908u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x79d90c: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x79d90cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x79d910: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x79d910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x79d914: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x79D914u;
    SET_GPR_U32(ctx, 31, 0x79D91Cu);
    ctx->pc = 0x79D918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D914u;
    // 0x79d918: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x79D914u, 0x79D91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D91Cu;
label_79d91c:
    // 0x79d91c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x79d91cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x79d920: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79D920u;
    {
        const bool branch_taken_0x79d920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79d920) {
            ctx->pc = 0x79D938u;
            goto label_79d938;
        }
    }
    ctx->pc = 0x79D928u;
    // 0x79d928: 0x24160064  addiu       $s6, $zero, 0x64
    ctx->pc = 0x79d928u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x79d92c: 0x241307d0  addiu       $s3, $zero, 0x7D0
    ctx->pc = 0x79d92cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x79d930: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x79D930u;
    {
        const bool branch_taken_0x79d930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D930u;
        // 0x79d934: 0x241503e8  addiu       $s5, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d930) {
            ctx->pc = 0x79D9A0u;
            goto label_79d9a0;
        }
    }
    ctx->pc = 0x79D938u;
label_79d938:
    // 0x79d938: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x79D938u;
    SET_GPR_U32(ctx, 31, 0x79D940u);
    ctx->pc = 0x79D93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D938u;
    // 0x79d93c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x79D938u, 0x79D940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D940u;
label_79d940:
    // 0x79d940: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x79d940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79d944: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x79D944u;
    {
        const bool branch_taken_0x79d944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x79d944) {
            ctx->pc = 0x79D95Cu;
            goto label_79d95c;
        }
    }
    ctx->pc = 0x79D94Cu;
    // 0x79d94c: 0x24160064  addiu       $s6, $zero, 0x64
    ctx->pc = 0x79d94cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x79d950: 0x24130fa0  addiu       $s3, $zero, 0xFA0
    ctx->pc = 0x79d950u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    // 0x79d954: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x79D954u;
    {
        const bool branch_taken_0x79d954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D954u;
        // 0x79d958: 0x241507d0  addiu       $s5, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d954) {
            ctx->pc = 0x79D9A0u;
            goto label_79d9a0;
        }
    }
    ctx->pc = 0x79D95Cu;
label_79d95c:
    // 0x79d95c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x79D95Cu;
    SET_GPR_U32(ctx, 31, 0x79D964u);
    ctx->pc = 0x79D960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D95Cu;
    // 0x79d960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x79D95Cu, 0x79D964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D964u;
label_79d964:
    // 0x79d964: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x79d964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79d968: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x79D968u;
    {
        const bool branch_taken_0x79d968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x79d968) {
            ctx->pc = 0x79D980u;
            goto label_79d980;
        }
    }
    ctx->pc = 0x79D970u;
    // 0x79d970: 0x24160064  addiu       $s6, $zero, 0x64
    ctx->pc = 0x79d970u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x79d974: 0x24132710  addiu       $s3, $zero, 0x2710
    ctx->pc = 0x79d974u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x79d978: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x79D978u;
    {
        const bool branch_taken_0x79d978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D978u;
        // 0x79d97c: 0x24151388  addiu       $s5, $zero, 0x1388 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d978) {
            ctx->pc = 0x79D9A0u;
            goto label_79d9a0;
        }
    }
    ctx->pc = 0x79D980u;
label_79d980:
    // 0x79d980: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x79D980u;
    SET_GPR_U32(ctx, 31, 0x79D988u);
    ctx->pc = 0x79D984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D980u;
    // 0x79d984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x79D980u, 0x79D988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D988u;
label_79d988:
    // 0x79d988: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x79d988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x79d98c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79D98Cu;
    {
        const bool branch_taken_0x79d98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D98Cu;
        // 0x79d990: 0x274f018  mult        $fp, $s3, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d98c) {
            ctx->pc = 0x79D9A4u;
            goto label_79d9a4;
        }
    }
    ctx->pc = 0x79D994u;
    // 0x79d994: 0x2416012c  addiu       $s6, $zero, 0x12C
    ctx->pc = 0x79d994u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x79d998: 0x24134e20  addiu       $s3, $zero, 0x4E20
    ctx->pc = 0x79d998u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
    // 0x79d99c: 0x24152710  addiu       $s5, $zero, 0x2710
    ctx->pc = 0x79d99cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_79d9a0:
    // 0x79d9a0: 0x274f018  mult        $fp, $s3, $s4
    ctx->pc = 0x79d9a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_79d9a4:
    // 0x79d9a4: 0x2d01018  mult        $v0, $s6, $s0
    ctx->pc = 0x79d9a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x79d9a8: 0x8e440064  lw          $a0, 0x64($s2)
    ctx->pc = 0x79d9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x79d9ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x79d9acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d9b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79d9b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d9b4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x79d9b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d9b8: 0x9083009a  lbu         $v1, 0x9A($a0)
    ctx->pc = 0x79d9b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 154)));
    // 0x79d9bc: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x79d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x79d9c0: 0x38640001  xori        $a0, $v1, 0x1
    ctx->pc = 0x79d9c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x79d9c4: 0x3a80a  movz        $s5, $zero, $v1
    ctx->pc = 0x79d9c4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
    // 0x79d9c8: 0x55a021  addu        $s4, $v0, $s5
    ctx->pc = 0x79d9c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x79d9cc: 0x2c900001  sltiu       $s0, $a0, 0x1
    ctx->pc = 0x79d9ccu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x79d9d0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79d9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x79d9d4: 0x0  nop
    ctx->pc = 0x79d9d4u;
    // NOP
label_79d9d8:
    // 0x79d9d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79d9d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d9dc: 0x246274a0  addiu       $v0, $v1, 0x74A0
    ctx->pc = 0x79d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x79d9e0: 0x2e040014  sltiu       $a0, $s0, 0x14
    ctx->pc = 0x79d9e0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x79d9e4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x79d9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x79d9e8: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x79d9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x79d9ec: 0x10800128  beqz        $a0, . + 4 + (0x128 << 2)
    ctx->pc = 0x79D9ECu;
    {
        const bool branch_taken_0x79d9ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D9ECu;
        // 0x79d9f0: 0x3282b  sltu        $a1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d9ec) {
            ctx->pc = 0x79DE90u;
            goto label_79de90;
        }
    }
    ctx->pc = 0x79D9F4u;
    // 0x79d9f4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79d9f8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x79d9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x79d9fc: 0x24420890  addiu       $v0, $v0, 0x890
    ctx->pc = 0x79d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2192));
    // 0x79da00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79da00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79da04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79da04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79da08: 0x800008  jr          $a0
    ctx->pc = 0x79DA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79DA10u: goto label_79da10;
            case 0x79DA34u: goto label_79da34;
            case 0x79DA78u: goto label_79da78;
            case 0x79DA84u: goto label_79da84;
            case 0x79DB00u: goto label_79db00;
            case 0x79DBE0u: goto label_79dbe0;
            case 0x79DBFCu: goto label_79dbfc;
            case 0x79DC6Cu: goto label_79dc6c;
            case 0x79DCACu: goto label_79dcac;
            case 0x79DCB4u: goto label_79dcb4;
            case 0x79DCC0u: goto label_79dcc0;
            case 0x79DD00u: goto label_79dd00;
            case 0x79DD50u: goto label_79dd50;
            case 0x79DD58u: goto label_79dd58;
            case 0x79DD64u: goto label_79dd64;
            case 0x79DDA0u: goto label_79dda0;
            case 0x79DDB4u: goto label_79ddb4;
            case 0x79DDF4u: goto label_79ddf4;
            case 0x79DE44u: goto label_79de44;
            case 0x79DE4Cu: goto label_79de4c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79DA08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79DA10u;
label_79da10:
    // 0x79da10: 0x8e4400c8  lw          $a0, 0xC8($s2)
    ctx->pc = 0x79da10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
    // 0x79da14: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x79da14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x79da18: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79da18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79da1c: 0x2411003c  addiu       $s1, $zero, 0x3C
    ctx->pc = 0x79da1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x79da20: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x79da20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x79da24: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x79da24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79da28: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x79da28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79da2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79da2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79da30: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x79da30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
label_79da34:
    // 0x79da34: 0x24020055  addiu       $v0, $zero, 0x55
    ctx->pc = 0x79da34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x79da38: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x79da38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x79da3c: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x79da3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x79da40: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x79da40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79da44: 0x50a30001  beql        $a1, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x79DA44u;
    {
        const bool branch_taken_0x79da44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x79da44) {
            ctx->pc = 0x79DA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79DA44u;
            // 0x79da48: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79DA4Cu;
            goto label_79da4c;
        }
    }
    ctx->pc = 0x79DA4Cu;
label_79da4c:
    // 0x79da4c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79da4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x79da50: 0x8e4600c8  lw          $a2, 0xC8($s2)
    ctx->pc = 0x79da50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
    // 0x79da54: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x79da54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x79da58: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x79da58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79da5c: 0x24420780  addiu       $v0, $v0, 0x780
    ctx->pc = 0x79da5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1920));
    // 0x79da60: 0x83800a  movz        $s0, $a0, $v1
    ctx->pc = 0x79da60u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x79da64: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x79da64u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x79da68: 0x1012  mflo        $v0
    ctx->pc = 0x79da68u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x79da6c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x79da6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79da70: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x79DA70u;
    {
        const bool branch_taken_0x79da70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DA70u;
        // 0x79da74: 0xa0d3004f  sb          $s3, 0x4F($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 79), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79da70) {
            ctx->pc = 0x79DE90u;
            goto label_79de90;
        }
    }
    ctx->pc = 0x79DA78u;
label_79da78:
    // 0x79da78: 0x2411003c  addiu       $s1, $zero, 0x3C
    ctx->pc = 0x79da78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x79da7c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x79da7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79da80: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x79da80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_79da84:
    // 0x79da84: 0x26730006  addiu       $s3, $s3, 0x6
    ctx->pc = 0x79da84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
    // 0x79da88: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x79da88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
    // 0x79da8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79da8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79da90: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x79da90u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79da94: 0x0  nop
    ctx->pc = 0x79da94u;
    // NOP
    // 0x79da98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x79da98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x79da9c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x79da9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x79daa0: 0xb31023  subu        $v0, $a1, $s3
    ctx->pc = 0x79daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x79daa4: 0x26470090  addiu       $a3, $s2, 0x90
    ctx->pc = 0x79daa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x79daa8: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x79daa8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x79daac: 0x8ce60038  lw          $a2, 0x38($a3)
    ctx->pc = 0x79daacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x79dab0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x79dab0u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x79dab4: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x79dab4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x79dab8: 0x28430080  slti        $v1, $v0, 0x80
    ctx->pc = 0x79dab8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x79dabc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79dabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79dac0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79dac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79dac4: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x79dac4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x79dac8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79dac8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x79dacc: 0xa0c2004f  sb          $v0, 0x4F($a2)
    ctx->pc = 0x79daccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x79dad0: 0x8ce30038  lw          $v1, 0x38($a3)
    ctx->pc = 0x79dad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x79dad4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x79dad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x79dad8: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x79dad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x79dadc: 0x1e2000ec  bgtz        $s1, . + 4 + (0xEC << 2)
    ctx->pc = 0x79DADCu;
    {
        const bool branch_taken_0x79dadc = (GPR_S64(ctx, 17) > 0);
        ctx->pc = 0x79DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DADCu;
        // 0x79dae0: 0xe4600044  swc1        $f0, 0x44($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79dadc) {
            ctx->pc = 0x79DE90u;
            goto label_79de90;
        }
    }
    ctx->pc = 0x79DAE4u;
    // 0x79dae4: 0x8ce40038  lw          $a0, 0x38($a3)
    ctx->pc = 0x79dae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x79dae8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x79dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x79daec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x79daecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79daf0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x79daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x79daf4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79daf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79daf8: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x79DAF8u;
    {
        const bool branch_taken_0x79daf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79DAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DAF8u;
        // 0x79dafc: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79daf8) {
            ctx->pc = 0x79DE90u;
            goto label_79de90;
        }
    }
    ctx->pc = 0x79DB00u;
label_79db00:
    // 0x79db00: 0x8e470090  lw          $a3, 0x90($s2)
    ctx->pc = 0x79db00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x79db04: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x79db04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x79db08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79db08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79db0c: 0x26450090  addiu       $a1, $s2, 0x90
    ctx->pc = 0x79db0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x79db10: 0x8ce2002c  lw          $v0, 0x2C($a3)
    ctx->pc = 0x79db10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x79db14: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x79db14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x79db18: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x79db18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79db1c: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x79db1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79db20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79db20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79db24: 0xace2002c  sw          $v0, 0x2C($a3)
    ctx->pc = 0x79db24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 2));
    // 0x79db28: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x79db28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79db2c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x79db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x79db30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79db30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79db34: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x79db34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x79db38: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x79db38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79db3c: 0xa060004f  sb          $zero, 0x4F($v1)
    ctx->pc = 0x79db3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 79), (uint8_t)GPR_U32(ctx, 0));
    // 0x79db40: 0x8ca40028  lw          $a0, 0x28($a1)
    ctx->pc = 0x79db40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x79db44: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x79db44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x79db48: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79db48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79db4c: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x79db4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x79db50: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x79db50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x79db54: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x79db54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x79db58: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79db58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79db5c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x79db5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x79db60: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x79db60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x79db64: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x79db64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x79db68: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79db68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79db6c: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x79db6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x79db70: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x79db70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x79db74: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x79db74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x79db78: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79db78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79db7c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x79db7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x79db80: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x79db80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x79db84: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x79db84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x79db88: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79db88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79db8c: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x79db8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x79db90: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x79db90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x79db94: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x79db94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x79db98: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79db98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79db9c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x79db9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x79dba0: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x79dba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x79dba4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x79dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x79dba8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79dba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79dbac: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x79dbacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x79dbb0: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x79dbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x79dbb4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x79dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x79dbb8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79dbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79dbbc: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x79dbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x79dbc0: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x79dbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x79dbc4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x79dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x79dbc8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79dbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79dbcc: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x79dbccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x79dbd0: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x79dbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x79dbd4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x79dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x79dbd8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79dbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79dbdc: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x79dbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_79dbe0:
    // 0x79dbe0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x79dbe0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x79dbe4: 0x8e440094  lw          $a0, 0x94($s2)
    ctx->pc = 0x79dbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x79dbe8: 0x2a630080  slti        $v1, $s3, 0x80
    ctx->pc = 0x79dbe8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x79dbec: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x79dbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79dbf0: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x79dbf0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x79dbf4: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x79DBF4u;
    {
        const bool branch_taken_0x79dbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79DBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DBF4u;
        // 0x79dbf8: 0xa093004f  sb          $s3, 0x4F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79dbf4) {
            ctx->pc = 0x79DE90u;
            goto label_79de90;
        }
    }
    ctx->pc = 0x79DBFCu;
label_79dbfc:
    // 0x79dbfc: 0x26460090  addiu       $a2, $s2, 0x90
    ctx->pc = 0x79dbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x79dc00: 0x3c07f7ff  lui         $a3, 0xF7FF
    ctx->pc = 0x79dc00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63487 << 16));
    // 0x79dc04: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x79dc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x79dc08: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x79dc08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x79dc0c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x79dc0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79dc10: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x79dc10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79dc14: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x79dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x79dc18: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x79dc18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79dc1c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x79dc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x79dc20: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x79dc20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x79dc24: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x79dc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x79dc28: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x79dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x79dc2c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x79dc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x79dc30: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x79dc30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x79dc34: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x79dc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x79dc38: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x79dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x79dc3c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x79dc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x79dc40: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x79dc40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x79dc44: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x79dc44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x79dc48: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x79dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x79dc4c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x79dc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x79dc50: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x79dc50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x79dc54: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x79dc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x79dc58: 0xac760084  sw          $s6, 0x84($v1)
    ctx->pc = 0x79dc58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 22));
    // 0x79dc5c: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x79dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x79dc60: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x79dc60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x79dc64: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x79dc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x79dc68: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x79dc68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
label_79dc6c:
    // 0x79dc6c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79dc6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x79dc70: 0x1e200087  bgtz        $s1, . + 4 + (0x87 << 2)
    ctx->pc = 0x79DC70u;
    {
        const bool branch_taken_0x79dc70 = (GPR_S64(ctx, 17) > 0);
        ctx->pc = 0x79DC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DC70u;
        // 0x79dc74: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79dc70) {
            ctx->pc = 0x79DE90u;
            goto label_79de90;
        }
    }
    ctx->pc = 0x79DC78u;
    // 0x79dc78: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x79dc78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79dc7c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79DC7Cu;
    {
        const bool branch_taken_0x79dc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DC7Cu;
        // 0x79dc80: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79dc7c) {
            ctx->pc = 0x79DCA4u;
            goto label_79dca4;
        }
    }
    ctx->pc = 0x79DC84u;
    // 0x79dc84: 0x26450090  addiu       $a1, $s2, 0x90
    ctx->pc = 0x79dc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x79dc88: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x79dc88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x79dc8c: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x79dc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x79dc90: 0x2d32018  mult        $a0, $s6, $s3
    ctx->pc = 0x79dc90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x79dc94: 0xac730084  sw          $s3, 0x84($v1)
    ctx->pc = 0x79dc94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 19));
    // 0x79dc98: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x79dc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x79dc9c: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x79DC9Cu;
    {
        const bool branch_taken_0x79dc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DC9Cu;
        // 0x79dca0: 0xac440084  sw          $a0, 0x84($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79dc9c) {
            ctx->pc = 0x79DE90u;
            goto label_79de90;
        }
    }
    ctx->pc = 0x79DCA4u;
label_79dca4:
    // 0x79dca4: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x79DCA4u;
    {
        const bool branch_taken_0x79dca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DCA4u;
        // 0x79dca8: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79dca4) {
            ctx->pc = 0x79DE90u;
            goto label_79de90;
        }
    }
    ctx->pc = 0x79DCACu;
label_79dcac:
    // 0x79dcac: 0x2411001e  addiu       $s1, $zero, 0x1E
    ctx->pc = 0x79dcacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x79dcb0: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x79dcb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_79dcb4:
    // 0x79dcb4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79dcb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x79dcb8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x79DCB8u;
    {
        const bool branch_taken_0x79dcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79DCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DCB8u;
        // 0x79dcbc: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79dcb8) {
            ctx->pc = 0x79DDA8u;
            goto label_79dda8;
        }
    }
    ctx->pc = 0x79DCC0u;
label_79dcc0:
    // 0x79dcc0: 0x26450090  addiu       $a1, $s2, 0x90
    ctx->pc = 0x79dcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x79dcc4: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x79dcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x79dcc8: 0x8ca6002c  lw          $a2, 0x2C($a1)
    ctx->pc = 0x79dcc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x79dccc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79dcccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79dcd0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x79dcd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79dcd4: 0x2411001e  addiu       $s1, $zero, 0x1E
    ctx->pc = 0x79dcd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x79dcd8: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x79dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x79dcdc: 0x2410000b  addiu       $s0, $zero, 0xB
    ctx->pc = 0x79dcdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x79dce0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79dce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79dce4: 0xacc2002c  sw          $v0, 0x2C($a2)
    ctx->pc = 0x79dce4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 2));
    // 0x79dce8: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x79dce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x79dcec: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x79dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x79dcf0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79dcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79dcf4: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x79dcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x79dcf8: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x79dcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x79dcfc: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x79dcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
label_79dd00:
    // 0x79dd00: 0x24020320  addiu       $v0, $zero, 0x320
    ctx->pc = 0x79dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x79dd04: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x79dd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x79dd08: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x79dd08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x79dd0c: 0x3c42018  mult        $a0, $fp, $a0
    ctx->pc = 0x79dd0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x79dd10: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x79dd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x79dd14: 0x26460090  addiu       $a2, $s2, 0x90
    ctx->pc = 0x79dd14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x79dd18: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x79DD18u;
    {
        const bool branch_taken_0x79dd18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x79dd18) {
            ctx->pc = 0x79DD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79DD18u;
            // 0x79dd1c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79DD20u;
            goto label_79dd20;
        }
    }
    ctx->pc = 0x79DD20u;
label_79dd20:
    // 0x79dd20: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79dd20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x79dd24: 0x8cc5001c  lw          $a1, 0x1C($a2)
    ctx->pc = 0x79dd24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x79dd28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x79dd2c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x79dd2cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x79dd30: 0x1012  mflo        $v0
    ctx->pc = 0x79dd30u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x79dd34: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x79dd34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79dd38: 0x1e200055  bgtz        $s1, . + 4 + (0x55 << 2)
    ctx->pc = 0x79DD38u;
    {
        const bool branch_taken_0x79dd38 = (GPR_S64(ctx, 17) > 0);
        ctx->pc = 0x79DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DD38u;
        // 0x79dd3c: 0xacb30084  sw          $s3, 0x84($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79dd38) {
            ctx->pc = 0x79DE90u;
            goto label_79de90;
        }
    }
    ctx->pc = 0x79DD40u;
    // 0x79dd40: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x79dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x79dd44: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x79dd44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x79dd48: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x79DD48u;
    {
        const bool branch_taken_0x79dd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DD48u;
        // 0x79dd4c: 0xac5e0084  sw          $fp, 0x84($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79dd48) {
            ctx->pc = 0x79DE90u;
            goto label_79de90;
        }
    }
    ctx->pc = 0x79DD50u;
label_79dd50:
    // 0x79dd50: 0x2411001e  addiu       $s1, $zero, 0x1E
    ctx->pc = 0x79dd50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x79dd54: 0x2410000d  addiu       $s0, $zero, 0xD
    ctx->pc = 0x79dd54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_79dd58:
    // 0x79dd58: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79dd58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x79dd5c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x79DD5Cu;
    {
        const bool branch_taken_0x79dd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DD5Cu;
        // 0x79dd60: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79dd5c) {
            ctx->pc = 0x79DDA8u;
            goto label_79dda8;
        }
    }
    ctx->pc = 0x79DD64u;
label_79dd64:
    // 0x79dd64: 0x26460090  addiu       $a2, $s2, 0x90
    ctx->pc = 0x79dd64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x79dd68: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x79dd68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x79dd6c: 0x8cc50030  lw          $a1, 0x30($a2)
    ctx->pc = 0x79dd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x79dd70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79dd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79dd74: 0x2411001e  addiu       $s1, $zero, 0x1E
    ctx->pc = 0x79dd74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x79dd78: 0x2410000f  addiu       $s0, $zero, 0xF
    ctx->pc = 0x79dd78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x79dd7c: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x79dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x79dd80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79dd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79dd84: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x79dd84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x79dd88: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x79dd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x79dd8c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x79dd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x79dd90: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79dd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79dd94: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x79dd94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x79dd98: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x79dd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x79dd9c: 0xac750084  sw          $s5, 0x84($v1)
    ctx->pc = 0x79dd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 21));
label_79dda0:
    // 0x79dda0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79dda0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x79dda4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x79dda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_79dda8:
    // 0x79dda8: 0x11102a  slt         $v0, $zero, $s1
    ctx->pc = 0x79dda8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x79ddac: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x79DDACu;
    {
        const bool branch_taken_0x79ddac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DDACu;
        // 0x79ddb0: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ddac) {
            ctx->pc = 0x79DE90u;
            goto label_79de90;
        }
    }
    ctx->pc = 0x79DDB4u;
label_79ddb4:
    // 0x79ddb4: 0x26450090  addiu       $a1, $s2, 0x90
    ctx->pc = 0x79ddb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x79ddb8: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x79ddb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x79ddbc: 0x8ca60034  lw          $a2, 0x34($a1)
    ctx->pc = 0x79ddbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x79ddc0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79ddc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79ddc4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x79ddc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ddc8: 0x2411001e  addiu       $s1, $zero, 0x1E
    ctx->pc = 0x79ddc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x79ddcc: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x79ddccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x79ddd0: 0x24100011  addiu       $s0, $zero, 0x11
    ctx->pc = 0x79ddd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x79ddd4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79ddd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79ddd8: 0xacc2002c  sw          $v0, 0x2C($a2)
    ctx->pc = 0x79ddd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 2));
    // 0x79dddc: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x79dddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x79dde0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x79dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x79dde4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79dde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79dde8: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x79dde8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x79ddec: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x79ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x79ddf0: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x79ddf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
label_79ddf4:
    // 0x79ddf4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x79ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x79ddf8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x79ddf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x79ddfc: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x79ddfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x79de00: 0x2842018  mult        $a0, $s4, $a0
    ctx->pc = 0x79de00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x79de04: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x79de04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x79de08: 0x26460090  addiu       $a2, $s2, 0x90
    ctx->pc = 0x79de08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x79de0c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x79DE0Cu;
    {
        const bool branch_taken_0x79de0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x79de0c) {
            ctx->pc = 0x79DE10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79DE0Cu;
            // 0x79de10: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79DE14u;
            goto label_79de14;
        }
    }
    ctx->pc = 0x79DE14u;
label_79de14:
    // 0x79de14: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79de14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x79de18: 0x8cc50024  lw          $a1, 0x24($a2)
    ctx->pc = 0x79de18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x79de1c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x79de20: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x79de20u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x79de24: 0x1012  mflo        $v0
    ctx->pc = 0x79de24u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x79de28: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x79de28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79de2c: 0x1e200018  bgtz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x79DE2Cu;
    {
        const bool branch_taken_0x79de2c = (GPR_S64(ctx, 17) > 0);
        ctx->pc = 0x79DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DE2Cu;
        // 0x79de30: 0xacb30084  sw          $s3, 0x84($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79de2c) {
            ctx->pc = 0x79DE90u;
            goto label_79de90;
        }
    }
    ctx->pc = 0x79DE34u;
    // 0x79de34: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x79de34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x79de38: 0x24100012  addiu       $s0, $zero, 0x12
    ctx->pc = 0x79de38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x79de3c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x79DE3Cu;
    {
        const bool branch_taken_0x79de3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DE3Cu;
        // 0x79de40: 0xac540084  sw          $s4, 0x84($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79de3c) {
            ctx->pc = 0x79DE90u;
            goto label_79de90;
        }
    }
    ctx->pc = 0x79DE44u;
label_79de44:
    // 0x79de44: 0x2411005a  addiu       $s1, $zero, 0x5A
    ctx->pc = 0x79de44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x79de48: 0x24100013  addiu       $s0, $zero, 0x13
    ctx->pc = 0x79de48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_79de4c:
    // 0x79de4c: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x79DE4Cu;
    {
        const bool branch_taken_0x79de4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DE4Cu;
        // 0x79de50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79de4c) {
            ctx->pc = 0x79DE90u;
            goto label_79de90;
        }
    }
    ctx->pc = 0x79DE54u;
    // 0x79de54: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x79de54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x79de58: 0x9043009a  lbu         $v1, 0x9A($v0)
    ctx->pc = 0x79de58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 154)));
    // 0x79de5c: 0x1464000c  bne         $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x79DE5Cu;
    {
        const bool branch_taken_0x79de5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x79DE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DE5Cu;
        // 0x79de60: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79de5c) {
            ctx->pc = 0x79DE90u;
            goto label_79de90;
        }
    }
    ctx->pc = 0x79DE64u;
    // 0x79de64: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x79de64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x79de68: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x79de68u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79de6c: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x79de6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x79de70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79de70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79de74: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x79de74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79de78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79de78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79de7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79de7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79de80: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x79de80u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x79de84: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x79DE84u;
    SET_GPR_U32(ctx, 31, 0x79DE8Cu);
    ctx->pc = 0x79DE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79DE84u;
    // 0x79de88: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79DE84u, 0x79DE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79DE8Cu;
label_79de8c:
    // 0x79de8c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x79de8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79de90:
    // 0x79de90: 0x1520000c  bnez        $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x79DE90u;
    {
        const bool branch_taken_0x79de90 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x79DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DE90u;
        // 0x79de94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79de90) {
            ctx->pc = 0x79DEC4u;
            goto label_79dec4;
        }
    }
    ctx->pc = 0x79DE98u;
    // 0x79de98: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x79DE98u;
    SET_GPR_U32(ctx, 31, 0x79DEA0u);
    ctx->pc = 0x79DE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79DE98u;
    // 0x79de9c: 0x8e4400cc  lw          $a0, 0xCC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x79DE98u, 0x79DEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79DEA0u;
label_79dea0:
    // 0x79dea0: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x79DEA0u;
    SET_GPR_U32(ctx, 31, 0x79DEA8u);
    ctx->pc = 0x79DEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79DEA0u;
    // 0x79dea4: 0x8e4400cc  lw          $a0, 0xCC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x79DEA0u, 0x79DEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79DEA8u;
label_79dea8:
    // 0x79dea8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79dea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79deac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79deacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79deb0: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79deb4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79DEB4u;
    SET_GPR_U32(ctx, 31, 0x79DEBCu);
    ctx->pc = 0x79DEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79DEB4u;
    // 0x79deb8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79DEB4u, 0x79DEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79DEBCu;
label_79debc:
    // 0x79debc: 0x1000fec6  b           . + 4 + (-0x13A << 2)
    ctx->pc = 0x79DEBCu;
    {
        const bool branch_taken_0x79debc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DEBCu;
        // 0x79dec0: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79debc) {
            ctx->pc = 0x79D9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79d9d8;
        }
    }
    ctx->pc = 0x79DEC4u;
label_79dec4:
    // 0x79dec4: 0x16e20014  bne         $s7, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x79DEC4u;
    {
        const bool branch_taken_0x79dec4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x79DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DEC4u;
        // 0x79dec8: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79dec4) {
            ctx->pc = 0x79DF18u;
            goto label_79df18;
        }
    }
    ctx->pc = 0x79DECCu;
    // 0x79decc: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79deccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x79ded0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x79DED0u;
    {
        const bool branch_taken_0x79ded0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DED0u;
        // 0x79ded4: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ded0) {
            ctx->pc = 0x79DEF4u;
            goto label_79def4;
        }
    }
    ctx->pc = 0x79DED8u;
label_79ded8:
    // 0x79ded8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79ded8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79dedc: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x79dedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x79dee0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79DEE0u;
    SET_GPR_U32(ctx, 31, 0x79DEE8u);
    ctx->pc = 0x79DEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79DEE0u;
    // 0x79dee4: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79DEE0u, 0x79DEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79DEE8u;
label_79dee8:
    // 0x79dee8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79deec: 0x16e2000a  bne         $s7, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x79DEECu;
    {
        const bool branch_taken_0x79deec = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x79DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DEECu;
        // 0x79def0: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79deec) {
            ctx->pc = 0x79DF18u;
            goto label_79df18;
        }
    }
    ctx->pc = 0x79DEF4u;
label_79def4:
    // 0x79def4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79def4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x79def8: 0x24637470  addiu       $v1, $v1, 0x7470
    ctx->pc = 0x79def8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29808));
    // 0x79defc: 0x9062001c  lbu         $v0, 0x1C($v1)
    ctx->pc = 0x79defcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x79df00: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x79df00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x79df04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79df04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79df08: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x79DF08u;
    {
        const bool branch_taken_0x79df08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79DF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DF08u;
        // 0x79df0c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79df08) {
            ctx->pc = 0x79DED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ded8;
        }
    }
    ctx->pc = 0x79DF10u;
    // 0x79df10: 0xa2570070  sb          $s7, 0x70($s2)
    ctx->pc = 0x79df10u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 112), (uint8_t)GPR_U32(ctx, 23));
    // 0x79df14: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x79df14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_79df18:
    // 0x79df18: 0x24509b70  addiu       $s0, $v0, -0x6490
    ctx->pc = 0x79df18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x79df1c: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x79DF1Cu;
    SET_GPR_U32(ctx, 31, 0x79DF24u);
    ctx->pc = 0x79DF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79DF1Cu;
    // 0x79df20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x79DF1Cu, 0x79DF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79DF24u;
label_79df24:
    // 0x79df24: 0x142840  sll         $a1, $s4, 1
    ctx->pc = 0x79df24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x79df28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79df28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79df2c: 0x282280a  movz        $a1, $s4, $v0
    ctx->pc = 0x79df2cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 20));
    // 0x79df30: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x79DF30u;
    SET_GPR_U32(ctx, 31, 0x79DF38u);
    ctx->pc = 0x79DF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79DF30u;
    // 0x79df34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x79DF30u, 0x79DF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79DF38u;
label_79df38:
    // 0x79df38: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x79df38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79df3c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x79df3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79df40: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x79df40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79df44: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x79df44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79df48: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x79df48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79df4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x79df4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79df50: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x79df50u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79df54: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x79df54u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79df58: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x79df58u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79df5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79df5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79df60: 0x3e00008  jr          $ra
    ctx->pc = 0x79DF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DF60u;
        // 0x79df64: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79DF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79DF68u;
}
} // namespace gh_r501
