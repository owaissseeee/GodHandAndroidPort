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
// Function: sceMcDelete
// Address: 0x7ce4f8 - 0x7ce618
void sceMcDelete_0x7ce4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMcDelete_0x7ce4f8");
#endif

    switch (ctx->pc) {
        case 0x7ce548u: goto label_7ce548;
        case 0x7ce56cu: goto label_7ce56c;
        case 0x7ce588u: goto label_7ce588;
        case 0x7ce5ccu: goto label_7ce5cc;
        case 0x7ce5dcu: goto label_7ce5dc;
        default: break;
    }

    ctx->pc = 0x7ce4f8u;

    // 0x7ce4f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x7ce4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x7ce4fc: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7ce4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7ce500: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x7ce500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x7ce504: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x7ce504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x7ce508: 0x24551980  addiu       $s5, $v0, 0x1980
    ctx->pc = 0x7ce508u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 6528));
    // 0x7ce50c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x7ce50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x7ce510: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x7ce510u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce514: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x7ce514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x7ce518: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x7ce518u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce51c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x7ce51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x7ce520: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x7ce520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x7ce524: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x7ce524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x7ce528: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x7ce528u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D19A4u));
    // 0x7ce52c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CE52Cu;
    {
        const bool branch_taken_0x7ce52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CE530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE52Cu;
        // 0x7ce530: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce52c) {
            ctx->pc = 0x7CE53Cu;
            goto label_7ce53c;
        }
    }
    ctx->pc = 0x7CE534u;
    // 0x7ce534: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x7CE534u;
    {
        const bool branch_taken_0x7ce534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE534u;
        // 0x7ce538: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce534) {
            ctx->pc = 0x7CE5F0u;
            goto label_7ce5f0;
        }
    }
    ctx->pc = 0x7CE53Cu;
label_7ce53c:
    // 0x7ce53c: 0x3c12007d  lui         $s2, 0x7D
    ctx->pc = 0x7ce53cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)125 << 16));
    // 0x7ce540: 0xc0ebf3c  jal         func_3AFCF0
    ctx->pc = 0x7CE540u;
    SET_GPR_U32(ctx, 31, 0x7CE548u);
    ctx->pc = 0x7CE544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE540u;
    // 0x7ce544: 0x8e4407b4  lw          $a0, 0x7B4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCF0u, 0x7CE540u, 0x7CE548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE548u;
label_7ce548:
    // 0x7ce548: 0x4400029  bltz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x7CE548u;
    {
        const bool branch_taken_0x7ce548 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x7CE54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE548u;
        // 0x7ce54c: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce548) {
            ctx->pc = 0x7CE5F0u;
            goto label_7ce5f0;
        }
    }
    ctx->pc = 0x7CE550u;
    // 0x7ce550: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7CE550u;
    {
        const bool branch_taken_0x7ce550 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ce550) {
            ctx->pc = 0x7CE564u;
            goto label_7ce564;
        }
    }
    ctx->pc = 0x7CE558u;
    // 0x7ce558: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x7ce558u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7ce55c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CE55Cu;
    {
        const bool branch_taken_0x7ce55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CE560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE55Cu;
        // 0x7ce560: 0x3c10007d  lui         $s0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce55c) {
            ctx->pc = 0x7CE574u;
            goto label_7ce574;
        }
    }
    ctx->pc = 0x7CE564u;
label_7ce564:
    // 0x7ce564: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CE564u;
    SET_GPR_U32(ctx, 31, 0x7CE56Cu);
    ctx->pc = 0x7CE568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE564u;
    // 0x7ce568: 0x8e4407b4  lw          $a0, 0x7B4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CE564u, 0x7CE56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE56Cu;
label_7ce56c:
    // 0x7ce56c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x7CE56Cu;
    {
        const bool branch_taken_0x7ce56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE56Cu;
        // 0x7ce570: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce56c) {
            ctx->pc = 0x7CE5F0u;
            goto label_7ce5f0;
        }
    }
    ctx->pc = 0x7CE574u;
label_7ce574:
    // 0x7ce574: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7ce574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce578: 0x26101a44  addiu       $s0, $s0, 0x1A44
    ctx->pc = 0x7ce578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6724));
    // 0x7ce57c: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x7ce57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x7ce580: 0xc0e9768  jal         func_3A5DA0
    ctx->pc = 0x7CE580u;
    SET_GPR_U32(ctx, 31, 0x7CE588u);
    ctx->pc = 0x7CE584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE580u;
    // 0x7ce584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5DA0u, 0x7CE580u, 0x7CE588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE588u;
label_7ce588:
    // 0x7ce588: 0x2603ffec  addiu       $v1, $s0, -0x14
    ctx->pc = 0x7ce588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x7ce58c: 0xae14ffec  sw          $s4, -0x14($s0)
    ctx->pc = 0x7ce58cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967276), GPR_U32(ctx, 20));
    // 0x7ce590: 0x3c09007d  lui         $t1, 0x7D
    ctx->pc = 0x7ce590u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)125 << 16));
    // 0x7ce594: 0x3c0b007d  lui         $t3, 0x7D
    ctx->pc = 0x7ce594u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)125 << 16));
    // 0x7ce598: 0xac730004  sw          $s3, 0x4($v1)
    ctx->pc = 0x7ce598u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
    // 0x7ce59c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x7ce59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce5a0: 0xa0600413  sb          $zero, 0x413($v1)
    ctx->pc = 0x7ce5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x7ce5a4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x7ce5a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce5a8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x7ce5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x7ce5ac: 0x25292f40  addiu       $t1, $t1, 0x2F40
    ctx->pc = 0x7ce5acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12096));
    // 0x7ce5b0: 0x256bd628  addiu       $t3, $t3, -0x29D8
    ctx->pc = 0x7ce5b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956584));
    // 0x7ce5b4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x7ce5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x7ce5b8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7ce5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x7ce5bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7ce5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7ce5c0: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x7ce5c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x7ce5c4: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x7CE5C4u;
    SET_GPR_U32(ctx, 31, 0x7CE5CCu);
    ctx->pc = 0x7CE5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE5C4u;
    // 0x7ce5c8: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x7CE5C4u, 0x7CE5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE5CCu;
label_7ce5cc:
    // 0x7ce5cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CE5CCu;
    {
        const bool branch_taken_0x7ce5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE5CCu;
        // 0x7ce5d0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce5cc) {
            ctx->pc = 0x7CE5E4u;
            goto label_7ce5e4;
        }
    }
    ctx->pc = 0x7CE5D4u;
    // 0x7ce5d4: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CE5D4u;
    SET_GPR_U32(ctx, 31, 0x7CE5DCu);
    ctx->pc = 0x7CE5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE5D4u;
    // 0x7ce5d8: 0x8e4407b4  lw          $a0, 0x7B4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CE5D4u, 0x7CE5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE5DCu;
label_7ce5dc:
    // 0x7ce5dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7CE5DCu;
    {
        const bool branch_taken_0x7ce5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE5DCu;
        // 0x7ce5e0: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce5dc) {
            ctx->pc = 0x7CE5F0u;
            goto label_7ce5f0;
        }
    }
    ctx->pc = 0x7CE5E4u;
label_7ce5e4:
    // 0x7ce5e4: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7ce5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7ce5e8: 0xac6207b0  sw          $v0, 0x7B0($v1)
    ctx->pc = 0x7ce5e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7D07B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7D07B0u, _value); } while (0);
    // 0x7ce5ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7ce5ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7ce5f0:
    // 0x7ce5f0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x7ce5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7ce5f4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x7ce5f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7ce5f8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x7ce5f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7ce5fc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x7ce5fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7ce600: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x7ce600u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7ce604: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x7ce604u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7ce608: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x7ce608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ce60c: 0x3e00008  jr          $ra
    ctx->pc = 0x7CE60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CE610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE60Cu;
        // 0x7ce610: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CE60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CE614u;
    // 0x7ce614: 0x0  nop
    ctx->pc = 0x7ce614u;
    // NOP
    ctx->pc = 0x7ce618u;
}
} // namespace gh_mcport
