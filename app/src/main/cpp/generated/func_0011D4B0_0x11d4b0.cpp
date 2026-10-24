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

// Function: func_0011D4B0
// Address: 0x11d4b0 - 0x11da30
void func_0011D4B0_0x11d4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0011D4B0_0x11d4b0");
#endif

    switch (ctx->pc) {
        case 0x11d538u: goto label_11d538;
        case 0x11d540u: goto label_11d540;
        case 0x11d564u: goto label_11d564;
        case 0x11d56cu: goto label_11d56c;
        case 0x11d5e8u: goto label_11d5e8;
        case 0x11d608u: goto label_11d608;
        case 0x11d698u: goto label_11d698;
        case 0x11d708u: goto label_11d708;
        case 0x11d754u: goto label_11d754;
        case 0x11d76cu: goto label_11d76c;
        case 0x11d7a0u: goto label_11d7a0;
        case 0x11d834u: goto label_11d834;
        case 0x11d850u: goto label_11d850;
        case 0x11d864u: goto label_11d864;
        case 0x11d880u: goto label_11d880;
        case 0x11d888u: goto label_11d888;
        case 0x11d8a8u: goto label_11d8a8;
        case 0x11d8e8u: goto label_11d8e8;
        case 0x11d8f4u: goto label_11d8f4;
        case 0x11d944u: goto label_11d944;
        case 0x11d96cu: goto label_11d96c;
        case 0x11d9a8u: goto label_11d9a8;
        case 0x11d9b0u: goto label_11d9b0;
        case 0x11d9c0u: goto label_11d9c0;
        case 0x11d9f4u: goto label_11d9f4;
        case 0x11da00u: goto label_11da00;
        default: break;
    }

    ctx->pc = 0x11d4b0u;

    // 0x11d4b0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x11d4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x11d4b4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x11d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x11d4b8: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x11d4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x11d4bc: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x11d4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x11d4c0: 0x245064f0  addiu       $s0, $v0, 0x64F0
    ctx->pc = 0x11d4c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x11d4c4: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x11d4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x11d4c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11d4c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d4cc: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x11d4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x11d4d0: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x11d4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x11d4d4: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x11d4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x11d4d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x11d4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x11d4dc: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x11d4dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x11d4e0: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x11d4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x11d4e4: 0x8e120560  lw          $s2, 0x560($s0)
    ctx->pc = 0x11d4e4u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x586A50u));
    // 0x11d4e8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D4E8u;
    {
        const bool branch_taken_0x11d4e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D4E8u;
        // 0x11d4ec: 0x8e330694  lw          $s3, 0x694($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d4e8) {
            ctx->pc = 0x11D4FCu;
            goto label_11d4fc;
        }
    }
    ctx->pc = 0x11D4F0u;
    // 0x11d4f0: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x11d4f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
    // 0x11d4f4: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x11d4f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11d4f8: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x11d4f8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_11d4fc:
    // 0x11d4fc: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x11d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x11d500: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x11d500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x11d504: 0x8e2315f4  lw          $v1, 0x15F4($s1)
    ctx->pc = 0x11d504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x11d508: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x11d508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x11d50c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x11d50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x11d510: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11d510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d514: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x11d514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x11d518: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x11d518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x11d51c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x11d51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x11d520: 0xae2315f4  sw          $v1, 0x15F4($s1)
    ctx->pc = 0x11d520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 3));
    // 0x11d524: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11d524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d528: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x11d528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    // 0x11d52c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11d52cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d530: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x11D530u;
    SET_GPR_U32(ctx, 31, 0x11D538u);
    ctx->pc = 0x11D534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D530u;
    // 0x11d534: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x11D530u, 0x11D538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D538u;
label_11d538:
    // 0x11d538: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x11D538u;
    SET_GPR_U32(ctx, 31, 0x11D540u);
    ctx->pc = 0x11D53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D538u;
    // 0x11d53c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x11D538u, 0x11D540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D540u;
label_11d540:
    // 0x11d540: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x11d540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11d544: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D544u;
    {
        const bool branch_taken_0x11d544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D544u;
        // 0x11d548: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d544) {
            ctx->pc = 0x11D55Cu;
            goto label_11d55c;
        }
    }
    ctx->pc = 0x11D54Cu;
    // 0x11d54c: 0x106200ca  beq         $v1, $v0, . + 4 + (0xCA << 2)
    ctx->pc = 0x11D54Cu;
    {
        const bool branch_taken_0x11d54c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D54Cu;
        // 0x11d550: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d54c) {
            ctx->pc = 0x11D878u;
            goto label_11d878;
        }
    }
    ctx->pc = 0x11D554u;
    // 0x11d554: 0x1000012c  b           . + 4 + (0x12C << 2)
    ctx->pc = 0x11D554u;
    {
        const bool branch_taken_0x11d554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D554u;
        // 0x11d558: 0x7bb100f0  lq          $s1, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d554) {
            ctx->pc = 0x11DA08u;
            goto label_11da08;
        }
    }
    ctx->pc = 0x11D55Cu;
label_11d55c:
    // 0x11d55c: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x11D55Cu;
    SET_GPR_U32(ctx, 31, 0x11D564u);
    ctx->pc = 0x11D560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D55Cu;
    // 0x11d560: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x11D55Cu, 0x11D564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D564u;
label_11d564:
    // 0x11d564: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x11D564u;
    SET_GPR_U32(ctx, 31, 0x11D56Cu);
    ctx->pc = 0x11D568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D564u;
    // 0x11d568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x11D564u, 0x11D56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D56Cu;
label_11d56c:
    // 0x11d56c: 0x52600068  beql        $s3, $zero, . + 4 + (0x68 << 2)
    ctx->pc = 0x11D56Cu;
    {
        const bool branch_taken_0x11d56c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d56c) {
            ctx->pc = 0x11D570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D56Cu;
            // 0x11d570: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D710u;
            goto label_11d710;
        }
    }
    ctx->pc = 0x11D574u;
    // 0x11d574: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x11d574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x11d578: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x11d578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x11d57c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x11d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x11d580: 0x24040103  addiu       $a0, $zero, 0x103
    ctx->pc = 0x11d580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
    // 0x11d584: 0x94437a50  lhu         $v1, 0x7A50($v0)
    ctx->pc = 0x11d584u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x747A50u));
    // 0x11d588: 0x5464000c  bnel        $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x11D588u;
    {
        const bool branch_taken_0x11d588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x11d588) {
            ctx->pc = 0x11D58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D588u;
            // 0x11d58c: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D5BCu;
            goto label_11d5bc;
        }
    }
    ctx->pc = 0x11D590u;
    // 0x11d590: 0x3c0140b0  lui         $at, 0x40B0
    ctx->pc = 0x11d590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16560 << 16));
    // 0x11d594: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11d594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d598: 0x3c01c2bd  lui         $at, 0xC2BD
    ctx->pc = 0x11d598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49853 << 16));
    // 0x11d59c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11d59cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11d5a0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x11d5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x11d5a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11d5a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11d5a8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x11d5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x11d5ac: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x11d5acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x11d5b0: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x11d5b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x11d5b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11D5B4u;
    {
        const bool branch_taken_0x11d5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D5B4u;
        // 0x11d5b8: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d5b4) {
            ctx->pc = 0x11D5D4u;
            goto label_11d5d4;
        }
    }
    ctx->pc = 0x11D5BCu;
label_11d5bc:
    // 0x11d5bc: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x11d5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x11d5c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11d5c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d5c4: 0x0  nop
    ctx->pc = 0x11d5c4u;
    // NOP
    // 0x11d5c8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x11d5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x11d5cc: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x11d5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x11d5d0: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x11d5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_11d5d4:
    // 0x11d5d4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x11d5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x11d5d8: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x11d5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x11d5dc: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x11d5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11d5e0: 0xc051e62  jal         func_147988
    ctx->pc = 0x11D5E0u;
    SET_GPR_U32(ctx, 31, 0x11D5E8u);
    ctx->pc = 0x11D5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D5E0u;
    // 0x11d5e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x11D5E0u, 0x11D5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D5E8u;
label_11d5e8:
    // 0x11d5e8: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x11d5e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x11d5ec: 0x27b50040  addiu       $s5, $sp, 0x40
    ctx->pc = 0x11d5ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11d5f0: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x11d5f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x11d5f4: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x11d5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11d5f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d5fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11d5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d600: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x11D600u;
    SET_GPR_U32(ctx, 31, 0x11D608u);
    ctx->pc = 0x11D604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D600u;
    // 0x11d604: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x11D600u, 0x11D608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D608u;
label_11d608:
    // 0x11d608: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x11d608u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11d60c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x11d60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11d610: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x11d610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11d614: 0x27b60070  addiu       $s6, $sp, 0x70
    ctx->pc = 0x11d614u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x11d618: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x11d618u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x11d61c: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x11d61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11d620: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x11d620u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11d624: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x11d624u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11d628: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x11d628u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11d62c: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x11d62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11d630: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x11d630u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11d634: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x11d634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11d638: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x11d638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x11d63c: 0x27b40060  addiu       $s4, $sp, 0x60
    ctx->pc = 0x11d63cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11d640: 0x10540006  beq         $v0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D640u;
    {
        const bool branch_taken_0x11d640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x11D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D640u;
        // 0x11d644: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d640) {
            ctx->pc = 0x11D65Cu;
            goto label_11d65c;
        }
    }
    ctx->pc = 0x11D648u;
    // 0x11d648: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x11d648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x11d64c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x11d64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11d650: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x11d650u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x11d654: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x11d654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d658: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x11d658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_11d65c:
    // 0x11d65c: 0x3c01bf1a  lui         $at, 0xBF1A
    ctx->pc = 0x11d65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48922 << 16));
    // 0x11d660: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x11d660u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x11d664: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11d664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d668: 0x3c01bd95  lui         $at, 0xBD95
    ctx->pc = 0x11d668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48533 << 16));
    // 0x11d66c: 0x3421b574  ori         $at, $at, 0xB574
    ctx->pc = 0x11d66cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46452);
    // 0x11d670: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11d670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11d674: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x11d674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x11d678: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x11d678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x11d67c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x11d67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x11d680: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x11d680u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x11d684: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x11d684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11d688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d68c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11d68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d690: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x11D690u;
    SET_GPR_U32(ctx, 31, 0x11D698u);
    ctx->pc = 0x11D694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D690u;
    // 0x11d694: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x11D690u, 0x11D698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D698u;
label_11d698:
    // 0x11d698: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x11d698u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11d69c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x11d69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11d6a0: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x11d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x11d6a4: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x11d6a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x11d6a8: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x11d6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11d6ac: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x11d6acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11d6b0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x11d6b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11d6b4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x11d6b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11d6b8: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x11d6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11d6bc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x11d6bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11d6c0: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x11d6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11d6c4: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x11d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x11d6c8: 0x10540006  beq         $v0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D6C8u;
    {
        const bool branch_taken_0x11d6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x11D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D6C8u;
        // 0x11d6cc: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6c8) {
            ctx->pc = 0x11D6E4u;
            goto label_11d6e4;
        }
    }
    ctx->pc = 0x11D6D0u;
    // 0x11d6d0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x11d6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x11d6d4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x11d6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11d6d8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x11d6d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x11d6dc: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x11d6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d6e0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x11d6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_11d6e4:
    // 0x11d6e4: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x11d6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d6e8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x11d6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x11d6ec: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x11d6ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x11d6f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11d6f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11d6f4: 0x0  nop
    ctx->pc = 0x11d6f4u;
    // NOP
    // 0x11d6f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11d6f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11d6fc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x11d6fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x11d700: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x11D700u;
    SET_GPR_U32(ctx, 31, 0x11D708u);
    ctx->pc = 0x11D704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D700u;
    // 0x11d704: 0xe6600104  swc1        $f0, 0x104($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x11D700u, 0x11D708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D708u;
label_11d708:
    // 0x11d708: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11D708u;
    {
        const bool branch_taken_0x11d708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D708u;
        // 0x11d70c: 0xe6600104  swc1        $f0, 0x104($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d708) {
            ctx->pc = 0x11D754u;
            goto label_11d754;
        }
    }
    ctx->pc = 0x11D710u;
label_11d710:
    // 0x11d710: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d714: 0x3c01bf1a  lui         $at, 0xBF1A
    ctx->pc = 0x11d714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48922 << 16));
    // 0x11d718: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x11d718u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x11d71c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11d71cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11d720: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11d720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d724: 0x3c01bd95  lui         $at, 0xBD95
    ctx->pc = 0x11d724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48533 << 16));
    // 0x11d728: 0x3421b574  ori         $at, $at, 0xB574
    ctx->pc = 0x11d728u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46452);
    // 0x11d72c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11d72cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d730: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x11d730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d734: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11d734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11d738: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11d738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11d73c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11d73cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d740: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x11d740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11d744: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x11d744u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11d748: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x11d748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11d74c: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x11D74Cu;
    SET_GPR_U32(ctx, 31, 0x11D754u);
    ctx->pc = 0x11D750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D74Cu;
    // 0x11d750: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x11D74Cu, 0x11D754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D754u;
label_11d754:
    // 0x11d754: 0x1240003a  beqz        $s2, . + 4 + (0x3A << 2)
    ctx->pc = 0x11D754u;
    {
        const bool branch_taken_0x11d754 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D754u;
        // 0x11d758: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d754) {
            ctx->pc = 0x11D840u;
            goto label_11d840;
        }
    }
    ctx->pc = 0x11D75Cu;
    // 0x11d75c: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x11d75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x11d760: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x11d760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11d764: 0xc051e62  jal         func_147988
    ctx->pc = 0x11D764u;
    SET_GPR_U32(ctx, 31, 0x11D76Cu);
    ctx->pc = 0x11D768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D764u;
    // 0x11d768: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x11D764u, 0x11D76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D76Cu;
label_11d76c:
    // 0x11d76c: 0x3c01c009  lui         $at, 0xC009
    ctx->pc = 0x11d76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49161 << 16));
    // 0x11d770: 0x3421b08a  ori         $at, $at, 0xB08A
    ctx->pc = 0x11d770u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45194);
    // 0x11d774: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11d774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d778: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x11d778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11d77c: 0x3c01c083  lui         $at, 0xC083
    ctx->pc = 0x11d77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49283 << 16));
    // 0x11d780: 0x34213eab  ori         $at, $at, 0x3EAB
    ctx->pc = 0x11d780u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16043);
    // 0x11d784: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11d784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11d788: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x11d788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d78c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11d78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d790: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x11d790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x11d794: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x11d794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x11d798: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x11D798u;
    SET_GPR_U32(ctx, 31, 0x11D7A0u);
    ctx->pc = 0x11D79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D798u;
    // 0x11d79c: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x11D798u, 0x11D7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D7A0u;
label_11d7a0:
    // 0x11d7a0: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x11d7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11d7a4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x11d7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11d7a8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x11d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x11d7ac: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x11d7acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11d7b0: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x11d7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11d7b4: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x11d7b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11d7b8: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x11d7b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11d7bc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x11d7bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11d7c0: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x11d7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11d7c4: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x11d7c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11d7c8: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x11d7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11d7cc: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x11d7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x11d7d0: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x11d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11d7d4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D7D4u;
    {
        const bool branch_taken_0x11d7d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11D7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D7D4u;
        // 0x11d7d8: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7d4) {
            ctx->pc = 0x11D7F0u;
            goto label_11d7f0;
        }
    }
    ctx->pc = 0x11D7DCu;
    // 0x11d7dc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x11d7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x11d7e0: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x11d7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11d7e4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x11d7e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x11d7e8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x11d7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d7ec: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x11d7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_11d7f0:
    // 0x11d7f0: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x11d7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d7f4: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x11d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x11d7f8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x11d7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x11d7fc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x11d7fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x11d800: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11d800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11d804: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11d804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11d808: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11d808u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11d80c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d810: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11d810u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11d814: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x11d814u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x11d818: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x11d818u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11d81c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x11d81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x11d820: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x11d820u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x11d824: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x11d824u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x11d828: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x11d828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    // 0x11d82c: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11D82Cu;
    SET_GPR_U32(ctx, 31, 0x11D834u);
    ctx->pc = 0x11D830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D82Cu;
    // 0x11d830: 0xa24302f6  sb          $v1, 0x2F6($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11D82Cu, 0x11D834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D834u;
label_11d834:
    // 0x11d834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d838: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11D838u;
    {
        const bool branch_taken_0x11d838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D838u;
        // 0x11d83c: 0xa22202f7  sb          $v0, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d838) {
            ctx->pc = 0x11D854u;
            goto label_11d854;
        }
    }
    ctx->pc = 0x11D840u;
label_11d840:
    // 0x11d840: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11d840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11d844: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x11d844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x11d848: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11D848u;
    SET_GPR_U32(ctx, 31, 0x11D850u);
    ctx->pc = 0x11D84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D848u;
    // 0x11d84c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11D848u, 0x11D850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D850u;
label_11d850:
    // 0x11d850: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x11d850u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_11d854:
    // 0x11d854: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11d854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11d858: 0x2405fec0  addiu       $a1, $zero, -0x140
    ctx->pc = 0x11d858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x11d85c: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11D85Cu;
    SET_GPR_U32(ctx, 31, 0x11D864u);
    ctx->pc = 0x11D860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D85Cu;
    // 0x11d860: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11D85Cu, 0x11D864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D864u;
label_11d864:
    // 0x11d864: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11d864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11d868: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11d868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d86c: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x11d86cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
    // 0x11d870: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11d870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11d874: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11d874u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11d878:
    // 0x11d878: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11D878u;
    SET_GPR_U32(ctx, 31, 0x11D880u);
    ctx->pc = 0x11D87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D878u;
    // 0x11d87c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11D878u, 0x11D880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D880u;
label_11d880:
    // 0x11d880: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11D880u;
    SET_GPR_U32(ctx, 31, 0x11D888u);
    ctx->pc = 0x11D884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D880u;
    // 0x11d884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11D880u, 0x11D888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D888u;
label_11d888:
    // 0x11d888: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11D888u;
    {
        const bool branch_taken_0x11d888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d888) {
            ctx->pc = 0x11D8D4u;
            goto label_11d8d4;
        }
    }
    ctx->pc = 0x11D890u;
    // 0x11d890: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x11d890u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x11d894: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11D894u;
    {
        const bool branch_taken_0x11d894 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x11D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D894u;
        // 0x11d898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d894) {
            ctx->pc = 0x11D8C4u;
            goto label_11d8c4;
        }
    }
    ctx->pc = 0x11D89Cu;
    // 0x11d89c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d8a0: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11D8A0u;
    SET_GPR_U32(ctx, 31, 0x11D8A8u);
    ctx->pc = 0x11D8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D8A0u;
    // 0x11d8a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11D8A0u, 0x11D8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D8A8u;
label_11d8a8:
    // 0x11d8a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d8ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11d8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11d8b0: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x11d8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x11d8b4: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x11d8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x11d8b8: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11d8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11d8bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11D8BCu;
    {
        const bool branch_taken_0x11d8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D8BCu;
        // 0x11d8c0: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8bc) {
            ctx->pc = 0x11D8D4u;
            goto label_11d8d4;
        }
    }
    ctx->pc = 0x11D8C4u;
label_11d8c4:
    // 0x11d8c4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x11d8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x11d8c8: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x11d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x11d8cc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11d8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11d8d0: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x11d8d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
label_11d8d4:
    // 0x11d8d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11d8d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11d8d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11d8d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11d8dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d8e0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11D8E0u;
    SET_GPR_U32(ctx, 31, 0x11D8E8u);
    ctx->pc = 0x11D8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D8E0u;
    // 0x11d8e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11D8E0u, 0x11D8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D8E8u;
label_11d8e8:
    // 0x11d8e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11d8e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11d8ec: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11D8ECu;
    SET_GPR_U32(ctx, 31, 0x11D8F4u);
    ctx->pc = 0x11D8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D8ECu;
    // 0x11d8f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11D8ECu, 0x11D8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D8F4u;
label_11d8f4:
    // 0x11d8f4: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x11d8f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x11d8f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11d8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11d8fc: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x11D8FCu;
    {
        const bool branch_taken_0x11d8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D8FCu;
        // 0x11d900: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8fc) {
            ctx->pc = 0x11DA04u;
            goto label_11da04;
        }
    }
    ctx->pc = 0x11D904u;
    // 0x11d904: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x11d904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x11d908: 0x5040003f  beql        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x11D908u;
    {
        const bool branch_taken_0x11d908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d908) {
            ctx->pc = 0x11D90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D908u;
            // 0x11d90c: 0x7bb100f0  lq          $s1, 0xF0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DA08u;
            goto label_11da08;
        }
    }
    ctx->pc = 0x11D910u;
    // 0x11d910: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x11D910u;
    {
        const bool branch_taken_0x11d910 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D910u;
        // 0x11d914: 0xae2015b0  sw          $zero, 0x15B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d910) {
            ctx->pc = 0x11D96Cu;
            goto label_11d96c;
        }
    }
    ctx->pc = 0x11D918u;
    // 0x11d918: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x11d918u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x11d91c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11D91Cu;
    {
        const bool branch_taken_0x11d91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D91Cu;
        // 0x11d920: 0xc660076c  lwc1        $f0, 0x76C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d91c) {
            ctx->pc = 0x11D94Cu;
            goto label_11d94c;
        }
    }
    ctx->pc = 0x11D924u;
    // 0x11d924: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x11d924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x11d928: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11d928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11d92c: 0x0  nop
    ctx->pc = 0x11d92cu;
    // NOP
    // 0x11d930: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11d930u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11d934: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11d934u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11d938: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11d938u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11d93c: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x11D93Cu;
    SET_GPR_U32(ctx, 31, 0x11D944u);
    ctx->pc = 0x11D940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D93Cu;
    // 0x11d940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x11D93Cu, 0x11D944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D944u;
label_11d944:
    // 0x11d944: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11D944u;
    {
        const bool branch_taken_0x11d944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D944u;
        // 0x11d948: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d944) {
            ctx->pc = 0x11D970u;
            goto label_11d970;
        }
    }
    ctx->pc = 0x11D94Cu;
label_11d94c:
    // 0x11d94c: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x11d94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x11d950: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11d950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11d954: 0x0  nop
    ctx->pc = 0x11d954u;
    // NOP
    // 0x11d958: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11d958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11d95c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11d95cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11d960: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11d960u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11d964: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x11D964u;
    SET_GPR_U32(ctx, 31, 0x11D96Cu);
    ctx->pc = 0x11D968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D964u;
    // 0x11d968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x11D964u, 0x11D96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D96Cu;
label_11d96c:
    // 0x11d96c: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x11d96cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_11d970:
    // 0x11d970: 0x1c400017  bgtz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x11D970u;
    {
        const bool branch_taken_0x11d970 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x11D974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D970u;
        // 0x11d974: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d970) {
            ctx->pc = 0x11D9D0u;
            goto label_11d9d0;
        }
    }
    ctx->pc = 0x11D978u;
    // 0x11d978: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x11d978u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x11d97c: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x11d97cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x11d980: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x11d980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x11d984: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11d984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d988: 0x240600d6  addiu       $a2, $zero, 0xD6
    ctx->pc = 0x11d988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x11d98c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11d98cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d990: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11d990u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d994: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11d994u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d998: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11d998u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d99c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11d99cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d9a0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11D9A0u;
    SET_GPR_U32(ctx, 31, 0x11D9A8u);
    ctx->pc = 0x11D9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D9A0u;
    // 0x11d9a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11D9A0u, 0x11D9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D9A8u;
label_11d9a8:
    // 0x11d9a8: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x11D9A8u;
    SET_GPR_U32(ctx, 31, 0x11D9B0u);
    ctx->pc = 0x11D9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D9A8u;
    // 0x11d9ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x11D9A8u, 0x11D9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D9B0u;
label_11d9b0:
    // 0x11d9b0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11d9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11d9b4: 0x2405fc18  addiu       $a1, $zero, -0x3E8
    ctx->pc = 0x11d9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    // 0x11d9b8: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11D9B8u;
    SET_GPR_U32(ctx, 31, 0x11D9C0u);
    ctx->pc = 0x11D9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D9B8u;
    // 0x11d9bc: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11D9B8u, 0x11D9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D9C0u;
label_11d9c0:
    // 0x11d9c0: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x11d9c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x11d9c4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11d9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11d9c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11D9C8u;
    {
        const bool branch_taken_0x11d9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D9C8u;
        // 0x11d9cc: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d9c8) {
            ctx->pc = 0x11D9F4u;
            goto label_11d9f4;
        }
    }
    ctx->pc = 0x11D9D0u;
label_11d9d0:
    // 0x11d9d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11d9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d9d4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x11d9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x11d9d8: 0x240600d7  addiu       $a2, $zero, 0xD7
    ctx->pc = 0x11d9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x11d9dc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11d9dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d9e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11d9e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d9e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11d9e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d9e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11d9e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d9ec: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11D9ECu;
    SET_GPR_U32(ctx, 31, 0x11D9F4u);
    ctx->pc = 0x11D9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D9ECu;
    // 0x11d9f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11D9ECu, 0x11D9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D9F4u;
label_11d9f4:
    // 0x11d9f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d9f8: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11D9F8u;
    SET_GPR_U32(ctx, 31, 0x11DA00u);
    ctx->pc = 0x11D9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D9F8u;
    // 0x11d9fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11D9F8u, 0x11DA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DA00u;
label_11da00:
    // 0x11da00: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x11da00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_11da04:
    // 0x11da04: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x11da04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_11da08:
    // 0x11da08: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x11da08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x11da0c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x11da0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x11da10: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x11da10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x11da14: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x11da14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11da18: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x11da18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11da1c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x11da1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11da20: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x11da20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11da24: 0x3e00008  jr          $ra
    ctx->pc = 0x11DA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA24u;
        // 0x11da28: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DA2Cu;
    // 0x11da2c: 0x0  nop
    ctx->pc = 0x11da2cu;
    // NOP
    ctx->pc = 0x11da30u;
}
