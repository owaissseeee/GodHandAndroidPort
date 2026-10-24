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

// Function: func_0032D720
// Address: 0x32d720 - 0x32d868
void func_0032D720_0x32d720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032D720_0x32d720");
#endif

    switch (ctx->pc) {
        case 0x32d720u: goto label_32d720;
        case 0x32d724u: goto label_32d724;
        case 0x32d728u: goto label_32d728;
        case 0x32d72cu: goto label_32d72c;
        case 0x32d730u: goto label_32d730;
        case 0x32d734u: goto label_32d734;
        case 0x32d738u: goto label_32d738;
        case 0x32d73cu: goto label_32d73c;
        case 0x32d740u: goto label_32d740;
        case 0x32d744u: goto label_32d744;
        case 0x32d748u: goto label_32d748;
        case 0x32d74cu: goto label_32d74c;
        case 0x32d750u: goto label_32d750;
        case 0x32d754u: goto label_32d754;
        case 0x32d758u: goto label_32d758;
        case 0x32d75cu: goto label_32d75c;
        case 0x32d760u: goto label_32d760;
        case 0x32d764u: goto label_32d764;
        case 0x32d768u: goto label_32d768;
        case 0x32d76cu: goto label_32d76c;
        case 0x32d770u: goto label_32d770;
        case 0x32d774u: goto label_32d774;
        case 0x32d778u: goto label_32d778;
        case 0x32d77cu: goto label_32d77c;
        case 0x32d780u: goto label_32d780;
        case 0x32d784u: goto label_32d784;
        case 0x32d788u: goto label_32d788;
        case 0x32d78cu: goto label_32d78c;
        case 0x32d790u: goto label_32d790;
        case 0x32d794u: goto label_32d794;
        case 0x32d798u: goto label_32d798;
        case 0x32d79cu: goto label_32d79c;
        case 0x32d7a0u: goto label_32d7a0;
        case 0x32d7a4u: goto label_32d7a4;
        case 0x32d7a8u: goto label_32d7a8;
        case 0x32d7acu: goto label_32d7ac;
        case 0x32d7b0u: goto label_32d7b0;
        case 0x32d7b4u: goto label_32d7b4;
        case 0x32d7b8u: goto label_32d7b8;
        case 0x32d7bcu: goto label_32d7bc;
        case 0x32d7c0u: goto label_32d7c0;
        case 0x32d7c4u: goto label_32d7c4;
        case 0x32d7c8u: goto label_32d7c8;
        case 0x32d7ccu: goto label_32d7cc;
        case 0x32d7d0u: goto label_32d7d0;
        case 0x32d7d4u: goto label_32d7d4;
        case 0x32d7d8u: goto label_32d7d8;
        case 0x32d7dcu: goto label_32d7dc;
        case 0x32d7e0u: goto label_32d7e0;
        case 0x32d7e4u: goto label_32d7e4;
        case 0x32d7e8u: goto label_32d7e8;
        case 0x32d7ecu: goto label_32d7ec;
        case 0x32d7f0u: goto label_32d7f0;
        case 0x32d7f4u: goto label_32d7f4;
        case 0x32d7f8u: goto label_32d7f8;
        case 0x32d7fcu: goto label_32d7fc;
        case 0x32d800u: goto label_32d800;
        case 0x32d804u: goto label_32d804;
        case 0x32d808u: goto label_32d808;
        case 0x32d80cu: goto label_32d80c;
        case 0x32d810u: goto label_32d810;
        case 0x32d814u: goto label_32d814;
        case 0x32d818u: goto label_32d818;
        case 0x32d81cu: goto label_32d81c;
        case 0x32d820u: goto label_32d820;
        case 0x32d824u: goto label_32d824;
        case 0x32d828u: goto label_32d828;
        case 0x32d82cu: goto label_32d82c;
        case 0x32d830u: goto label_32d830;
        case 0x32d834u: goto label_32d834;
        case 0x32d838u: goto label_32d838;
        case 0x32d83cu: goto label_32d83c;
        case 0x32d840u: goto label_32d840;
        case 0x32d844u: goto label_32d844;
        case 0x32d848u: goto label_32d848;
        case 0x32d84cu: goto label_32d84c;
        case 0x32d850u: goto label_32d850;
        case 0x32d854u: goto label_32d854;
        case 0x32d858u: goto label_32d858;
        case 0x32d85cu: goto label_32d85c;
        case 0x32d860u: goto label_32d860;
        case 0x32d864u: goto label_32d864;
        default: break;
    }

    ctx->pc = 0x32d720u;

label_32d720:
    // 0x32d720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32d720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_32d724:
    // 0x32d724: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32d724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_32d728:
    // 0x32d728: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32d728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32d72c:
    // 0x32d72c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32d72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_32d730:
    // 0x32d730: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32d730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_32d734:
    // 0x32d734: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
label_32d738:
    if (ctx->pc == 0x32D738u) {
        ctx->pc = 0x32D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D734u;
        // 0x32d738: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D73Cu;
        goto label_32d73c;
    }
    ctx->pc = 0x32D734u;
    {
        const bool branch_taken_0x32d734 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x32D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D734u;
        // 0x32d738: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d734) {
            ctx->pc = 0x32D760u;
            goto label_32d760;
        }
    }
    ctx->pc = 0x32D73Cu;
label_32d73c:
    // 0x32d73c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32d73cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_32d740:
    // 0x32d740: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32d740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32d744:
    // 0x32d744: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32d744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_32d748:
    // 0x32d748: 0x248429f8  addiu       $a0, $a0, 0x29F8
    ctx->pc = 0x32d748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10744));
label_32d74c:
    // 0x32d74c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32d74cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32d750:
    // 0x32d750: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32d750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_32d754:
    // 0x32d754: 0x80cff2c  j           func_33FCB0
label_32d758:
    if (ctx->pc == 0x32D758u) {
        ctx->pc = 0x32D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D754u;
        // 0x32d758: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D75Cu;
        goto label_32d75c;
    }
    ctx->pc = 0x32D754u;
    ctx->pc = 0x32D758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D754u;
    // 0x32d758: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCB0u, 0x32D754u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32D75Cu;
label_32d75c:
    // 0x32d75c: 0x0  nop
    ctx->pc = 0x32d75cu;
    // NOP
label_32d760:
    // 0x32d760: 0xc0cb6e8  jal         func_32DBA0
label_32d764:
    if (ctx->pc == 0x32D764u) {
        ctx->pc = 0x32D768u;
        goto label_32d768;
    }
    ctx->pc = 0x32D760u;
    SET_GPR_U32(ctx, 31, 0x32D768u);
    ctx->pc = 0x32DBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DBA0u, 0x32D760u, 0x32D768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D768u;
label_32d768:
    // 0x32d768: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x32d768u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_32d76c:
    // 0x32d76c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_32d770:
    if (ctx->pc == 0x32D770u) {
        ctx->pc = 0x32D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D76Cu;
        // 0x32d770: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D774u;
        goto label_32d774;
    }
    ctx->pc = 0x32D76Cu;
    {
        const bool branch_taken_0x32d76c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D76Cu;
        // 0x32d770: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d76c) {
            ctx->pc = 0x32D78Cu;
            goto label_32d78c;
        }
    }
    ctx->pc = 0x32D774u;
label_32d774:
    // 0x32d774: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x32d774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_32d778:
    // 0x32d778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32d778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32d77c:
    // 0x32d77c: 0xc0ca0fa  jal         func_3283E8
label_32d780:
    if (ctx->pc == 0x32D780u) {
        ctx->pc = 0x32D780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D77Cu;
        // 0x32d780: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D784u;
        goto label_32d784;
    }
    ctx->pc = 0x32D77Cu;
    SET_GPR_U32(ctx, 31, 0x32D784u);
    ctx->pc = 0x32D780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D77Cu;
    // 0x32d780: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3283E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3283E8u, 0x32D77Cu, 0x32D784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D784u;
label_32d784:
    // 0x32d784: 0xc0c9f64  jal         func_327D90
label_32d788:
    if (ctx->pc == 0x32D788u) {
        ctx->pc = 0x32D788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D784u;
        // 0x32d788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D78Cu;
        goto label_32d78c;
    }
    ctx->pc = 0x32D784u;
    SET_GPR_U32(ctx, 31, 0x32D78Cu);
    ctx->pc = 0x32D788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D784u;
    // 0x32d788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327D90u, 0x32D784u, 0x32D78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D78Cu;
label_32d78c:
    // 0x32d78c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x32d78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_32d790:
    // 0x32d790: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_32d794:
    if (ctx->pc == 0x32D794u) {
        ctx->pc = 0x32D798u;
        goto label_32d798;
    }
    ctx->pc = 0x32D790u;
    {
        const bool branch_taken_0x32d790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d790) {
            ctx->pc = 0x32D7A0u;
            goto label_32d7a0;
        }
    }
    ctx->pc = 0x32D798u;
label_32d798:
    // 0x32d798: 0xc0cbba2  jal         func_32EE88
label_32d79c:
    if (ctx->pc == 0x32D79Cu) {
        ctx->pc = 0x32D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D798u;
        // 0x32d79c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D7A0u;
        goto label_32d7a0;
    }
    ctx->pc = 0x32D798u;
    SET_GPR_U32(ctx, 31, 0x32D7A0u);
    ctx->pc = 0x32D79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D798u;
    // 0x32d79c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EE88u, 0x32D798u, 0x32D7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D7A0u;
label_32d7a0:
    // 0x32d7a0: 0xc0cff1c  jal         func_33FC70
label_32d7a4:
    if (ctx->pc == 0x32D7A4u) {
        ctx->pc = 0x32D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D7A0u;
        // 0x32d7a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D7A8u;
        goto label_32d7a8;
    }
    ctx->pc = 0x32D7A0u;
    SET_GPR_U32(ctx, 31, 0x32D7A8u);
    ctx->pc = 0x32D7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D7A0u;
    // 0x32d7a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC70u, 0x32D7A0u, 0x32D7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D7A8u;
label_32d7a8:
    // 0x32d7a8: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x32d7a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_32d7ac:
    // 0x32d7ac: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_32d7b0:
    if (ctx->pc == 0x32D7B0u) {
        ctx->pc = 0x32D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D7ACu;
        // 0x32d7b0: 0x92250003  lbu         $a1, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D7B4u;
        goto label_32d7b4;
    }
    ctx->pc = 0x32D7ACu;
    {
        const bool branch_taken_0x32d7ac = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x32D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D7ACu;
        // 0x32d7b0: 0x92250003  lbu         $a1, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d7ac) {
            ctx->pc = 0x32D7F4u;
            goto label_32d7f4;
        }
    }
    ctx->pc = 0x32D7B4u;
label_32d7b4:
    // 0x32d7b4: 0x26300094  addiu       $s0, $s1, 0x94
    ctx->pc = 0x32d7b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
label_32d7b8:
    // 0x32d7b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32d7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32d7bc:
    // 0x32d7bc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_32d7c0:
    if (ctx->pc == 0x32D7C0u) {
        ctx->pc = 0x32D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D7BCu;
        // 0x32d7c0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D7C4u;
        goto label_32d7c4;
    }
    ctx->pc = 0x32D7BCu;
    {
        const bool branch_taken_0x32d7bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D7BCu;
        // 0x32d7c0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d7bc) {
            ctx->pc = 0x32D7DCu;
            goto label_32d7dc;
        }
    }
    ctx->pc = 0x32D7C4u;
label_32d7c4:
    // 0x32d7c4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x32d7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32d7c8:
    // 0x32d7c8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x32d7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_32d7cc:
    // 0x32d7cc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x32d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_32d7d0:
    // 0x32d7d0: 0x40f809  jalr        $v0
label_32d7d4:
    if (ctx->pc == 0x32D7D4u) {
        ctx->pc = 0x32D7D8u;
        goto label_32d7d8;
    }
    ctx->pc = 0x32D7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32D7D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D7D0u, 0x32D7D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32D7D8u;
label_32d7d8:
    // 0x32d7d8: 0x92250003  lbu         $a1, 0x3($s1)
    ctx->pc = 0x32d7d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_32d7dc:
    // 0x32d7dc: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x32d7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_32d7e0:
    // 0x32d7e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x32d7e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_32d7e4:
    // 0x32d7e4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x32d7e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_32d7e8:
    // 0x32d7e8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x32d7e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_32d7ec:
    // 0x32d7ec: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_32d7f0:
    if (ctx->pc == 0x32D7F0u) {
        ctx->pc = 0x32D7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D7ECu;
        // 0x32d7f0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D7F4u;
        goto label_32d7f4;
    }
    ctx->pc = 0x32D7ECu;
    {
        const bool branch_taken_0x32d7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32D7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D7ECu;
        // 0x32d7f0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d7ec) {
            ctx->pc = 0x32D7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32d7b8;
        }
    }
    ctx->pc = 0x32D7F4u;
label_32d7f4:
    // 0x32d7f4: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x32d7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_32d7f8:
    // 0x32d7f8: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_32d7fc:
    if (ctx->pc == 0x32D7FCu) {
        ctx->pc = 0x32D7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D7F8u;
        // 0x32d7fc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D800u;
        goto label_32d800;
    }
    ctx->pc = 0x32D7F8u;
    {
        const bool branch_taken_0x32d7f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d7f8) {
            ctx->pc = 0x32D7FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D7F8u;
            // 0x32d7fc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D818u;
            goto label_32d818;
        }
    }
    ctx->pc = 0x32D800u;
label_32d800:
    // 0x32d800: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x32d800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32d804:
    // 0x32d804: 0xae20008c  sw          $zero, 0x8C($s1)
    ctx->pc = 0x32d804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
label_32d808:
    // 0x32d808: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x32d808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_32d80c:
    // 0x32d80c: 0x40f809  jalr        $v0
label_32d810:
    if (ctx->pc == 0x32D810u) {
        ctx->pc = 0x32D814u;
        goto label_32d814;
    }
    ctx->pc = 0x32D80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32D814u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D80Cu, 0x32D814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32D814u;
label_32d814:
    // 0x32d814: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x32d814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32d818:
    // 0x32d818: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_32d81c:
    if (ctx->pc == 0x32D81Cu) {
        ctx->pc = 0x32D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D818u;
        // 0x32d81c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D820u;
        goto label_32d820;
    }
    ctx->pc = 0x32D818u;
    {
        const bool branch_taken_0x32d818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d818) {
            ctx->pc = 0x32D81Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D818u;
            // 0x32d81c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D82Cu;
            goto label_32d82c;
        }
    }
    ctx->pc = 0x32D820u;
label_32d820:
    // 0x32d820: 0xc0cbd0a  jal         func_32F428
label_32d824:
    if (ctx->pc == 0x32D824u) {
        ctx->pc = 0x32D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D820u;
        // 0x32d824: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D828u;
        goto label_32d828;
    }
    ctx->pc = 0x32D820u;
    SET_GPR_U32(ctx, 31, 0x32D828u);
    ctx->pc = 0x32D824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D820u;
    // 0x32d824: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F428u, 0x32D820u, 0x32D828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D828u;
label_32d828:
    // 0x32d828: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32d828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32d82c:
    // 0x32d82c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32d82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32d830:
    // 0x32d830: 0xc0e94bc  jal         func_3A52F0
label_32d834:
    if (ctx->pc == 0x32D834u) {
        ctx->pc = 0x32D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D830u;
        // 0x32d834: 0x24060278  addiu       $a2, $zero, 0x278 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D838u;
        goto label_32d838;
    }
    ctx->pc = 0x32D830u;
    SET_GPR_U32(ctx, 31, 0x32D838u);
    ctx->pc = 0x32D834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D830u;
    // 0x32d834: 0x24060278  addiu       $a2, $zero, 0x278 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x32D830u, 0x32D838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D838u;
label_32d838:
    // 0x32d838: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x32d838u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_32d83c:
    // 0x32d83c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32d83cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32d840:
    // 0x32d840: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32d840u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_32d844:
    // 0x32d844: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32d844u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32d848:
    // 0x32d848: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32d848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_32d84c:
    // 0x32d84c: 0x80cff22  j           func_33FC88
label_32d850:
    if (ctx->pc == 0x32D850u) {
        ctx->pc = 0x32D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D84Cu;
        // 0x32d850: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D854u;
        goto label_32d854;
    }
    ctx->pc = 0x32D84Cu;
    ctx->pc = 0x32D850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D84Cu;
    // 0x32d850: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC88u, 0x32D84Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32D854u;
label_32d854:
    // 0x32d854: 0x0  nop
    ctx->pc = 0x32d854u;
    // NOP
label_32d858:
    // 0x32d858: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x32d858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32d85c:
    // 0x32d85c: 0x0  nop
    ctx->pc = 0x32d85cu;
    // NOP
label_32d860:
    // 0x32d860: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x32d860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_32d864:
    // 0x32d864: 0x0  nop
    ctx->pc = 0x32d864u;
    // NOP
    ctx->pc = 0x32d868u;
}
