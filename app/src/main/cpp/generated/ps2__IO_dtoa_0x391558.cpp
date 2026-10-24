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

// Function: _IO_dtoa
// Address: 0x391558 - 0x392718
void ps2__IO_dtoa_0x391558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_dtoa_0x391558");
#endif

    switch (ctx->pc) {
        case 0x3915a8u: goto label_3915a8;
        case 0x3915b4u: goto label_3915b4;
        case 0x3915c4u: goto label_3915c4;
        case 0x3916c4u: goto label_3916c4;
        case 0x39170cu: goto label_39170c;
        case 0x3917c8u: goto label_3917c8;
        case 0x3917e0u: goto label_3917e0;
        case 0x391828u: goto label_391828;
        case 0x391838u: goto label_391838;
        case 0x391848u: goto label_391848;
        case 0x391854u: goto label_391854;
        case 0x391864u: goto label_391864;
        case 0x391870u: goto label_391870;
        case 0x39187cu: goto label_39187c;
        case 0x39188cu: goto label_39188c;
        case 0x39189cu: goto label_39189c;
        case 0x3918a8u: goto label_3918a8;
        case 0x3918e0u: goto label_3918e0;
        case 0x391a28u: goto label_391a28;
        case 0x391a7cu: goto label_391a7c;
        case 0x391a84u: goto label_391a84;
        case 0x391af4u: goto label_391af4;
        case 0x391b08u: goto label_391b08;
        case 0x391b20u: goto label_391b20;
        case 0x391b3cu: goto label_391b3c;
        case 0x391b70u: goto label_391b70;
        case 0x391b80u: goto label_391b80;
        case 0x391b98u: goto label_391b98;
        case 0x391bc4u: goto label_391bc4;
        case 0x391bf4u: goto label_391bf4;
        case 0x391c04u: goto label_391c04;
        case 0x391c10u: goto label_391c10;
        case 0x391c20u: goto label_391c20;
        case 0x391c5cu: goto label_391c5c;
        case 0x391c6cu: goto label_391c6c;
        case 0x391c80u: goto label_391c80;
        case 0x391c8cu: goto label_391c8c;
        case 0x391cd4u: goto label_391cd4;
        case 0x391ce0u: goto label_391ce0;
        case 0x391ce8u: goto label_391ce8;
        case 0x391cf0u: goto label_391cf0;
        case 0x391d00u: goto label_391d00;
        case 0x391d0cu: goto label_391d0c;
        case 0x391d18u: goto label_391d18;
        case 0x391d24u: goto label_391d24;
        case 0x391d40u: goto label_391d40;
        case 0x391d58u: goto label_391d58;
        case 0x391d64u: goto label_391d64;
        case 0x391dacu: goto label_391dac;
        case 0x391db8u: goto label_391db8;
        case 0x391dccu: goto label_391dcc;
        case 0x391dd8u: goto label_391dd8;
        case 0x391de4u: goto label_391de4;
        case 0x391df0u: goto label_391df0;
        case 0x391e18u: goto label_391e18;
        case 0x391e24u: goto label_391e24;
        case 0x391e3cu: goto label_391e3c;
        case 0x391e48u: goto label_391e48;
        case 0x391e50u: goto label_391e50;
        case 0x391ed8u: goto label_391ed8;
        case 0x391ee4u: goto label_391ee4;
        case 0x391f00u: goto label_391f00;
        case 0x391f10u: goto label_391f10;
        case 0x391f20u: goto label_391f20;
        case 0x391f34u: goto label_391f34;
        case 0x391f3cu: goto label_391f3c;
        case 0x391f48u: goto label_391f48;
        case 0x391f54u: goto label_391f54;
        case 0x391f60u: goto label_391f60;
        case 0x391f84u: goto label_391f84;
        case 0x391f94u: goto label_391f94;
        case 0x391fa8u: goto label_391fa8;
        case 0x391fd4u: goto label_391fd4;
        case 0x3920a4u: goto label_3920a4;
        case 0x3920bcu: goto label_3920bc;
        case 0x392120u: goto label_392120;
        case 0x392134u: goto label_392134;
        case 0x392154u: goto label_392154;
        case 0x392164u: goto label_392164;
        case 0x392174u: goto label_392174;
        case 0x39218cu: goto label_39218c;
        case 0x392220u: goto label_392220;
        case 0x392294u: goto label_392294;
        case 0x3922a8u: goto label_3922a8;
        case 0x3922c0u: goto label_3922c0;
        case 0x3922dcu: goto label_3922dc;
        case 0x3922f8u: goto label_3922f8;
        case 0x392334u: goto label_392334;
        case 0x392344u: goto label_392344;
        case 0x392388u: goto label_392388;
        case 0x3923a0u: goto label_3923a0;
        case 0x3923b0u: goto label_3923b0;
        case 0x3923c0u: goto label_3923c0;
        case 0x3923ccu: goto label_3923cc;
        case 0x3923e8u: goto label_3923e8;
        case 0x3923f8u: goto label_3923f8;
        case 0x39241cu: goto label_39241c;
        case 0x392434u: goto label_392434;
        case 0x392448u: goto label_392448;
        case 0x39245cu: goto label_39245c;
        case 0x39246cu: goto label_39246c;
        case 0x392480u: goto label_392480;
        case 0x39249cu: goto label_39249c;
        case 0x392514u: goto label_392514;
        case 0x392524u: goto label_392524;
        case 0x3925a0u: goto label_3925a0;
        case 0x3925b4u: goto label_3925b4;
        case 0x3925c4u: goto label_3925c4;
        case 0x3925e8u: goto label_3925e8;
        case 0x3925f8u: goto label_3925f8;
        case 0x392628u: goto label_392628;
        case 0x392668u: goto label_392668;
        case 0x392690u: goto label_392690;
        case 0x392698u: goto label_392698;
        case 0x3926bcu: goto label_3926bc;
        case 0x3926c4u: goto label_3926c4;
        case 0x3926ccu: goto label_3926cc;
        default: break;
    }

    ctx->pc = 0x391558u;

    // 0x391558: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x391558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x39155c: 0xffb401f0  sd          $s4, 0x1F0($sp)
    ctx->pc = 0x39155cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 20));
    // 0x391560: 0xffb001b0  sd          $s0, 0x1B0($sp)
    ctx->pc = 0x391560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 16));
    // 0x391564: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x391564u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391568: 0xffb70220  sd          $s7, 0x220($sp)
    ctx->pc = 0x391568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 23));
    // 0x39156c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x39156cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391570: 0xffb50200  sd          $s5, 0x200($sp)
    ctx->pc = 0x391570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 21));
    // 0x391574: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x391574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391578: 0xffbf0240  sd          $ra, 0x240($sp)
    ctx->pc = 0x391578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 31));
    // 0x39157c: 0x3c15003f  lui         $s5, 0x3F
    ctx->pc = 0x39157cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)63 << 16));
    // 0x391580: 0xffbe0230  sd          $fp, 0x230($sp)
    ctx->pc = 0x391580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 30));
    // 0x391584: 0xffb60210  sd          $s6, 0x210($sp)
    ctx->pc = 0x391584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 22));
    // 0x391588: 0xffb301e0  sd          $s3, 0x1E0($sp)
    ctx->pc = 0x391588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 19));
    // 0x39158c: 0xffb201d0  sd          $s2, 0x1D0($sp)
    ctx->pc = 0x39158cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 18));
    // 0x391590: 0xffb101c0  sd          $s1, 0x1C0($sp)
    ctx->pc = 0x391590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 17));
    // 0x391594: 0xafa50148  sw          $a1, 0x148($sp)
    ctx->pc = 0x391594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 5));
    // 0x391598: 0xafa6014c  sw          $a2, 0x14C($sp)
    ctx->pc = 0x391598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 6));
    // 0x39159c: 0xafa70150  sw          $a3, 0x150($sp)
    ctx->pc = 0x39159cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 7));
    // 0x3915a0: 0xc0e3d30  jal         func_38F4C0
    ctx->pc = 0x3915A0u;
    SET_GPR_U32(ctx, 31, 0x3915A8u);
    ctx->pc = 0x3915A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3915A0u;
    // 0x3915a4: 0xafa90154  sw          $t1, 0x154($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F4C0u, 0x3915A0u, 0x3915A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3915A8u;
label_3915a8:
    // 0x3915a8: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x3915a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
    // 0x3915ac: 0xc0e3d30  jal         func_38F4C0
    ctx->pc = 0x3915ACu;
    SET_GPR_U32(ctx, 31, 0x3915B4u);
    ctx->pc = 0x3915B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3915ACu;
    // 0x3915b0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F4C0u, 0x3915ACu, 0x3915B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3915B4u;
label_3915b4:
    // 0x3915b4: 0xafa00190  sw          $zero, 0x190($sp)
    ctx->pc = 0x3915b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
    // 0x3915b8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3915b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3915bc: 0xc0e3d30  jal         func_38F4C0
    ctx->pc = 0x3915BCu;
    SET_GPR_U32(ctx, 31, 0x3915C4u);
    ctx->pc = 0x3915C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3915BCu;
    // 0x3915c0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F4C0u, 0x3915BCu, 0x3915C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3915C4u;
label_3915c4:
    // 0x3915c4: 0x8ea55178  lw          $a1, 0x5178($s5)
    ctx->pc = 0x3915c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20856)));
    // 0x3915c8: 0xafa00194  sw          $zero, 0x194($sp)
    ctx->pc = 0x3915c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 0));
    // 0x3915cc: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3915CCu;
    {
        const bool branch_taken_0x3915cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3915D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3915CCu;
        // 0x3915d0: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3915cc) {
            ctx->pc = 0x3915F0u;
            goto label_3915f0;
        }
    }
    ctx->pc = 0x3915D4u;
    // 0x3915d4: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x3915d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x3915d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3915d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3915dc: 0x8c44c080  lw          $a0, -0x3F80($v0)
    ctx->pc = 0x3915dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x77C080u));
    // 0x3915e0: 0xa4a0000c  sh          $zero, 0xC($a1)
    ctx->pc = 0x3915e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x3915e4: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x3915e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x3915e8: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x3915e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x3915ec: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x3915ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_3915f0:
    // 0x3915f0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3915f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3915f4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3915f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3915f8: 0x443000e  bgezl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3915F8u;
    {
        const bool branch_taken_0x3915f8 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x3915f8) {
            ctx->pc = 0x3915FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3915F8u;
            // 0x3915fc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x391634u;
            goto label_391634;
        }
    }
    ctx->pc = 0x391600u;
    // 0x391600: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x391600u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391604: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x391604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x391608: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x391608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x39160c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x39160cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x391610: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x391610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x391614: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x391614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391618: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x391618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x39161c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x39161cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x391620: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x391620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x391624: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x391624u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x391628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x391628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39162c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x39162cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x391630: 0x83a025  or          $s4, $a0, $v1
    ctx->pc = 0x391630u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_391634:
    // 0x391634: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x391634u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391638: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x391638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x39163c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x39163cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x391640: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x391640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x391644: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x391644u;
    {
        const bool branch_taken_0x391644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x391648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391644u;
        // 0x391648: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391644) {
            ctx->pc = 0x3916BCu;
            goto label_3916bc;
        }
    }
    ctx->pc = 0x39164Cu;
    // 0x39164c: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x39164cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x391650: 0x2403270f  addiu       $v1, $zero, 0x270F
    ctx->pc = 0x391650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x391654: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x391654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391658: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x391658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x39165c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x39165cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x391660: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x391660u;
    {
        const bool branch_taken_0x391660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391660u;
        // 0x391664: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391660) {
            ctx->pc = 0x3916A0u;
            goto label_3916a0;
        }
    }
    ctx->pc = 0x391668u;
    // 0x391668: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x391668u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39166c: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x39166cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x391670: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x391670u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x391674: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x391674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x391678: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x391678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x39167c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x39167Cu;
    {
        const bool branch_taken_0x39167c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x391680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39167Cu;
        // 0x391680: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39167c) {
            ctx->pc = 0x3916A4u;
            goto label_3916a4;
        }
    }
    ctx->pc = 0x391684u;
    // 0x391684: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x391684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x391688: 0x2455da70  addiu       $s5, $v0, -0x2590
    ctx->pc = 0x391688u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957680));
    // 0x39168c: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x39168cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x391690: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x391690u;
    {
        const bool branch_taken_0x391690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391690u;
        // 0x391694: 0x8fa30154  lw          $v1, 0x154($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391690) {
            ctx->pc = 0x3916F4u;
            goto label_3916f4;
        }
    }
    ctx->pc = 0x391698u;
    // 0x391698: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x391698u;
    {
        const bool branch_taken_0x391698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391698u;
        // 0x39169c: 0x26a20008  addiu       $v0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391698) {
            ctx->pc = 0x3916F0u;
            goto label_3916f0;
        }
    }
    ctx->pc = 0x3916A0u;
label_3916a0:
    // 0x3916a0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3916a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_3916a4:
    // 0x3916a4: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x3916a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x3916a8: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3916A8u;
    {
        const bool branch_taken_0x3916a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3916ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3916A8u;
        // 0x3916ac: 0x2455da80  addiu       $s5, $v0, -0x2580 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3916a8) {
            ctx->pc = 0x3916F4u;
            goto label_3916f4;
        }
    }
    ctx->pc = 0x3916B0u;
    // 0x3916b0: 0x26a20003  addiu       $v0, $s5, 0x3
    ctx->pc = 0x3916b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    // 0x3916b4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3916B4u;
    {
        const bool branch_taken_0x3916b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3916B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3916B4u;
        // 0x3916b8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3916b4) {
            ctx->pc = 0x3916F4u;
            goto label_3916f4;
        }
    }
    ctx->pc = 0x3916BCu;
label_3916bc:
    // 0x3916bc: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3916BCu;
    SET_GPR_U32(ctx, 31, 0x3916C4u);
    ctx->pc = 0x3916C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3916BCu;
    // 0x3916c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3916BCu, 0x3916C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3916C4u;
label_3916c4:
    // 0x3916c4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3916C4u;
    {
        const bool branch_taken_0x3916c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3916C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3916C4u;
        // 0x3916c8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3916c4) {
            ctx->pc = 0x3916FCu;
            goto label_3916fc;
        }
    }
    ctx->pc = 0x3916CCu;
    // 0x3916cc: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x3916ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x3916d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3916d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3916d4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3916d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3916d8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3916d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3916dc: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x3916dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x3916e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3916E0u;
    {
        const bool branch_taken_0x3916e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3916E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3916E0u;
        // 0x3916e4: 0x2475da88  addiu       $s5, $v1, -0x2578 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3916e0) {
            ctx->pc = 0x3916F4u;
            goto label_3916f4;
        }
    }
    ctx->pc = 0x3916E8u;
    // 0x3916e8: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x3916e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x3916ec: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x3916ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3916f0:
    // 0x3916f0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3916f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3916f4:
    // 0x3916f4: 0x100003fc  b           . + 4 + (0x3FC << 2)
    ctx->pc = 0x3916F4u;
    {
        const bool branch_taken_0x3916f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3916F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3916F4u;
        // 0x3916f8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3916f4) {
            ctx->pc = 0x3926E8u;
            goto label_3926e8;
        }
    }
    ctx->pc = 0x3916FCu;
label_3916fc:
    // 0x3916fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3916fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391700: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x391700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x391704: 0xc0e406a  jal         func_3901A8
    ctx->pc = 0x391704u;
    SET_GPR_U32(ctx, 31, 0x39170Cu);
    ctx->pc = 0x391708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391704u;
    // 0x391708: 0x27a70144  addiu       $a3, $sp, 0x144 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3901A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3901A8u, 0x391704u, 0x39170Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39170Cu;
label_39170c:
    // 0x39170c: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x39170cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391710: 0x31d3e  dsrl32      $v1, $v1, 20
    ctx->pc = 0x391710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 20));
    // 0x391714: 0x307307ff  andi        $s3, $v1, 0x7FF
    ctx->pc = 0x391714u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x391718: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x391718u;
    {
        const bool branch_taken_0x391718 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x39171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391718u;
        // 0x39171c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391718) {
            ctx->pc = 0x391768u;
            goto label_391768;
        }
    }
    ctx->pc = 0x391720u;
    // 0x391720: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x391720u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391724: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x391724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x391728: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x391728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x39172c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x39172cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x391730: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x391730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x391734: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x391734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x391738: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x391738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x39173c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x39173cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391740: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x391740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x391744: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x391744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x391748: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x391748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x39174c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x39174cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x391750: 0x2673fc01  addiu       $s3, $s3, -0x3FF
    ctx->pc = 0x391750u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966273));
    // 0x391754: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x391754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x391758: 0xafa00184  sw          $zero, 0x184($sp)
    ctx->pc = 0x391758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 0));
    // 0x39175c: 0xffa20198  sd          $v0, 0x198($sp)
    ctx->pc = 0x39175cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 2));
    // 0x391760: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x391760u;
    {
        const bool branch_taken_0x391760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391760u;
        // 0x391764: 0x8fb20144  lw          $s2, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391760) {
            ctx->pc = 0x391818u;
            goto label_391818;
        }
    }
    ctx->pc = 0x391768u;
label_391768:
    // 0x391768: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x391768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x39176c: 0x8fb20144  lw          $s2, 0x144($sp)
    ctx->pc = 0x39176cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x391770: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x391770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x391774: 0x24b30432  addiu       $s3, $a1, 0x432
    ctx->pc = 0x391774u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 1074));
    // 0x391778: 0x2a620021  slti        $v0, $s3, 0x21
    ctx->pc = 0x391778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x39177c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x39177Cu;
    {
        const bool branch_taken_0x39177c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39177Cu;
        // 0x391780: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39177c) {
            ctx->pc = 0x3917B0u;
            goto label_3917b0;
        }
    }
    ctx->pc = 0x391784u;
    // 0x391784: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x391784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391788: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x391788u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39178c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x39178cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x391790: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x391790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x391794: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x391794u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x391798: 0x24a50412  addiu       $a1, $a1, 0x412
    ctx->pc = 0x391798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1042));
    // 0x39179c: 0x131023  negu        $v0, $s3
    ctx->pc = 0x39179cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x3917a0: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x3917a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x3917a4: 0xa31806  srlv        $v1, $v1, $a1
    ctx->pc = 0x3917a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x3917a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3917A8u;
    {
        const bool branch_taken_0x3917a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3917ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3917A8u;
        // 0x3917ac: 0x838025  or          $s0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3917a8) {
            ctx->pc = 0x3917C0u;
            goto label_3917c0;
        }
    }
    ctx->pc = 0x3917B0u;
label_3917b0:
    // 0x3917b0: 0x131823  negu        $v1, $s3
    ctx->pc = 0x3917b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x3917b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3917b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3917b8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3917b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3917bc: 0x628004  sllv        $s0, $v0, $v1
    ctx->pc = 0x3917bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_3917c0:
    // 0x3917c0: 0xc0c7a30  jal         func_31E8C0
    ctx->pc = 0x3917C0u;
    SET_GPR_U32(ctx, 31, 0x3917C8u);
    ctx->pc = 0x3917C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3917C0u;
    // 0x3917c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C0u, 0x3917C0u, 0x3917C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3917C8u;
label_3917c8:
    // 0x3917c8: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3917C8u;
    {
        const bool branch_taken_0x3917c8 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x3917CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3917C8u;
        // 0x3917cc: 0xffa20198  sd          $v0, 0x198($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3917c8) {
            ctx->pc = 0x3917E4u;
            goto label_3917e4;
        }
    }
    ctx->pc = 0x3917D0u;
    // 0x3917d0: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x3917d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3917d4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3917d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3917d8: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3917D8u;
    SET_GPR_U32(ctx, 31, 0x3917E0u);
    ctx->pc = 0x3917DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3917D8u;
    // 0x3917dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3917D8u, 0x3917E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3917E0u;
label_3917e0:
    // 0x3917e0: 0xffa20198  sd          $v0, 0x198($sp)
    ctx->pc = 0x3917e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 2));
label_3917e4:
    // 0x3917e4: 0xdfa30198  ld          $v1, 0x198($sp)
    ctx->pc = 0x3917e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x3917e8: 0x3c05fe10  lui         $a1, 0xFE10
    ctx->pc = 0x3917e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65040 << 16));
    // 0x3917ec: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3917ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3917f0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3917f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3917f4: 0x2673fbcd  addiu       $s3, $s3, -0x433
    ctx->pc = 0x3917f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966221));
    // 0x3917f8: 0x3103f  dsra32      $v0, $v1, 0
    ctx->pc = 0x3917f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3917fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3917fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x391800: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x391800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x391804: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x391804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x391808: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x391808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39180c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39180cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x391810: 0xafa40184  sw          $a0, 0x184($sp)
    ctx->pc = 0x391810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 4));
    // 0x391814: 0xffa30198  sd          $v1, 0x198($sp)
    ctx->pc = 0x391814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 3));
label_391818:
    // 0x391818: 0x3405ffe0  ori         $a1, $zero, 0xFFE0
    ctx->pc = 0x391818u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
    // 0x39181c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x39181cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x391820: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x391820u;
    SET_GPR_U32(ctx, 31, 0x391828u);
    ctx->pc = 0x391824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391820u;
    // 0x391824: 0xdfa40198  ld          $a0, 0x198($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x391820u, 0x391828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391828u;
label_391828:
    // 0x391828: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x391828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x39182c: 0xdc25da90  ld          $a1, -0x2570($at)
    ctx->pc = 0x39182cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x45DA90u));
    // 0x391830: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x391830u;
    SET_GPR_U32(ctx, 31, 0x391838u);
    ctx->pc = 0x391834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391830u;
    // 0x391834: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x391830u, 0x391838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391838u;
label_391838:
    // 0x391838: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x391838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x39183c: 0xdc25da98  ld          $a1, -0x2568($at)
    ctx->pc = 0x39183cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x45DA98u));
    // 0x391840: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x391840u;
    SET_GPR_U32(ctx, 31, 0x391848u);
    ctx->pc = 0x391844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391840u;
    // 0x391844: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x391840u, 0x391848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391848u;
label_391848:
    // 0x391848: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x391848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39184c: 0xc0c7a30  jal         func_31E8C0
    ctx->pc = 0x39184Cu;
    SET_GPR_U32(ctx, 31, 0x391854u);
    ctx->pc = 0x391850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39184Cu;
    // 0x391850: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C0u, 0x39184Cu, 0x391854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391854u;
label_391854:
    // 0x391854: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x391854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x391858: 0xdc25daa0  ld          $a1, -0x2560($at)
    ctx->pc = 0x391858u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x45DAA0u));
    // 0x39185c: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x39185Cu;
    SET_GPR_U32(ctx, 31, 0x391864u);
    ctx->pc = 0x391860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39185Cu;
    // 0x391860: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x39185Cu, 0x391864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391864u;
label_391864:
    // 0x391864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x391864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391868: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x391868u;
    SET_GPR_U32(ctx, 31, 0x391870u);
    ctx->pc = 0x39186Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391868u;
    // 0x39186c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x391868u, 0x391870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391870u;
label_391870:
    // 0x391870: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x391870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391874: 0xc0c7a5e  jal         func_31E978
    ctx->pc = 0x391874u;
    SET_GPR_U32(ctx, 31, 0x39187Cu);
    ctx->pc = 0x391878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391874u;
    // 0x391878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E978u, 0x391874u, 0x39187Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39187Cu;
label_39187c:
    // 0x39187c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x39187cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391880: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x391880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391884: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x391884u;
    SET_GPR_U32(ctx, 31, 0x39188Cu);
    ctx->pc = 0x391888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391884u;
    // 0x391888: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x391884u, 0x39188Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39188Cu;
label_39188c:
    // 0x39188c: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x39188Cu;
    {
        const bool branch_taken_0x39188c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x391890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39188Cu;
        // 0x391890: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39188c) {
            ctx->pc = 0x3918B4u;
            goto label_3918b4;
        }
    }
    ctx->pc = 0x391894u;
    // 0x391894: 0xc0c7a30  jal         func_31E8C0
    ctx->pc = 0x391894u;
    SET_GPR_U32(ctx, 31, 0x39189Cu);
    ctx->pc = 0x391898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391894u;
    // 0x391898: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C0u, 0x391894u, 0x39189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39189Cu;
label_39189c:
    // 0x39189c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39189cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3918a0: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3918A0u;
    SET_GPR_U32(ctx, 31, 0x3918A8u);
    ctx->pc = 0x3918A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3918A0u;
    // 0x3918a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3918A0u, 0x3918A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3918A8u;
label_3918a8:
    // 0x3918a8: 0x26c3ffff  addiu       $v1, $s6, -0x1
    ctx->pc = 0x3918a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x3918ac: 0x62b00b  movn        $s6, $v1, $v0
    ctx->pc = 0x3918acu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 3));
    // 0x3918b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3918b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3918b4:
    // 0x3918b4: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x3918b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x3918b8: 0x2ec20017  sltiu       $v0, $s6, 0x17
    ctx->pc = 0x3918b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x3918bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3918BCu;
    {
        const bool branch_taken_0x3918bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3918C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3918BCu;
        // 0x3918c0: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3918bc) {
            ctx->pc = 0x3918F0u;
            goto label_3918f0;
        }
    }
    ctx->pc = 0x3918C4u;
    // 0x3918c4: 0x1618c0  sll         $v1, $s6, 3
    ctx->pc = 0x3918c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x3918c8: 0x2442d890  addiu       $v0, $v0, -0x2770
    ctx->pc = 0x3918c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957200));
    // 0x3918cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3918ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3918d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3918d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3918d4: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x3918d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
    // 0x3918d8: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3918D8u;
    SET_GPR_U32(ctx, 31, 0x3918E0u);
    ctx->pc = 0x3918DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3918D8u;
    // 0x3918dc: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3918D8u, 0x3918E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3918E0u;
label_3918e0:
    // 0x3918e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3918e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3918e4: 0x26c4ffff  addiu       $a0, $s6, -0x1
    ctx->pc = 0x3918e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x3918e8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3918e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3918ec: 0x83b00a  movz        $s6, $a0, $v1
    ctx->pc = 0x3918ecu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 4));
label_3918f0:
    // 0x3918f0: 0x2531023  subu        $v0, $s2, $s3
    ctx->pc = 0x3918f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x3918f4: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x3918f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3918f8: 0x6000003  bltz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3918F8u;
    {
        const bool branch_taken_0x3918f8 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x3918FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3918F8u;
        // 0x3918fc: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3918f8) {
            ctx->pc = 0x391908u;
            goto label_391908;
        }
    }
    ctx->pc = 0x391900u;
    // 0x391900: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x391900u;
    {
        const bool branch_taken_0x391900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391900u;
        // 0x391904: 0xafa00158  sw          $zero, 0x158($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391900) {
            ctx->pc = 0x391914u;
            goto label_391914;
        }
    }
    ctx->pc = 0x391908u;
label_391908:
    // 0x391908: 0x108023  negu        $s0, $s0
    ctx->pc = 0x391908u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x39190c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x39190cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391910: 0xafb00158  sw          $s0, 0x158($sp)
    ctx->pc = 0x391910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 16));
label_391914:
    // 0x391914: 0x6c00005  bltz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x391914u;
    {
        const bool branch_taken_0x391914 = (GPR_S64(ctx, 22) < 0);
        ctx->pc = 0x391918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391914u;
        // 0x391918: 0x8fa30158  lw          $v1, 0x158($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391914) {
            ctx->pc = 0x39192Cu;
            goto label_39192c;
        }
    }
    ctx->pc = 0x39191Cu;
    // 0x39191c: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x39191cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
    // 0x391920: 0x3d6f021  addu        $fp, $fp, $s6
    ctx->pc = 0x391920u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
    // 0x391924: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x391924u;
    {
        const bool branch_taken_0x391924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391924u;
        // 0x391928: 0xafb60178  sw          $s6, 0x178($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391924) {
            ctx->pc = 0x391940u;
            goto label_391940;
        }
    }
    ctx->pc = 0x39192Cu;
label_39192c:
    // 0x39192c: 0x162023  negu        $a0, $s6
    ctx->pc = 0x39192cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
    // 0x391930: 0xafa4015c  sw          $a0, 0x15C($sp)
    ctx->pc = 0x391930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 4));
    // 0x391934: 0x761823  subu        $v1, $v1, $s6
    ctx->pc = 0x391934u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x391938: 0xafa00178  sw          $zero, 0x178($sp)
    ctx->pc = 0x391938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 0));
    // 0x39193c: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x39193cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
label_391940:
    // 0x391940: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x391940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x391944: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x391944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x391948: 0xafa40180  sw          $a0, 0x180($sp)
    ctx->pc = 0x391948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 4));
    // 0x39194c: 0x2c43000a  sltiu       $v1, $v0, 0xA
    ctx->pc = 0x39194cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x391950: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x391950u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x391954: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x391954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x391958: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x391958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x39195c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39195Cu;
    {
        const bool branch_taken_0x39195c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39195Cu;
        // 0x391960: 0x8fa40148  lw          $a0, 0x148($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39195c) {
            ctx->pc = 0x391978u;
            goto label_391978;
        }
    }
    ctx->pc = 0x391964u;
    // 0x391964: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x391964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x391968: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x391968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
    // 0x39196c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x39196cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x391970: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x391970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x391974: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x391974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_391978:
    // 0x391978: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x391978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39197c: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x39197cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x391980: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x391980u;
    {
        const bool branch_taken_0x391980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391980u;
        // 0x391984: 0xafa30174  sw          $v1, 0x174($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391980) {
            ctx->pc = 0x391A08u;
            goto label_391a08;
        }
    }
    ctx->pc = 0x391988u;
    // 0x391988: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x391988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x39198c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x39198cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x391990: 0x2442dab0  addiu       $v0, $v0, -0x2550
    ctx->pc = 0x391990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957744));
    // 0x391994: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x391994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x391998: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x391998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39199c: 0x800008  jr          $a0
    ctx->pc = 0x39199Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3919A4u: goto label_3919a4;
            case 0x3919C0u: goto label_3919c0;
            case 0x3919C4u: goto label_3919c4;
            case 0x3919E4u: goto label_3919e4;
            case 0x3919E8u: goto label_3919e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39199Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3919A4u;
label_3919a4:
    // 0x3919a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3919a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3919a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3919a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3919ac: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x3919acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x3919b0: 0x24130012  addiu       $s3, $zero, 0x12
    ctx->pc = 0x3919b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3919b4: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x3919b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    // 0x3919b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3919B8u;
    {
        const bool branch_taken_0x3919b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3919BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3919B8u;
        // 0x3919bc: 0xafa0014c  sw          $zero, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3919b8) {
            ctx->pc = 0x391A08u;
            goto label_391a08;
        }
    }
    ctx->pc = 0x3919C0u;
label_3919c0:
    // 0x3919c0: 0xafa00174  sw          $zero, 0x174($sp)
    ctx->pc = 0x3919c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 0));
label_3919c4:
    // 0x3919c4: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x3919c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x3919c8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3919c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3919cc: 0x4102a  slt         $v0, $zero, $a0
    ctx->pc = 0x3919ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3919d0: 0x82980b  movn        $s3, $a0, $v0
    ctx->pc = 0x3919d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
    // 0x3919d4: 0xafb3014c  sw          $s3, 0x14C($sp)
    ctx->pc = 0x3919d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 19));
    // 0x3919d8: 0xafb30168  sw          $s3, 0x168($sp)
    ctx->pc = 0x3919d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 19));
    // 0x3919dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3919DCu;
    {
        const bool branch_taken_0x3919dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3919E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3919DCu;
        // 0x3919e0: 0xafb30160  sw          $s3, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3919dc) {
            ctx->pc = 0x391A08u;
            goto label_391a08;
        }
    }
    ctx->pc = 0x3919E4u;
label_3919e4:
    // 0x3919e4: 0xafa00174  sw          $zero, 0x174($sp)
    ctx->pc = 0x3919e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 0));
label_3919e8:
    // 0x3919e8: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x3919e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x3919ec: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x3919ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x3919f0: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x3919f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3919f4: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x3919f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x3919f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3919f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3919fc: 0xafb30160  sw          $s3, 0x160($sp)
    ctx->pc = 0x3919fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 19));
    // 0x391a00: 0x13102a  slt         $v0, $zero, $s3
    ctx->pc = 0x391a00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x391a04: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x391a04u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_391a08:
    // 0x391a08: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x391a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x391a0c: 0x3c110078  lui         $s1, 0x78
    ctx->pc = 0x391a0cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)120 << 16));
    // 0x391a10: 0xae22c080  sw          $v0, -0x3F80($s1)
    ctx->pc = 0x391a10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x77C080u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77C080u, _value); } while (0);
    // 0x391a14: 0x2e620034  sltiu       $v0, $s3, 0x34
    ctx->pc = 0x391a14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)52) ? 1 : 0);
    // 0x391a18: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x391A18u;
    {
        const bool branch_taken_0x391a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A18u;
        // 0x391a1c: 0x24100020  addiu       $s0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391a18) {
            ctx->pc = 0x391A50u;
            goto label_391a50;
        }
    }
    ctx->pc = 0x391A20u;
    // 0x391a20: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x391a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x391a24: 0x2c92000f  sltiu       $s2, $a0, 0xF
    ctx->pc = 0x391a24u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_391a28:
    // 0x391a28: 0x8e23c080  lw          $v1, -0x3F80($s1)
    ctx->pc = 0x391a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951040)));
    // 0x391a2c: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x391a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x391a30: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x391a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x391a34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x391a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x391a38: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x391a38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x391a3c: 0xae23c080  sw          $v1, -0x3F80($s1)
    ctx->pc = 0x391a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294951040), GPR_U32(ctx, 3));
    // 0x391a40: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x391A40u;
    {
        const bool branch_taken_0x391a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x391a40) {
            ctx->pc = 0x391A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_391a28;
        }
    }
    ctx->pc = 0x391A48u;
    // 0x391a48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x391A48u;
    {
        const bool branch_taken_0x391a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A48u;
        // 0x391a4c: 0x8ea45178  lw          $a0, 0x5178($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391a48) {
            ctx->pc = 0x391A5Cu;
            goto label_391a5c;
        }
    }
    ctx->pc = 0x391A50u;
label_391a50:
    // 0x391a50: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x391a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x391a54: 0x2c52000f  sltiu       $s2, $v0, 0xF
    ctx->pc = 0x391a54u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x391a58: 0x8ea45178  lw          $a0, 0x5178($s5)
    ctx->pc = 0x391a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20856)));
label_391a5c:
    // 0x391a5c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x391A5Cu;
    {
        const bool branch_taken_0x391a5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x391A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A5Cu;
        // 0x391a60: 0x8e23c080  lw          $v1, -0x3F80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391a5c) {
            ctx->pc = 0x391A74u;
            goto label_391a74;
        }
    }
    ctx->pc = 0x391A64u;
    // 0x391a64: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x391a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x391a68: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x391a68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x391a6c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x391A6Cu;
    {
        const bool branch_taken_0x391a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x391a6c) {
            ctx->pc = 0x391A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391A6Cu;
            // 0x391a70: 0x8eb55178  lw          $s5, 0x5178($s5) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20856)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x391A90u;
            goto label_391a90;
        }
    }
    ctx->pc = 0x391A74u;
label_391a74:
    // 0x391a74: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x391A74u;
    SET_GPR_U32(ctx, 31, 0x391A7Cu);
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x391A74u, 0x391A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391A7Cu;
label_391a7c:
    // 0x391a7c: 0xc0e3d3a  jal         func_38F4E8
    ctx->pc = 0x391A7Cu;
    SET_GPR_U32(ctx, 31, 0x391A84u);
    ctx->pc = 0x391A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391A7Cu;
    // 0x391a80: 0x8e24c080  lw          $a0, -0x3F80($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951040)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F4E8u, 0x391A7Cu, 0x391A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391A84u;
label_391a84:
    // 0x391a84: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x391a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x391a88: 0xac625178  sw          $v0, 0x5178($v1)
    ctx->pc = 0x391a88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5178u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5178u, _value); } while (0);
    // 0x391a8c: 0x8eb55178  lw          $s5, 0x5178($s5)
    ctx->pc = 0x391a8cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20856)));
label_391a90:
    // 0x391a90: 0x124000fd  beqz        $s2, . + 4 + (0xFD << 2)
    ctx->pc = 0x391A90u;
    {
        const bool branch_taken_0x391a90 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x391A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A90u;
        // 0x391a94: 0xafb501a0  sw          $s5, 0x1A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391a90) {
            ctx->pc = 0x391E88u;
            goto label_391e88;
        }
    }
    ctx->pc = 0x391A98u;
    // 0x391a98: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x391a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x391a9c: 0x108000fa  beqz        $a0, . + 4 + (0xFA << 2)
    ctx->pc = 0x391A9Cu;
    {
        const bool branch_taken_0x391a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x391AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A9Cu;
        // 0x391aa0: 0x8fa20160  lw          $v0, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391a9c) {
            ctx->pc = 0x391E88u;
            goto label_391e88;
        }
    }
    ctx->pc = 0x391AA4u;
    // 0x391aa4: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x391aa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x391aa8: 0xffb40198  sd          $s4, 0x198($sp)
    ctx->pc = 0x391aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 20));
    // 0x391aac: 0xafb6016c  sw          $s6, 0x16C($sp)
    ctx->pc = 0x391aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 22));
    // 0x391ab0: 0x1ac00024  blez        $s6, . + 4 + (0x24 << 2)
    ctx->pc = 0x391AB0u;
    {
        const bool branch_taken_0x391ab0 = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x391AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391AB0u;
        // 0x391ab4: 0xafa20164  sw          $v0, 0x164($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391ab0) {
            ctx->pc = 0x391B44u;
            goto label_391b44;
        }
    }
    ctx->pc = 0x391AB8u;
    // 0x391ab8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x391ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x391abc: 0x32c3000f  andi        $v1, $s6, 0xF
    ctx->pc = 0x391abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)15);
    // 0x391ac0: 0x2442d890  addiu       $v0, $v0, -0x2770
    ctx->pc = 0x391ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957200));
    // 0x391ac4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x391ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x391ac8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x391ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x391acc: 0x168103  sra         $s0, $s6, 4
    ctx->pc = 0x391accu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 22), 4));
    // 0x391ad0: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x391ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x391ad4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x391AD4u;
    {
        const bool branch_taken_0x391ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391AD4u;
        // 0x391ad8: 0xdc710000  ld          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391ad4) {
            ctx->pc = 0x391AF8u;
            goto label_391af8;
        }
    }
    ctx->pc = 0x391ADCu;
    // 0x391adc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x391adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x391ae0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x391ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391ae4: 0xdc45d968  ld          $a1, -0x2698($v0)
    ctx->pc = 0x391ae4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x45D968u));
    // 0x391ae8: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x391ae8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x391aec: 0xc0c797c  jal         func_31E5F0
    ctx->pc = 0x391AECu;
    SET_GPR_U32(ctx, 31, 0x391AF4u);
    ctx->pc = 0x391AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391AECu;
    // 0x391af0: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E5F0u, 0x391AECu, 0x391AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391AF4u;
label_391af4:
    // 0x391af4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x391af4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_391af8:
    // 0x391af8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x391AF8u;
    {
        const bool branch_taken_0x391af8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x391AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391AF8u;
        // 0x391afc: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391af8) {
            ctx->pc = 0x391B30u;
            goto label_391b30;
        }
    }
    ctx->pc = 0x391B00u;
    // 0x391b00: 0x2452d948  addiu       $s2, $v0, -0x26B8
    ctx->pc = 0x391b00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957384));
    // 0x391b04: 0x0  nop
    ctx->pc = 0x391b04u;
    // NOP
label_391b08:
    // 0x391b08: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x391b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x391b0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x391B0Cu;
    {
        const bool branch_taken_0x391b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B0Cu;
        // 0x391b10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391b0c) {
            ctx->pc = 0x391B24u;
            goto label_391b24;
        }
    }
    ctx->pc = 0x391B14u;
    // 0x391b14: 0xde450000  ld          $a1, 0x0($s2)
    ctx->pc = 0x391b14u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x391b18: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x391B18u;
    SET_GPR_U32(ctx, 31, 0x391B20u);
    ctx->pc = 0x391B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391B18u;
    // 0x391b1c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x391B18u, 0x391B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391B20u;
label_391b20:
    // 0x391b20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x391b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_391b24:
    // 0x391b24: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x391b24u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x391b28: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x391B28u;
    {
        const bool branch_taken_0x391b28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x391B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B28u;
        // 0x391b2c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391b28) {
            ctx->pc = 0x391B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_391b08;
        }
    }
    ctx->pc = 0x391B30u;
label_391b30:
    // 0x391b30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x391b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391b34: 0xc0c797c  jal         func_31E5F0
    ctx->pc = 0x391B34u;
    SET_GPR_U32(ctx, 31, 0x391B3Cu);
    ctx->pc = 0x391B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391B34u;
    // 0x391b38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E5F0u, 0x391B34u, 0x391B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391B3Cu;
label_391b3c:
    // 0x391b3c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x391B3Cu;
    {
        const bool branch_taken_0x391b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B3Cu;
        // 0x391b40: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391b3c) {
            ctx->pc = 0x391BA8u;
            goto label_391ba8;
        }
    }
    ctx->pc = 0x391B44u;
label_391b44:
    // 0x391b44: 0x168823  negu        $s1, $s6
    ctx->pc = 0x391b44u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
    // 0x391b48: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x391B48u;
    {
        const bool branch_taken_0x391b48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x391B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B48u;
        // 0x391b4c: 0x3c030046  lui         $v1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391b48) {
            ctx->pc = 0x391BA8u;
            goto label_391ba8;
        }
    }
    ctx->pc = 0x391B50u;
    // 0x391b50: 0x3222000f  andi        $v0, $s1, 0xF
    ctx->pc = 0x391b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x391b54: 0x2463d890  addiu       $v1, $v1, -0x2770
    ctx->pc = 0x391b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957200));
    // 0x391b58: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x391b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x391b5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x391b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x391b60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x391b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391b64: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x391b64u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x391b68: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x391B68u;
    SET_GPR_U32(ctx, 31, 0x391B70u);
    ctx->pc = 0x391B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391B68u;
    // 0x391b6c: 0x118103  sra         $s0, $s1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x391B68u, 0x391B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391B70u;
label_391b70:
    // 0x391b70: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x391B70u;
    {
        const bool branch_taken_0x391b70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x391B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B70u;
        // 0x391b74: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391b70) {
            ctx->pc = 0x391BA8u;
            goto label_391ba8;
        }
    }
    ctx->pc = 0x391B78u;
    // 0x391b78: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x391b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x391b7c: 0x2451d948  addiu       $s1, $v0, -0x26B8
    ctx->pc = 0x391b7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957384));
label_391b80:
    // 0x391b80: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x391b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x391b84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x391B84u;
    {
        const bool branch_taken_0x391b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B84u;
        // 0x391b88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391b84) {
            ctx->pc = 0x391B9Cu;
            goto label_391b9c;
        }
    }
    ctx->pc = 0x391B8Cu;
    // 0x391b8c: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x391b8cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x391b90: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x391B90u;
    SET_GPR_U32(ctx, 31, 0x391B98u);
    ctx->pc = 0x391B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391B90u;
    // 0x391b94: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x391B90u, 0x391B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391B98u;
label_391b98:
    // 0x391b98: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x391b98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_391b9c:
    // 0x391b9c: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x391b9cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x391ba0: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x391BA0u;
    {
        const bool branch_taken_0x391ba0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x391BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391BA0u;
        // 0x391ba4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391ba0) {
            ctx->pc = 0x391B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_391b80;
        }
    }
    ctx->pc = 0x391BA8u;
label_391ba8:
    // 0x391ba8: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x391ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x391bac: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x391BACu;
    {
        const bool branch_taken_0x391bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x391bac) {
            ctx->pc = 0x391BFCu;
            goto label_391bfc;
        }
    }
    ctx->pc = 0x391BB4u;
    // 0x391bb4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x391bb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x391bb8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x391bb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x391bbc: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x391BBCu;
    SET_GPR_U32(ctx, 31, 0x391BC4u);
    ctx->pc = 0x391BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391BBCu;
    // 0x391bc0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x391BBCu, 0x391BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391BC4u;
label_391bc4:
    // 0x391bc4: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x391BC4u;
    {
        const bool branch_taken_0x391bc4 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x391bc4) {
            ctx->pc = 0x391BFCu;
            goto label_391bfc;
        }
    }
    ctx->pc = 0x391BCCu;
    // 0x391bcc: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x391bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x391bd0: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x391BD0u;
    {
        const bool branch_taken_0x391bd0 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x391BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391BD0u;
        // 0x391bd4: 0x8fa20168  lw          $v0, 0x168($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391bd0) {
            ctx->pc = 0x391BFCu;
            goto label_391bfc;
        }
    }
    ctx->pc = 0x391BD8u;
    // 0x391bd8: 0x184000a6  blez        $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x391BD8u;
    {
        const bool branch_taken_0x391bd8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x391BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391BD8u;
        // 0x391bdc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391bd8) {
            ctx->pc = 0x391E74u;
            goto label_391e74;
        }
    }
    ctx->pc = 0x391BE0u;
    // 0x391be0: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x391be0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x391be4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x391be4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x391be8: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x391be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x391bec: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x391BECu;
    SET_GPR_U32(ctx, 31, 0x391BF4u);
    ctx->pc = 0x391BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391BECu;
    // 0x391bf0: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x391BECu, 0x391BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391BF4u;
label_391bf4:
    // 0x391bf4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x391bf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x391bf8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x391bf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_391bfc:
    // 0x391bfc: 0xc0c7a30  jal         func_31E8C0
    ctx->pc = 0x391BFCu;
    SET_GPR_U32(ctx, 31, 0x391C04u);
    ctx->pc = 0x391C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391BFCu;
    // 0x391c00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C0u, 0x391BFCu, 0x391C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391C04u;
label_391c04:
    // 0x391c04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x391c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391c08: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x391C08u;
    SET_GPR_U32(ctx, 31, 0x391C10u);
    ctx->pc = 0x391C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391C08u;
    // 0x391c0c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x391C08u, 0x391C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391C10u;
label_391c10:
    // 0x391c10: 0x34058038  ori         $a1, $zero, 0x8038
    ctx->pc = 0x391c10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32824);
    // 0x391c14: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x391c14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x391c18: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x391C18u;
    SET_GPR_U32(ctx, 31, 0x391C20u);
    ctx->pc = 0x391C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391C18u;
    // 0x391c1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x391C18u, 0x391C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391C20u;
label_391c20:
    // 0x391c20: 0x2183f  dsra32      $v1, $v0, 0
    ctx->pc = 0x391c20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x391c24: 0x3c05fcc0  lui         $a1, 0xFCC0
    ctx->pc = 0x391c24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64704 << 16));
    // 0x391c28: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x391c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x391c2c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x391c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x391c30: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x391c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x391c34: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x391c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x391c38: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x391c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x391c3c: 0x438825  or          $s1, $v0, $v1
    ctx->pc = 0x391c3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x391c40: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x391c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x391c44: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x391C44u;
    {
        const bool branch_taken_0x391c44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x391C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C44u;
        // 0x391c48: 0x8fa40174  lw          $a0, 0x174($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391c44) {
            ctx->pc = 0x391C9Cu;
            goto label_391c9c;
        }
    }
    ctx->pc = 0x391C4Cu;
    // 0x391c4c: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x391c4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x391c50: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x391c50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x391c54: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x391C54u;
    SET_GPR_U32(ctx, 31, 0x391C5Cu);
    ctx->pc = 0x391C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391C54u;
    // 0x391c58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x391C54u, 0x391C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391C5Cu;
label_391c5c:
    // 0x391c5c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x391c5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391c60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x391c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391c64: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x391C64u;
    SET_GPR_U32(ctx, 31, 0x391C6Cu);
    ctx->pc = 0x391C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391C64u;
    // 0x391c68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x391C64u, 0x391C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391C6Cu;
label_391c6c:
    // 0x391c6c: 0x1c4001bb  bgtz        $v0, . + 4 + (0x1BB << 2)
    ctx->pc = 0x391C6Cu;
    {
        const bool branch_taken_0x391c6c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x391C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C6Cu;
        // 0x391c70: 0x8fa301a0  lw          $v1, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391c6c) {
            ctx->pc = 0x39235Cu;
            goto label_39235c;
        }
    }
    ctx->pc = 0x391C74u;
    // 0x391c74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x391c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391c78: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x391C78u;
    SET_GPR_U32(ctx, 31, 0x391C80u);
    ctx->pc = 0x391C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391C78u;
    // 0x391c7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x391C78u, 0x391C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391C80u;
label_391c80:
    // 0x391c80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x391c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391c84: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x391C84u;
    SET_GPR_U32(ctx, 31, 0x391C8Cu);
    ctx->pc = 0x391C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391C84u;
    // 0x391c88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x391C84u, 0x391C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391C8Cu;
label_391c8c:
    // 0x391c8c: 0x44001af  bltz        $v0, . + 4 + (0x1AF << 2)
    ctx->pc = 0x391C8Cu;
    {
        const bool branch_taken_0x391c8c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x391C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C8Cu;
        // 0x391c90: 0x8fa30164  lw          $v1, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391c8c) {
            ctx->pc = 0x39234Cu;
            goto label_39234c;
        }
    }
    ctx->pc = 0x391C94u;
    // 0x391c94: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x391C94u;
    {
        const bool branch_taken_0x391c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C94u;
        // 0x391c98: 0xdfb40198  ld          $s4, 0x198($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391c94) {
            ctx->pc = 0x391E7Cu;
            goto label_391e7c;
        }
    }
    ctx->pc = 0x391C9Cu;
label_391c9c:
    // 0x391c9c: 0x10800039  beqz        $a0, . + 4 + (0x39 << 2)
    ctx->pc = 0x391C9Cu;
    {
        const bool branch_taken_0x391c9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x391CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C9Cu;
        // 0x391ca0: 0x8fa40160  lw          $a0, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391c9c) {
            ctx->pc = 0x391D84u;
            goto label_391d84;
        }
    }
    ctx->pc = 0x391CA4u;
    // 0x391ca4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x391ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x391ca8: 0x2463d890  addiu       $v1, $v1, -0x2770
    ctx->pc = 0x391ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957200));
    // 0x391cac: 0x34128048  ori         $s2, $zero, 0x8048
    ctx->pc = 0x391cacu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x391cb0: 0x1293fc  dsll32      $s2, $s2, 15
    ctx->pc = 0x391cb0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 15));
    // 0x391cb4: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x391cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x391cb8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x391cb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391cbc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x391cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x391cc0: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x391cc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x391cc4: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x391cc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x391cc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x391cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x391ccc: 0xc0c797c  jal         func_31E5F0
    ctx->pc = 0x391CCCu;
    SET_GPR_U32(ctx, 31, 0x391CD4u);
    ctx->pc = 0x391CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391CCCu;
    // 0x391cd0: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E5F0u, 0x391CCCu, 0x391CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391CD4u;
label_391cd4:
    // 0x391cd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x391cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391cd8: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x391CD8u;
    SET_GPR_U32(ctx, 31, 0x391CE0u);
    ctx->pc = 0x391CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391CD8u;
    // 0x391cdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x391CD8u, 0x391CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391CE0u;
label_391ce0:
    // 0x391ce0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x391CE0u;
    {
        const bool branch_taken_0x391ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391CE0u;
        // 0x391ce4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391ce0) {
            ctx->pc = 0x391D04u;
            goto label_391d04;
        }
    }
    ctx->pc = 0x391CE8u;
label_391ce8:
    // 0x391ce8: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x391CE8u;
    SET_GPR_U32(ctx, 31, 0x391CF0u);
    ctx->pc = 0x391CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391CE8u;
    // 0x391cec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x391CE8u, 0x391CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391CF0u;
label_391cf0:
    // 0x391cf0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x391cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391cf4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x391cf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391cf8: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x391CF8u;
    SET_GPR_U32(ctx, 31, 0x391D00u);
    ctx->pc = 0x391CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391CF8u;
    // 0x391cfc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x391CF8u, 0x391D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391D00u;
label_391d00:
    // 0x391d00: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x391d00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_391d04:
    // 0x391d04: 0xc0c7a5e  jal         func_31E978
    ctx->pc = 0x391D04u;
    SET_GPR_U32(ctx, 31, 0x391D0Cu);
    ctx->pc = 0x391D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391D04u;
    // 0x391d08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E978u, 0x391D04u, 0x391D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391D0Cu;
label_391d0c:
    // 0x391d0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x391d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391d10: 0xc0c7a30  jal         func_31E8C0
    ctx->pc = 0x391D10u;
    SET_GPR_U32(ctx, 31, 0x391D18u);
    ctx->pc = 0x391D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391D10u;
    // 0x391d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C0u, 0x391D10u, 0x391D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391D18u;
label_391d18:
    // 0x391d18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x391d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391d1c: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x391D1Cu;
    SET_GPR_U32(ctx, 31, 0x391D24u);
    ctx->pc = 0x391D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391D1Cu;
    // 0x391d20: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x391D1Cu, 0x391D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391D24u;
label_391d24:
    // 0x391d24: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x391d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x391d28: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x391d28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391d2c: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x391d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x391d30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x391d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391d34: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x391d34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x391d38: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x391D38u;
    SET_GPR_U32(ctx, 31, 0x391D40u);
    ctx->pc = 0x391D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391D38u;
    // 0x391d3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x391D38u, 0x391D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391D40u;
label_391d40:
    // 0x391d40: 0x4420260  bltzl       $v0, . + 4 + (0x260 << 2)
    ctx->pc = 0x391D40u;
    {
        const bool branch_taken_0x391d40 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x391d40) {
            ctx->pc = 0x391D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391D40u;
            // 0x391d44: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3926C4u;
            goto label_3926c4;
        }
    }
    ctx->pc = 0x391D48u;
    // 0x391d48: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x391d48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x391d4c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x391d4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x391d50: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x391D50u;
    SET_GPR_U32(ctx, 31, 0x391D58u);
    ctx->pc = 0x391D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391D50u;
    // 0x391d54: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x391D50u, 0x391D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391D58u;
label_391d58:
    // 0x391d58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x391d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391d5c: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x391D5Cu;
    SET_GPR_U32(ctx, 31, 0x391D64u);
    ctx->pc = 0x391D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391D5Cu;
    // 0x391d60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x391D5Cu, 0x391D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391D64u;
label_391d64:
    // 0x391d64: 0x4400096  bltz        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x391D64u;
    {
        const bool branch_taken_0x391d64 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x391D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391D64u;
        // 0x391d68: 0x8fa30160  lw          $v1, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391d64) {
            ctx->pc = 0x391FC0u;
            goto label_391fc0;
        }
    }
    ctx->pc = 0x391D6Cu;
    // 0x391d6c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x391d6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x391d70: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x391d70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x391d74: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x391D74u;
    {
        const bool branch_taken_0x391d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391D74u;
        // 0x391d78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391d74) {
            ctx->pc = 0x391CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_391ce8;
        }
    }
    ctx->pc = 0x391D7Cu;
    // 0x391d7c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x391D7Cu;
    {
        const bool branch_taken_0x391d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391D7Cu;
        // 0x391d80: 0x8fa30164  lw          $v1, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391d7c) {
            ctx->pc = 0x391E78u;
            goto label_391e78;
        }
    }
    ctx->pc = 0x391D84u;
label_391d84:
    // 0x391d84: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x391d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x391d88: 0x2463d890  addiu       $v1, $v1, -0x2770
    ctx->pc = 0x391d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957200));
    // 0x391d8c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x391d8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x391d90: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x391d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x391d94: 0x24120030  addiu       $s2, $zero, 0x30
    ctx->pc = 0x391d94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x391d98: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x391d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x391d9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x391d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391da0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x391da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x391da4: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x391DA4u;
    SET_GPR_U32(ctx, 31, 0x391DACu);
    ctx->pc = 0x391DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391DA4u;
    // 0x391da8: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x391DA4u, 0x391DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391DACu;
label_391dac:
    // 0x391dac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x391DACu;
    {
        const bool branch_taken_0x391dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391DACu;
        // 0x391db0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391dac) {
            ctx->pc = 0x391DD0u;
            goto label_391dd0;
        }
    }
    ctx->pc = 0x391DB4u;
    // 0x391db4: 0x0  nop
    ctx->pc = 0x391db4u;
    // NOP
label_391db8:
    // 0x391db8: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x391db8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x391dbc: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x391dbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x391dc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x391dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391dc4: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x391DC4u;
    SET_GPR_U32(ctx, 31, 0x391DCCu);
    ctx->pc = 0x391DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391DC4u;
    // 0x391dc8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x391DC4u, 0x391DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391DCCu;
label_391dcc:
    // 0x391dcc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x391dccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_391dd0:
    // 0x391dd0: 0xc0c7a5e  jal         func_31E978
    ctx->pc = 0x391DD0u;
    SET_GPR_U32(ctx, 31, 0x391DD8u);
    ctx->pc = 0x391DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391DD0u;
    // 0x391dd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E978u, 0x391DD0u, 0x391DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391DD8u;
label_391dd8:
    // 0x391dd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x391dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391ddc: 0xc0c7a30  jal         func_31E8C0
    ctx->pc = 0x391DDCu;
    SET_GPR_U32(ctx, 31, 0x391DE4u);
    ctx->pc = 0x391DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391DDCu;
    // 0x391de0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C0u, 0x391DDCu, 0x391DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391DE4u;
label_391de4:
    // 0x391de4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x391de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391de8: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x391DE8u;
    SET_GPR_U32(ctx, 31, 0x391DF0u);
    ctx->pc = 0x391DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391DE8u;
    // 0x391dec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x391DE8u, 0x391DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391DF0u;
label_391df0:
    // 0x391df0: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x391df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x391df4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x391df4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391df8: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x391df8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x391dfc: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x391dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x391e00: 0x1662ffed  bne         $s3, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x391E00u;
    {
        const bool branch_taken_0x391e00 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x391E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E00u;
        // 0x391e04: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391e00) {
            ctx->pc = 0x391DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_391db8;
        }
    }
    ctx->pc = 0x391E08u;
    // 0x391e08: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x391e08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x391e0c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x391e0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x391e10: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x391E10u;
    SET_GPR_U32(ctx, 31, 0x391E18u);
    ctx->pc = 0x391E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391E10u;
    // 0x391e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x391E10u, 0x391E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391E18u;
label_391e18:
    // 0x391e18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x391e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391e1c: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x391E1Cu;
    SET_GPR_U32(ctx, 31, 0x391E24u);
    ctx->pc = 0x391E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391E1Cu;
    // 0x391e20: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x391E1Cu, 0x391E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391E24u;
label_391e24:
    // 0x391e24: 0x5c400067  bgtzl       $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x391E24u;
    {
        const bool branch_taken_0x391e24 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x391e24) {
            ctx->pc = 0x391E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391E24u;
            // 0x391e28: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x391FC4u;
            goto label_391fc4;
        }
    }
    ctx->pc = 0x391E2Cu;
    // 0x391e2c: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x391e2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x391e30: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x391e30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x391e34: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x391E34u;
    SET_GPR_U32(ctx, 31, 0x391E3Cu);
    ctx->pc = 0x391E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391E34u;
    // 0x391e38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x391E34u, 0x391E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391E3Cu;
label_391e3c:
    // 0x391e3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x391e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391e40: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x391E40u;
    SET_GPR_U32(ctx, 31, 0x391E48u);
    ctx->pc = 0x391E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391E40u;
    // 0x391e44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x391E40u, 0x391E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391E48u;
label_391e48:
    // 0x391e48: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x391E48u;
    {
        const bool branch_taken_0x391e48 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x391E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E48u;
        // 0x391e4c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391e48) {
            ctx->pc = 0x391E74u;
            goto label_391e74;
        }
    }
    ctx->pc = 0x391E50u;
label_391e50:
    // 0x391e50: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x391e50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x391e54: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x391e54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x391e58: 0x0  nop
    ctx->pc = 0x391e58u;
    // NOP
    // 0x391e5c: 0x0  nop
    ctx->pc = 0x391e5cu;
    // NOP
    // 0x391e60: 0x0  nop
    ctx->pc = 0x391e60u;
    // NOP
    // 0x391e64: 0x1052fffa  beq         $v0, $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x391E64u;
    {
        const bool branch_taken_0x391e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x391e64) {
            ctx->pc = 0x391E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_391e50;
        }
    }
    ctx->pc = 0x391E6Cu;
    // 0x391e6c: 0x10000215  b           . + 4 + (0x215 << 2)
    ctx->pc = 0x391E6Cu;
    {
        const bool branch_taken_0x391e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E6Cu;
        // 0x391e70: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391e6c) {
            ctx->pc = 0x3926C4u;
            goto label_3926c4;
        }
    }
    ctx->pc = 0x391E74u;
label_391e74:
    // 0x391e74: 0x8fa30164  lw          $v1, 0x164($sp)
    ctx->pc = 0x391e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_391e78:
    // 0x391e78: 0xdfb40198  ld          $s4, 0x198($sp)
    ctx->pc = 0x391e78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 408)));
label_391e7c:
    // 0x391e7c: 0x8fb6016c  lw          $s6, 0x16C($sp)
    ctx->pc = 0x391e7cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x391e80: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x391e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    // 0x391e84: 0x8fb501a0  lw          $s5, 0x1A0($sp)
    ctx->pc = 0x391e84u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_391e88:
    // 0x391e88: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x391e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x391e8c: 0x460005e  bltz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x391E8Cu;
    {
        const bool branch_taken_0x391e8c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x391E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E8Cu;
        // 0x391e90: 0x2ac2000f  slti        $v0, $s6, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x391e8c) {
            ctx->pc = 0x392008u;
            goto label_392008;
        }
    }
    ctx->pc = 0x391E94u;
    // 0x391e94: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x391E94u;
    {
        const bool branch_taken_0x391e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E94u;
        // 0x391e98: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391e94) {
            ctx->pc = 0x392008u;
            goto label_392008;
        }
    }
    ctx->pc = 0x391E9Cu;
    // 0x391e9c: 0x1618c0  sll         $v1, $s6, 3
    ctx->pc = 0x391e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x391ea0: 0x2442d890  addiu       $v0, $v0, -0x2770
    ctx->pc = 0x391ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957200));
    // 0x391ea4: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x391ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x391ea8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x391ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x391eac: 0x4810011  bgez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x391EACu;
    {
        const bool branch_taken_0x391eac = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x391EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391EACu;
        // 0x391eb0: 0xdc710000  ld          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391eac) {
            ctx->pc = 0x391EF4u;
            goto label_391ef4;
        }
    }
    ctx->pc = 0x391EB4u;
    // 0x391eb4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x391eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x391eb8: 0x1c40000f  bgtz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x391EB8u;
    {
        const bool branch_taken_0x391eb8 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x391EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391EB8u;
        // 0x391ebc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391eb8) {
            ctx->pc = 0x391EF8u;
            goto label_391ef8;
        }
    }
    ctx->pc = 0x391EC0u;
    // 0x391ec0: 0x4420124  bltzl       $v0, . + 4 + (0x124 << 2)
    ctx->pc = 0x391EC0u;
    {
        const bool branch_taken_0x391ec0 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x391ec0) {
            ctx->pc = 0x391EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391EC0u;
            // 0x391ec4: 0x4b027  nor         $s6, $zero, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 22, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392354u;
            goto label_392354;
        }
    }
    ctx->pc = 0x391EC8u;
    // 0x391ec8: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x391ec8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x391ecc: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x391eccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x391ed0: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x391ED0u;
    SET_GPR_U32(ctx, 31, 0x391ED8u);
    ctx->pc = 0x391ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391ED0u;
    // 0x391ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x391ED0u, 0x391ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391ED8u;
label_391ed8:
    // 0x391ed8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x391ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391edc: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x391EDCu;
    SET_GPR_U32(ctx, 31, 0x391EE4u);
    ctx->pc = 0x391EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391EDCu;
    // 0x391ee0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x391EDCu, 0x391EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391EE4u;
label_391ee4:
    // 0x391ee4: 0x18400119  blez        $v0, . + 4 + (0x119 << 2)
    ctx->pc = 0x391EE4u;
    {
        const bool branch_taken_0x391ee4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x391EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391EE4u;
        // 0x391ee8: 0x8fa301a0  lw          $v1, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391ee4) {
            ctx->pc = 0x39234Cu;
            goto label_39234c;
        }
    }
    ctx->pc = 0x391EECu;
    // 0x391eec: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x391EECu;
    {
        const bool branch_taken_0x391eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391EECu;
        // 0x391ef0: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391eec) {
            ctx->pc = 0x392360u;
            goto label_392360;
        }
    }
    ctx->pc = 0x391EF4u;
label_391ef4:
    // 0x391ef4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x391ef4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_391ef8:
    // 0x391ef8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x391EF8u;
    {
        const bool branch_taken_0x391ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391EF8u;
        // 0x391efc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391ef8) {
            ctx->pc = 0x391F28u;
            goto label_391f28;
        }
    }
    ctx->pc = 0x391F00u;
label_391f00:
    // 0x391f00: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x391f00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x391f04: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x391f04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x391f08: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x391F08u;
    SET_GPR_U32(ctx, 31, 0x391F10u);
    ctx->pc = 0x391F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391F08u;
    // 0x391f0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x391F08u, 0x391F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391F10u;
label_391f10:
    // 0x391f10: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x391f10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391f14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x391f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391f18: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x391F18u;
    SET_GPR_U32(ctx, 31, 0x391F20u);
    ctx->pc = 0x391F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391F18u;
    // 0x391f1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x391F18u, 0x391F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391F20u;
label_391f20:
    // 0x391f20: 0x104001e8  beqz        $v0, . + 4 + (0x1E8 << 2)
    ctx->pc = 0x391F20u;
    {
        const bool branch_taken_0x391f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F20u;
        // 0x391f24: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391f20) {
            ctx->pc = 0x3926C4u;
            goto label_3926c4;
        }
    }
    ctx->pc = 0x391F28u;
label_391f28:
    // 0x391f28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x391f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391f2c: 0xc0c797c  jal         func_31E5F0
    ctx->pc = 0x391F2Cu;
    SET_GPR_U32(ctx, 31, 0x391F34u);
    ctx->pc = 0x391F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391F2Cu;
    // 0x391f30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E5F0u, 0x391F2Cu, 0x391F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391F34u;
label_391f34:
    // 0x391f34: 0xc0c7a5e  jal         func_31E978
    ctx->pc = 0x391F34u;
    SET_GPR_U32(ctx, 31, 0x391F3Cu);
    ctx->pc = 0x391F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391F34u;
    // 0x391f38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E978u, 0x391F34u, 0x391F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391F3Cu;
label_391f3c:
    // 0x391f3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x391f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391f40: 0xc0c7a30  jal         func_31E8C0
    ctx->pc = 0x391F40u;
    SET_GPR_U32(ctx, 31, 0x391F48u);
    ctx->pc = 0x391F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391F40u;
    // 0x391f44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C0u, 0x391F40u, 0x391F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391F48u;
label_391f48:
    // 0x391f48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x391f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391f4c: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x391F4Cu;
    SET_GPR_U32(ctx, 31, 0x391F54u);
    ctx->pc = 0x391F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391F4Cu;
    // 0x391f50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x391F4Cu, 0x391F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391F54u;
label_391f54:
    // 0x391f54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x391f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391f58: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x391F58u;
    SET_GPR_U32(ctx, 31, 0x391F60u);
    ctx->pc = 0x391F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391F58u;
    // 0x391f5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x391F58u, 0x391F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391F60u;
label_391f60:
    // 0x391f60: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x391f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x391f64: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x391f64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391f68: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x391f68u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x391f6c: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x391f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x391f70: 0x1663ffe3  bne         $s3, $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x391F70u;
    {
        const bool branch_taken_0x391f70 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x391F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F70u;
        // 0x391f74: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391f70) {
            ctx->pc = 0x391F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_391f00;
        }
    }
    ctx->pc = 0x391F78u;
    // 0x391f78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x391f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391f7c: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x391F7Cu;
    SET_GPR_U32(ctx, 31, 0x391F84u);
    ctx->pc = 0x391F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391F7Cu;
    // 0x391f80: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x391F7Cu, 0x391F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391F84u;
label_391f84:
    // 0x391f84: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x391f84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391f88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x391f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391f8c: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x391F8Cu;
    SET_GPR_U32(ctx, 31, 0x391F94u);
    ctx->pc = 0x391F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391F8Cu;
    // 0x391f90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x391F8Cu, 0x391F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391F94u;
label_391f94:
    // 0x391f94: 0x1c40000c  bgtz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x391F94u;
    {
        const bool branch_taken_0x391f94 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x391F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F94u;
        // 0x391f98: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391f94) {
            ctx->pc = 0x391FC8u;
            goto label_391fc8;
        }
    }
    ctx->pc = 0x391F9Cu;
    // 0x391f9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x391f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391fa0: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x391FA0u;
    SET_GPR_U32(ctx, 31, 0x391FA8u);
    ctx->pc = 0x391FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391FA0u;
    // 0x391fa4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x391FA0u, 0x391FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391FA8u;
label_391fa8:
    // 0x391fa8: 0x144001c6  bnez        $v0, . + 4 + (0x1C6 << 2)
    ctx->pc = 0x391FA8u;
    {
        const bool branch_taken_0x391fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391FA8u;
        // 0x391fac: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x391fa8) {
            ctx->pc = 0x3926C4u;
            goto label_3926c4;
        }
    }
    ctx->pc = 0x391FB0u;
    // 0x391fb0: 0x104001c4  beqz        $v0, . + 4 + (0x1C4 << 2)
    ctx->pc = 0x391FB0u;
    {
        const bool branch_taken_0x391fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391FB0u;
        // 0x391fb4: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391fb0) {
            ctx->pc = 0x3926C4u;
            goto label_3926c4;
        }
    }
    ctx->pc = 0x391FB8u;
    // 0x391fb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x391FB8u;
    {
        const bool branch_taken_0x391fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391FB8u;
        // 0x391fbc: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391fb8) {
            ctx->pc = 0x391FD0u;
            goto label_391fd0;
        }
    }
    ctx->pc = 0x391FC0u;
label_391fc0:
    // 0x391fc0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x391fc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_391fc4:
    // 0x391fc4: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x391fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_391fc8:
    // 0x391fc8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x391fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x391fcc: 0x0  nop
    ctx->pc = 0x391fccu;
    // NOP
label_391fd0:
    // 0x391fd0: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x391fd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_391fd4:
    // 0x391fd4: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x391fd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x391fd8: 0x14450007  bne         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x391FD8u;
    {
        const bool branch_taken_0x391fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x391FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391FD8u;
        // 0x391fdc: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391fd8) {
            ctx->pc = 0x391FF8u;
            goto label_391ff8;
        }
    }
    ctx->pc = 0x391FE0u;
    // 0x391fe0: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x391fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x391fe4: 0x56a4fffb  bnel        $s5, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x391FE4u;
    {
        const bool branch_taken_0x391fe4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 4));
        if (branch_taken_0x391fe4) {
            ctx->pc = 0x391FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391FE4u;
            // 0x391fe8: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x391FD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_391fd4;
        }
    }
    ctx->pc = 0x391FECu;
    // 0x391fec: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x391fecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x391ff0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x391ff0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x391ff4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x391ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_391ff8:
    // 0x391ff8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x391ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x391ffc: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x391ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x392000: 0x100001b0  b           . + 4 + (0x1B0 << 2)
    ctx->pc = 0x392000u;
    {
        const bool branch_taken_0x392000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392000u;
        // 0x392004: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392000) {
            ctx->pc = 0x3926C4u;
            goto label_3926c4;
        }
    }
    ctx->pc = 0x392008u;
label_392008:
    // 0x392008: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x392008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x39200c: 0x8fb10158  lw          $s1, 0x158($sp)
    ctx->pc = 0x39200cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x392010: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x392010u;
    {
        const bool branch_taken_0x392010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392010u;
        // 0x392014: 0x8fb2015c  lw          $s2, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392010) {
            ctx->pc = 0x3920C4u;
            goto label_3920c4;
        }
    }
    ctx->pc = 0x392018u;
    // 0x392018: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x392018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x39201c: 0x28840002  slti        $a0, $a0, 0x2
    ctx->pc = 0x39201cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x392020: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x392020u;
    {
        const bool branch_taken_0x392020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x392024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392020u;
        // 0x392024: 0xafa401a4  sw          $a0, 0x1A4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392020) {
            ctx->pc = 0x392044u;
            goto label_392044;
        }
    }
    ctx->pc = 0x392028u;
    // 0x392028: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x392028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x39202c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x39202Cu;
    {
        const bool branch_taken_0x39202c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x392030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39202Cu;
        // 0x392030: 0x24730433  addiu       $s3, $v1, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39202c) {
            ctx->pc = 0x392098u;
            goto label_392098;
        }
    }
    ctx->pc = 0x392034u;
    // 0x392034: 0x8fa30144  lw          $v1, 0x144($sp)
    ctx->pc = 0x392034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x392038: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x392038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x39203c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x39203Cu;
    {
        const bool branch_taken_0x39203c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39203Cu;
        // 0x392040: 0x439823  subu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39203c) {
            ctx->pc = 0x392098u;
            goto label_392098;
        }
    }
    ctx->pc = 0x392044u;
label_392044:
    // 0x392044: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x392044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x392048: 0x8fa4015c  lw          $a0, 0x15C($sp)
    ctx->pc = 0x392048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x39204c: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x39204cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x392050: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x392050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x392054: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x392054u;
    {
        const bool branch_taken_0x392054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x392058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392054u;
        // 0x392058: 0x8fa2015c  lw          $v0, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392054) {
            ctx->pc = 0x392064u;
            goto label_392064;
        }
    }
    ctx->pc = 0x39205Cu;
    // 0x39205c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39205Cu;
    {
        const bool branch_taken_0x39205c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39205Cu;
        // 0x392060: 0x909023  subu        $s2, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39205c) {
            ctx->pc = 0x392080u;
            goto label_392080;
        }
    }
    ctx->pc = 0x392064u;
label_392064:
    // 0x392064: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x392064u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392068: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x392068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x39206c: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x39206cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x392070: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x392070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x392074: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x392074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x392078: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x392078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x39207c: 0xafa30178  sw          $v1, 0x178($sp)
    ctx->pc = 0x39207cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 3));
label_392080:
    // 0x392080: 0x8fb30160  lw          $s3, 0x160($sp)
    ctx->pc = 0x392080u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x392084: 0x6610005  bgez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x392084u;
    {
        const bool branch_taken_0x392084 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x392088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392084u;
        // 0x392088: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392084) {
            ctx->pc = 0x39209Cu;
            goto label_39209c;
        }
    }
    ctx->pc = 0x39208Cu;
    // 0x39208c: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x39208cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x392090: 0x938823  subu        $s1, $a0, $s3
    ctx->pc = 0x392090u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x392094: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x392094u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_392098:
    // 0x392098: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x392098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_39209c:
    // 0x39209c: 0xc0e3d30  jal         func_38F4C0
    ctx->pc = 0x39209Cu;
    SET_GPR_U32(ctx, 31, 0x3920A4u);
    ctx->pc = 0x3920A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39209Cu;
    // 0x3920a0: 0x3d3f021  addu        $fp, $fp, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F4C0u, 0x39209Cu, 0x3920A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3920A4u;
label_3920a4:
    // 0x3920a4: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x3920a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3920a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3920a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3920ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3920acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3920b0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x3920b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3920b4: 0xc0e3e60  jal         func_38F980
    ctx->pc = 0x3920B4u;
    SET_GPR_U32(ctx, 31, 0x3920BCu);
    ctx->pc = 0x3920B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3920B4u;
    // 0x3920b8: 0xafa30158  sw          $v1, 0x158($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F980u, 0x3920B4u, 0x3920BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3920BCu;
label_3920bc:
    // 0x3920bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3920BCu;
    {
        const bool branch_taken_0x3920bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3920C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3920BCu;
        // 0x3920c0: 0xafa20190  sw          $v0, 0x190($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3920bc) {
            ctx->pc = 0x3920D0u;
            goto label_3920d0;
        }
    }
    ctx->pc = 0x3920C4u;
label_3920c4:
    // 0x3920c4: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x3920c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x3920c8: 0x28840002  slti        $a0, $a0, 0x2
    ctx->pc = 0x3920c8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3920cc: 0xafa401a4  sw          $a0, 0x1A4($sp)
    ctx->pc = 0x3920ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 4));
label_3920d0:
    // 0x3920d0: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x3920D0u;
    {
        const bool branch_taken_0x3920d0 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x3920D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3920D0u;
        // 0x3920d4: 0x8fa3015c  lw          $v1, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3920d0) {
            ctx->pc = 0x392100u;
            goto label_392100;
        }
    }
    ctx->pc = 0x3920D8u;
    // 0x3920d8: 0x1bc00009  blez        $fp, . + 4 + (0x9 << 2)
    ctx->pc = 0x3920D8u;
    {
        const bool branch_taken_0x3920d8 = (GPR_S64(ctx, 30) <= 0);
        ctx->pc = 0x3920DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3920D8u;
        // 0x3920dc: 0x3c0982d  daddu       $s3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3920d8) {
            ctx->pc = 0x392100u;
            goto label_392100;
        }
    }
    ctx->pc = 0x3920E0u;
    // 0x3920e0: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x3920e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x3920e4: 0x222980b  movn        $s3, $s1, $v0
    ctx->pc = 0x3920e4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 17));
    // 0x3920e8: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x3920e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3920ec: 0x3d3f023  subu        $fp, $fp, $s3
    ctx->pc = 0x3920ecu;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x3920f0: 0x2338823  subu        $s1, $s1, $s3
    ctx->pc = 0x3920f0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x3920f4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x3920f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3920f8: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x3920f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x3920fc: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x3920fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_392100:
    // 0x392100: 0x18600019  blez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x392100u;
    {
        const bool branch_taken_0x392100 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x392104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392100u;
        // 0x392104: 0x8fa40174  lw          $a0, 0x174($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392100) {
            ctx->pc = 0x392168u;
            goto label_392168;
        }
    }
    ctx->pc = 0x392108u;
    // 0x392108: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x392108u;
    {
        const bool branch_taken_0x392108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392108u;
        // 0x39210c: 0x8fa5015c  lw          $a1, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392108) {
            ctx->pc = 0x39215Cu;
            goto label_39215c;
        }
    }
    ctx->pc = 0x392110u;
    // 0x392110: 0x1a40000a  blez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x392110u;
    {
        const bool branch_taken_0x392110 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x392114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392110u;
        // 0x392114: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392110) {
            ctx->pc = 0x39213Cu;
            goto label_39213c;
        }
    }
    ctx->pc = 0x392118u;
    // 0x392118: 0xc0e3efc  jal         func_38FBF0
    ctx->pc = 0x392118u;
    SET_GPR_U32(ctx, 31, 0x392120u);
    ctx->pc = 0x39211Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392118u;
    // 0x39211c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FBF0u, 0x392118u, 0x392120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392120u;
label_392120:
    // 0x392120: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x392120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x392124: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x392124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392128: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x392128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x39212c: 0xc0e3e6e  jal         func_38F9B8
    ctx->pc = 0x39212Cu;
    SET_GPR_U32(ctx, 31, 0x392134u);
    ctx->pc = 0x392130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39212Cu;
    // 0x392130: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F9B8u, 0x39212Cu, 0x392134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392134u;
label_392134:
    // 0x392134: 0xafb70188  sw          $s7, 0x188($sp)
    ctx->pc = 0x392134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 23));
    // 0x392138: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x392138u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39213c:
    // 0x39213c: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x39213cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x392140: 0x528023  subu        $s0, $v0, $s2
    ctx->pc = 0x392140u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x392144: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x392144u;
    {
        const bool branch_taken_0x392144 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x392148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392144u;
        // 0x392148: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392144) {
            ctx->pc = 0x392168u;
            goto label_392168;
        }
    }
    ctx->pc = 0x39214Cu;
    // 0x39214c: 0xc0e3efc  jal         func_38FBF0
    ctx->pc = 0x39214Cu;
    SET_GPR_U32(ctx, 31, 0x392154u);
    ctx->pc = 0x392150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39214Cu;
    // 0x392150: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FBF0u, 0x39214Cu, 0x392154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392154u;
label_392154:
    // 0x392154: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x392154u;
    {
        const bool branch_taken_0x392154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392154u;
        // 0x392158: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392154) {
            ctx->pc = 0x392168u;
            goto label_392168;
        }
    }
    ctx->pc = 0x39215Cu;
label_39215c:
    // 0x39215c: 0xc0e3efc  jal         func_38FBF0
    ctx->pc = 0x39215Cu;
    SET_GPR_U32(ctx, 31, 0x392164u);
    ctx->pc = 0x392160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39215Cu;
    // 0x392160: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FBF0u, 0x39215Cu, 0x392164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392164u;
label_392164:
    // 0x392164: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x392164u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_392168:
    // 0x392168: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x392168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x39216c: 0xc0e3e60  jal         func_38F980
    ctx->pc = 0x39216Cu;
    SET_GPR_U32(ctx, 31, 0x392174u);
    ctx->pc = 0x392170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39216Cu;
    // 0x392170: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F980u, 0x39216Cu, 0x392174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392174u;
label_392174:
    // 0x392174: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x392174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x392178: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x392178u;
    {
        const bool branch_taken_0x392178 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x39217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392178u;
        // 0x39217c: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392178) {
            ctx->pc = 0x392190u;
            goto label_392190;
        }
    }
    ctx->pc = 0x392180u;
    // 0x392180: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x392180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392184: 0xc0e3efc  jal         func_38FBF0
    ctx->pc = 0x392184u;
    SET_GPR_U32(ctx, 31, 0x39218Cu);
    ctx->pc = 0x392188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392184u;
    // 0x392188: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FBF0u, 0x392184u, 0x39218Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39218Cu;
label_39218c:
    // 0x39218c: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x39218cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
label_392190:
    // 0x392190: 0x8fa401a4  lw          $a0, 0x1A4($sp)
    ctx->pc = 0x392190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x392194: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x392194u;
    {
        const bool branch_taken_0x392194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x392198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392194u;
        // 0x392198: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392194) {
            ctx->pc = 0x3921FCu;
            goto label_3921fc;
        }
    }
    ctx->pc = 0x39219Cu;
    // 0x39219c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x39219cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3921a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3921a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3921a4: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x3921A4u;
    {
        const bool branch_taken_0x3921a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3921a4) {
            ctx->pc = 0x3921A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3921A4u;
            // 0x3921a8: 0xafa0017c  sw          $zero, 0x17C($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3921FCu;
            goto label_3921fc;
        }
    }
    ctx->pc = 0x3921ACu;
    // 0x3921ac: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x3921acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3921b0: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x3921b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x3921b4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3921b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3921b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3921b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3921bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3921bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3921c0: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3921C0u;
    {
        const bool branch_taken_0x3921c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3921c0) {
            ctx->pc = 0x3921C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3921C0u;
            // 0x3921c4: 0xafa0017c  sw          $zero, 0x17C($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3921FCu;
            goto label_3921fc;
        }
    }
    ctx->pc = 0x3921C8u;
    // 0x3921c8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3921c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3921cc: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x3921ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x3921d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3921d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3921d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3921d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3921d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3921D8u;
    {
        const bool branch_taken_0x3921d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3921DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3921D8u;
        // 0x3921dc: 0x8fa20158  lw          $v0, 0x158($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3921d8) {
            ctx->pc = 0x3921F8u;
            goto label_3921f8;
        }
    }
    ctx->pc = 0x3921E0u;
    // 0x3921e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3921e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3921e4: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x3921e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x3921e8: 0xafa3017c  sw          $v1, 0x17C($sp)
    ctx->pc = 0x3921e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 3));
    // 0x3921ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3921ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3921f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3921F0u;
    {
        const bool branch_taken_0x3921f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3921F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3921F0u;
        // 0x3921f4: 0xafa20158  sw          $v0, 0x158($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3921f0) {
            ctx->pc = 0x3921FCu;
            goto label_3921fc;
        }
    }
    ctx->pc = 0x3921F8u;
label_3921f8:
    // 0x3921f8: 0xafa0017c  sw          $zero, 0x17C($sp)
    ctx->pc = 0x3921f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
label_3921fc:
    // 0x3921fc: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x3921fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x392200: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x392200u;
    {
        const bool branch_taken_0x392200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x392204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392200u;
        // 0x392204: 0x8fa3018c  lw          $v1, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392200) {
            ctx->pc = 0x392228u;
            goto label_392228;
        }
    }
    ctx->pc = 0x392208u;
    // 0x392208: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x392208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x39220c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x39220cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x392210: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x392210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x392214: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x392214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x392218: 0xc0e3e0e  jal         func_38F838
    ctx->pc = 0x392218u;
    SET_GPR_U32(ctx, 31, 0x392220u);
    ctx->pc = 0x39221Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392218u;
    // 0x39221c: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F838u, 0x392218u, 0x392220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392220u;
label_392220:
    // 0x392220: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x392220u;
    {
        const bool branch_taken_0x392220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392220u;
        // 0x392224: 0x3c21023  subu        $v0, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392220) {
            ctx->pc = 0x39222Cu;
            goto label_39222c;
        }
    }
    ctx->pc = 0x392228u;
label_392228:
    // 0x392228: 0x27c20001  addiu       $v0, $fp, 0x1
    ctx->pc = 0x392228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_39222c:
    // 0x39222c: 0x3053001f  andi        $s3, $v0, 0x1F
    ctx->pc = 0x39222cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x392230: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x392230u;
    {
        const bool branch_taken_0x392230 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x392234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392230u;
        // 0x392234: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392230) {
            ctx->pc = 0x39223Cu;
            goto label_39223c;
        }
    }
    ctx->pc = 0x392238u;
    // 0x392238: 0x539823  subu        $s3, $v0, $s3
    ctx->pc = 0x392238u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_39223c:
    // 0x39223c: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x39223cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x392240: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x392240u;
    {
        const bool branch_taken_0x392240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x392244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392240u;
        // 0x392244: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392240) {
            ctx->pc = 0x392264u;
            goto label_392264;
        }
    }
    ctx->pc = 0x392248u;
    // 0x392248: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x392248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x39224c: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x39224cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x392250: 0x3d3f021  addu        $fp, $fp, $s3
    ctx->pc = 0x392250u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x392254: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x392254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x392258: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x392258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x39225c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39225Cu;
    {
        const bool branch_taken_0x39225c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39225Cu;
        // 0x392260: 0xafa40158  sw          $a0, 0x158($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39225c) {
            ctx->pc = 0x392280u;
            goto label_392280;
        }
    }
    ctx->pc = 0x392264u;
label_392264:
    // 0x392264: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x392264u;
    {
        const bool branch_taken_0x392264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392264u;
        // 0x392268: 0x8fa20158  lw          $v0, 0x158($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392264) {
            ctx->pc = 0x392280u;
            goto label_392280;
        }
    }
    ctx->pc = 0x39226Cu;
    // 0x39226c: 0x2673001c  addiu       $s3, $s3, 0x1C
    ctx->pc = 0x39226cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x392270: 0x3d3f021  addu        $fp, $fp, $s3
    ctx->pc = 0x392270u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x392274: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x392274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x392278: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x392278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x39227c: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x39227cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
label_392280:
    // 0x392280: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x392280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x392284: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x392284u;
    {
        const bool branch_taken_0x392284 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x392288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392284u;
        // 0x392288: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392284) {
            ctx->pc = 0x392298u;
            goto label_392298;
        }
    }
    ctx->pc = 0x39228Cu;
    // 0x39228c: 0xc0e3f1a  jal         func_38FC68
    ctx->pc = 0x39228Cu;
    SET_GPR_U32(ctx, 31, 0x392294u);
    ctx->pc = 0x392290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39228Cu;
    // 0x392290: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC68u, 0x39228Cu, 0x392294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392294u;
label_392294:
    // 0x392294: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x392294u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_392298:
    // 0x392298: 0x1bc00004  blez        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x392298u;
    {
        const bool branch_taken_0x392298 = (GPR_S64(ctx, 30) <= 0);
        ctx->pc = 0x39229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392298u;
        // 0x39229c: 0x8fa4018c  lw          $a0, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392298) {
            ctx->pc = 0x3922ACu;
            goto label_3922ac;
        }
    }
    ctx->pc = 0x3922A0u;
    // 0x3922a0: 0xc0e3f1a  jal         func_38FC68
    ctx->pc = 0x3922A0u;
    SET_GPR_U32(ctx, 31, 0x3922A8u);
    ctx->pc = 0x3922A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3922A0u;
    // 0x3922a4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC68u, 0x3922A0u, 0x3922A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3922A8u;
label_3922a8:
    // 0x3922a8: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x3922a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
label_3922ac:
    // 0x3922ac: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x3922acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x3922b0: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3922B0u;
    {
        const bool branch_taken_0x3922b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3922B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3922B0u;
        // 0x3922b4: 0x8fa5018c  lw          $a1, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3922b0) {
            ctx->pc = 0x392304u;
            goto label_392304;
        }
    }
    ctx->pc = 0x3922B8u;
    // 0x3922b8: 0xc0e3f7a  jal         func_38FDE8
    ctx->pc = 0x3922B8u;
    SET_GPR_U32(ctx, 31, 0x3922C0u);
    ctx->pc = 0x3922BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3922B8u;
    // 0x3922bc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FDE8u, 0x3922B8u, 0x3922C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3922C0u;
label_3922c0:
    // 0x3922c0: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3922C0u;
    {
        const bool branch_taken_0x3922c0 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3922C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3922C0u;
        // 0x3922c4: 0x8fa40160  lw          $a0, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3922c0) {
            ctx->pc = 0x392308u;
            goto label_392308;
        }
    }
    ctx->pc = 0x3922C8u;
    // 0x3922c8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3922c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3922cc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3922ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3922d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3922d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3922d4: 0xc0e3d8c  jal         func_38F630
    ctx->pc = 0x3922D4u;
    SET_GPR_U32(ctx, 31, 0x3922DCu);
    ctx->pc = 0x3922D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3922D4u;
    // 0x3922d8: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F630u, 0x3922D4u, 0x3922DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3922DCu;
label_3922dc:
    // 0x3922dc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3922dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3922e0: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x3922e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x3922e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3922E4u;
    {
        const bool branch_taken_0x3922e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3922E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3922E4u;
        // 0x3922e8: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3922e4) {
            ctx->pc = 0x3922FCu;
            goto label_3922fc;
        }
    }
    ctx->pc = 0x3922ECu;
    // 0x3922ec: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3922ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3922f0: 0xc0e3d8c  jal         func_38F630
    ctx->pc = 0x3922F0u;
    SET_GPR_U32(ctx, 31, 0x3922F8u);
    ctx->pc = 0x3922F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3922F0u;
    // 0x3922f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F630u, 0x3922F0u, 0x3922F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3922F8u;
label_3922f8:
    // 0x3922f8: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x3922f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
label_3922fc:
    // 0x3922fc: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x3922fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x392300: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x392300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
label_392304:
    // 0x392304: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x392304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_392308:
    // 0x392308: 0x5c800019  bgtzl       $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x392308u;
    {
        const bool branch_taken_0x392308 = (GPR_S64(ctx, 4) > 0);
        if (branch_taken_0x392308) {
            ctx->pc = 0x39230Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392308u;
            // 0x39230c: 0x8fa40174  lw          $a0, 0x174($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392370u;
            goto label_392370;
        }
    }
    ctx->pc = 0x392310u;
    // 0x392310: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x392310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x392314: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x392314u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x392318: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x392318u;
    {
        const bool branch_taken_0x392318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x392318) {
            ctx->pc = 0x39231Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392318u;
            // 0x39231c: 0x8fa40174  lw          $a0, 0x174($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392370u;
            goto label_392370;
        }
    }
    ctx->pc = 0x392320u;
    // 0x392320: 0x480000a  bltz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x392320u;
    {
        const bool branch_taken_0x392320 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x392324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392320u;
        // 0x392324: 0x8fa4018c  lw          $a0, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392320) {
            ctx->pc = 0x39234Cu;
            goto label_39234c;
        }
    }
    ctx->pc = 0x392328u;
    // 0x392328: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x392328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x39232c: 0xc0e3d8c  jal         func_38F630
    ctx->pc = 0x39232Cu;
    SET_GPR_U32(ctx, 31, 0x392334u);
    ctx->pc = 0x392330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39232Cu;
    // 0x392330: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F630u, 0x39232Cu, 0x392334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392334u;
label_392334:
    // 0x392334: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x392334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x392338: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x392338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39233c: 0xc0e3f7a  jal         func_38FDE8
    ctx->pc = 0x39233Cu;
    SET_GPR_U32(ctx, 31, 0x392344u);
    ctx->pc = 0x392340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39233Cu;
    // 0x392340: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FDE8u, 0x39233Cu, 0x392344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392344u;
label_392344:
    // 0x392344: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x392344u;
    {
        const bool branch_taken_0x392344 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x392348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392344u;
        // 0x392348: 0x8fa301a0  lw          $v1, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392344) {
            ctx->pc = 0x39235Cu;
            goto label_39235c;
        }
    }
    ctx->pc = 0x39234Cu;
label_39234c:
    // 0x39234c: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x39234cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x392350: 0x4b027  nor         $s6, $zero, $a0
    ctx->pc = 0x392350u;
    SET_GPR_U64(ctx, 22, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
label_392354:
    // 0x392354: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x392354u;
    {
        const bool branch_taken_0x392354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392354u;
        // 0x392358: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392354) {
            ctx->pc = 0x392688u;
            goto label_392688;
        }
    }
    ctx->pc = 0x39235Cu;
label_39235c:
    // 0x39235c: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x39235cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_392360:
    // 0x392360: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x392360u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
    // 0x392364: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x392364u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x392368: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x392368u;
    {
        const bool branch_taken_0x392368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392368u;
        // 0x39236c: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392368) {
            ctx->pc = 0x392688u;
            goto label_392688;
        }
    }
    ctx->pc = 0x392370u;
label_392370:
    // 0x392370: 0x10800089  beqz        $a0, . + 4 + (0x89 << 2)
    ctx->pc = 0x392370u;
    {
        const bool branch_taken_0x392370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x392374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392370u;
        // 0x392374: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392370) {
            ctx->pc = 0x392598u;
            goto label_392598;
        }
    }
    ctx->pc = 0x392378u;
    // 0x392378: 0x1a200004  blez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x392378u;
    {
        const bool branch_taken_0x392378 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x39237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392378u;
        // 0x39237c: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392378) {
            ctx->pc = 0x39238Cu;
            goto label_39238c;
        }
    }
    ctx->pc = 0x392380u;
    // 0x392380: 0xc0e3f1a  jal         func_38FC68
    ctx->pc = 0x392380u;
    SET_GPR_U32(ctx, 31, 0x392388u);
    ctx->pc = 0x392384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392380u;
    // 0x392384: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC68u, 0x392380u, 0x392388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392388u;
label_392388:
    // 0x392388: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x392388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
label_39238c:
    // 0x39238c: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x39238cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x392390: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x392390u;
    {
        const bool branch_taken_0x392390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392390u;
        // 0x392394: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392390) {
            ctx->pc = 0x3923D4u;
            goto label_3923d4;
        }
    }
    ctx->pc = 0x392398u;
    // 0x392398: 0xc0e3d30  jal         func_38F4C0
    ctx->pc = 0x392398u;
    SET_GPR_U32(ctx, 31, 0x3923A0u);
    ctx->pc = 0x39239Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392398u;
    // 0x39239c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F4C0u, 0x392398u, 0x3923A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3923A0u;
label_3923a0:
    // 0x3923a0: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x3923a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x3923a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3923a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3923a8: 0xc0e3d6e  jal         func_38F5B8
    ctx->pc = 0x3923A8u;
    SET_GPR_U32(ctx, 31, 0x3923B0u);
    ctx->pc = 0x3923ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3923A8u;
    // 0x3923ac: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F5B8u, 0x3923A8u, 0x3923B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3923B0u;
label_3923b0:
    // 0x3923b0: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x3923b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
    // 0x3923b4: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x3923b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x3923b8: 0xc0e3d5c  jal         func_38F570
    ctx->pc = 0x3923B8u;
    SET_GPR_U32(ctx, 31, 0x3923C0u);
    ctx->pc = 0x3923BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3923B8u;
    // 0x3923bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F570u, 0x3923B8u, 0x3923C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3923C0u;
label_3923c0:
    // 0x3923c0: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x3923c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x3923c4: 0xc0e3f1a  jal         func_38FC68
    ctx->pc = 0x3923C4u;
    SET_GPR_U32(ctx, 31, 0x3923CCu);
    ctx->pc = 0x3923C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3923C4u;
    // 0x3923c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC68u, 0x3923C4u, 0x3923CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3923CCu;
label_3923cc:
    // 0x3923cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3923CCu;
    {
        const bool branch_taken_0x3923cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3923D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3923CCu;
        // 0x3923d0: 0xafa20190  sw          $v0, 0x190($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3923cc) {
            ctx->pc = 0x3923D8u;
            goto label_3923d8;
        }
    }
    ctx->pc = 0x3923D4u;
label_3923d4:
    // 0x3923d4: 0xafa40194  sw          $a0, 0x194($sp)
    ctx->pc = 0x3923d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 4));
label_3923d8:
    // 0x3923d8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3923d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3923dc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3923DCu;
    {
        const bool branch_taken_0x3923dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3923E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3923DCu;
        // 0x3923e0: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3923dc) {
            ctx->pc = 0x392450u;
            goto label_392450;
        }
    }
    ctx->pc = 0x3923E4u;
    // 0x3923e4: 0x0  nop
    ctx->pc = 0x3923e4u;
    // NOP
label_3923e8:
    // 0x3923e8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3923e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3923ec: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3923ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3923f0: 0xc0e3d8c  jal         func_38F630
    ctx->pc = 0x3923F0u;
    SET_GPR_U32(ctx, 31, 0x3923F8u);
    ctx->pc = 0x3923F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3923F0u;
    // 0x3923f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F630u, 0x3923F0u, 0x3923F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3923F8u;
label_3923f8:
    // 0x3923f8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3923f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3923fc: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x3923fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x392400: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x392400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x392404: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x392404u;
    {
        const bool branch_taken_0x392404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x392408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392404u;
        // 0x392408: 0x8fa40194  lw          $a0, 0x194($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392404) {
            ctx->pc = 0x392428u;
            goto label_392428;
        }
    }
    ctx->pc = 0x39240Cu;
    // 0x39240c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x39240cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392410: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x392410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x392414: 0xc0e3d8c  jal         func_38F630
    ctx->pc = 0x392414u;
    SET_GPR_U32(ctx, 31, 0x39241Cu);
    ctx->pc = 0x392418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392414u;
    // 0x392418: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F630u, 0x392414u, 0x39241Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39241Cu;
label_39241c:
    // 0x39241c: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x39241cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x392420: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x392420u;
    {
        const bool branch_taken_0x392420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392420u;
        // 0x392424: 0xafa20194  sw          $v0, 0x194($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392420) {
            ctx->pc = 0x39244Cu;
            goto label_39244c;
        }
    }
    ctx->pc = 0x392428u;
label_392428:
    // 0x392428: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x392428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x39242c: 0xc0e3d8c  jal         func_38F630
    ctx->pc = 0x39242Cu;
    SET_GPR_U32(ctx, 31, 0x392434u);
    ctx->pc = 0x392430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39242Cu;
    // 0x392430: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F630u, 0x39242Cu, 0x392434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392434u;
label_392434:
    // 0x392434: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x392434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x392438: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x392438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x39243c: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x39243cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
    // 0x392440: 0xc0e3d8c  jal         func_38F630
    ctx->pc = 0x392440u;
    SET_GPR_U32(ctx, 31, 0x392448u);
    ctx->pc = 0x392444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392440u;
    // 0x392444: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F630u, 0x392440u, 0x392448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392448u;
label_392448:
    // 0x392448: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x392448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
label_39244c:
    // 0x39244c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x39244cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_392450:
    // 0x392450: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x392450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x392454: 0xc0e44d0  jal         func_391340
    ctx->pc = 0x392454u;
    SET_GPR_U32(ctx, 31, 0x39245Cu);
    ctx->pc = 0x392458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392454u;
    // 0x392458: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391340u, 0x392454u, 0x39245Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39245Cu;
label_39245c:
    // 0x39245c: 0x8fa50194  lw          $a1, 0x194($sp)
    ctx->pc = 0x39245cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x392460: 0x24520030  addiu       $s2, $v0, 0x30
    ctx->pc = 0x392460u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x392464: 0xc0e3f7a  jal         func_38FDE8
    ctx->pc = 0x392464u;
    SET_GPR_U32(ctx, 31, 0x39246Cu);
    ctx->pc = 0x392468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392464u;
    // 0x392468: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FDE8u, 0x392464u, 0x39246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39246Cu;
label_39246c:
    // 0x39246c: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x39246cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x392470: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x392470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392474: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x392474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x392478: 0xc0e3f94  jal         func_38FE50
    ctx->pc = 0x392478u;
    SET_GPR_U32(ctx, 31, 0x392480u);
    ctx->pc = 0x39247Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392478u;
    // 0x39247c: 0x8fa60190  lw          $a2, 0x190($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE50u, 0x392478u, 0x392480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392480u;
label_392480:
    // 0x392480: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x392480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
    // 0x392484: 0x8442000e  lh          $v0, 0xE($v0)
    ctx->pc = 0x392484u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x392488: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x392488u;
    {
        const bool branch_taken_0x392488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392488u;
        // 0x39248c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392488) {
            ctx->pc = 0x3924A0u;
            goto label_3924a0;
        }
    }
    ctx->pc = 0x392490u;
    // 0x392490: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x392490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x392494: 0xc0e3f7a  jal         func_38FDE8
    ctx->pc = 0x392494u;
    SET_GPR_U32(ctx, 31, 0x39249Cu);
    ctx->pc = 0x392498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392494u;
    // 0x392498: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FDE8u, 0x392494u, 0x39249Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39249Cu;
label_39249c:
    // 0x39249c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x39249cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3924a0:
    // 0x3924a0: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x3924A0u;
    {
        const bool branch_taken_0x3924a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3924A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3924A0u;
        // 0x3924a4: 0x8fa40148  lw          $a0, 0x148($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3924a0) {
            ctx->pc = 0x3924D8u;
            goto label_3924d8;
        }
    }
    ctx->pc = 0x3924A8u;
    // 0x3924a8: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x3924A8u;
    {
        const bool branch_taken_0x3924a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3924ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3924A8u;
        // 0x3924ac: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3924a8) {
            ctx->pc = 0x3924D8u;
            goto label_3924d8;
        }
    }
    ctx->pc = 0x3924B0u;
    // 0x3924b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3924b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3924b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3924b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3924b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3924b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3924bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3924BCu;
    {
        const bool branch_taken_0x3924bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3924C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3924BCu;
        // 0x3924c0: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3924bc) {
            ctx->pc = 0x3924D8u;
            goto label_3924d8;
        }
    }
    ctx->pc = 0x3924C4u;
    // 0x3924c4: 0x12420028  beq         $s2, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3924C4u;
    {
        const bool branch_taken_0x3924c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3924C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3924C4u;
        // 0x3924c8: 0x10102a  slt         $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3924c4) {
            ctx->pc = 0x392568u;
            goto label_392568;
        }
    }
    ctx->pc = 0x3924CCu;
    // 0x3924cc: 0x529021  addu        $s2, $v0, $s2
    ctx->pc = 0x3924ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3924d0: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x3924D0u;
    {
        const bool branch_taken_0x3924d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3924D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3924D0u;
        // 0x3924d4: 0xa2b20000  sb          $s2, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3924d0) {
            ctx->pc = 0x392684u;
            goto label_392684;
        }
    }
    ctx->pc = 0x3924D8u;
label_3924d8:
    // 0x3924d8: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x3924D8u;
    {
        const bool branch_taken_0x3924d8 = (GPR_S64(ctx, 16) < 0);
        if (branch_taken_0x3924d8) {
            ctx->pc = 0x392504u;
            goto label_392504;
        }
    }
    ctx->pc = 0x3924E0u;
    // 0x3924e0: 0x1600001d  bnez        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3924E0u;
    {
        const bool branch_taken_0x3924e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3924E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3924E0u;
        // 0x3924e4: 0x8fa20148  lw          $v0, 0x148($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3924e0) {
            ctx->pc = 0x392558u;
            goto label_392558;
        }
    }
    ctx->pc = 0x3924E8u;
    // 0x3924e8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3924E8u;
    {
        const bool branch_taken_0x3924e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3924ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3924E8u;
        // 0x3924ec: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3924e8) {
            ctx->pc = 0x392558u;
            goto label_392558;
        }
    }
    ctx->pc = 0x3924F0u;
    // 0x3924f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3924f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3924f4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3924f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3924f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3924f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3924fc: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3924FCu;
    {
        const bool branch_taken_0x3924fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3924fc) {
            ctx->pc = 0x392558u;
            goto label_392558;
        }
    }
    ctx->pc = 0x392504u;
label_392504:
    // 0x392504: 0x1a200012  blez        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x392504u;
    {
        const bool branch_taken_0x392504 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x392508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392504u;
        // 0x392508: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392504) {
            ctx->pc = 0x392550u;
            goto label_392550;
        }
    }
    ctx->pc = 0x39250Cu;
    // 0x39250c: 0xc0e3f1a  jal         func_38FC68
    ctx->pc = 0x39250Cu;
    SET_GPR_U32(ctx, 31, 0x392514u);
    ctx->pc = 0x392510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39250Cu;
    // 0x392510: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC68u, 0x39250Cu, 0x392514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392514u;
label_392514:
    // 0x392514: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x392514u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392518: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x392518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x39251c: 0xc0e3f7a  jal         func_38FDE8
    ctx->pc = 0x39251Cu;
    SET_GPR_U32(ctx, 31, 0x392524u);
    ctx->pc = 0x392520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39251Cu;
    // 0x392520: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FDE8u, 0x39251Cu, 0x392524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392524u;
label_392524:
    // 0x392524: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x392524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392528: 0x1e200006  bgtz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x392528u;
    {
        const bool branch_taken_0x392528 = (GPR_S64(ctx, 17) > 0);
        ctx->pc = 0x39252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392528u;
        // 0x39252c: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392528) {
            ctx->pc = 0x392544u;
            goto label_392544;
        }
    }
    ctx->pc = 0x392530u;
    // 0x392530: 0x56200054  bnel        $s1, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x392530u;
    {
        const bool branch_taken_0x392530 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x392530) {
            ctx->pc = 0x392534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392530u;
            // 0x392534: 0xa2b20000  sb          $s2, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392684u;
            goto label_392684;
        }
    }
    ctx->pc = 0x392538u;
    // 0x392538: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x392538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x39253c: 0x50400051  beql        $v0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x39253Cu;
    {
        const bool branch_taken_0x39253c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39253c) {
            ctx->pc = 0x392540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39253Cu;
            // 0x392540: 0xa2b20000  sb          $s2, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392684u;
            goto label_392684;
        }
    }
    ctx->pc = 0x392544u;
label_392544:
    // 0x392544: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x392544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x392548: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x392548u;
    {
        const bool branch_taken_0x392548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392548u;
        // 0x39254c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392548) {
            ctx->pc = 0x392568u;
            goto label_392568;
        }
    }
    ctx->pc = 0x392550u;
label_392550:
    // 0x392550: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x392550u;
    {
        const bool branch_taken_0x392550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392550u;
        // 0x392554: 0xa2b20000  sb          $s2, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392550) {
            ctx->pc = 0x392684u;
            goto label_392684;
        }
    }
    ctx->pc = 0x392558u;
label_392558:
    // 0x392558: 0x1a200009  blez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x392558u;
    {
        const bool branch_taken_0x392558 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x39255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392558u;
        // 0x39255c: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392558) {
            ctx->pc = 0x392580u;
            goto label_392580;
        }
    }
    ctx->pc = 0x392560u;
    // 0x392560: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x392560u;
    {
        const bool branch_taken_0x392560 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x392564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392560u;
        // 0x392564: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392560) {
            ctx->pc = 0x392578u;
            goto label_392578;
        }
    }
    ctx->pc = 0x392568u;
label_392568:
    // 0x392568: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x392568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x39256c: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x39256cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x392570: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x392570u;
    {
        const bool branch_taken_0x392570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392570u;
        // 0x392574: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392570) {
            ctx->pc = 0x392618u;
            goto label_392618;
        }
    }
    ctx->pc = 0x392578u;
label_392578:
    // 0x392578: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x392578u;
    {
        const bool branch_taken_0x392578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392578u;
        // 0x39257c: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392578) {
            ctx->pc = 0x392684u;
            goto label_392684;
        }
    }
    ctx->pc = 0x392580u;
label_392580:
    // 0x392580: 0xa2b20000  sb          $s2, 0x0($s5)
    ctx->pc = 0x392580u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x392584: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x392584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x392588: 0x1663ff97  bne         $s3, $v1, . + 4 + (-0x69 << 2)
    ctx->pc = 0x392588u;
    {
        const bool branch_taken_0x392588 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x39258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392588u;
        // 0x39258c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392588) {
            ctx->pc = 0x3923E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3923e8;
        }
    }
    ctx->pc = 0x392590u;
    // 0x392590: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x392590u;
    {
        const bool branch_taken_0x392590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392590u;
        // 0x392594: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392590) {
            ctx->pc = 0x3925E0u;
            goto label_3925e0;
        }
    }
    ctx->pc = 0x392598u;
label_392598:
    // 0x392598: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x392598u;
    {
        const bool branch_taken_0x392598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392598u;
        // 0x39259c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392598) {
            ctx->pc = 0x3925B8u;
            goto label_3925b8;
        }
    }
    ctx->pc = 0x3925A0u;
label_3925a0:
    // 0x3925a0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3925a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3925a4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3925a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3925a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3925a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3925ac: 0xc0e3d8c  jal         func_38F630
    ctx->pc = 0x3925ACu;
    SET_GPR_U32(ctx, 31, 0x3925B4u);
    ctx->pc = 0x3925B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3925ACu;
    // 0x3925b0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F630u, 0x3925ACu, 0x3925B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3925B4u;
label_3925b4:
    // 0x3925b4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3925b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3925b8:
    // 0x3925b8: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x3925b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x3925bc: 0xc0e44d0  jal         func_391340
    ctx->pc = 0x3925BCu;
    SET_GPR_U32(ctx, 31, 0x3925C4u);
    ctx->pc = 0x3925C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3925BCu;
    // 0x3925c0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391340u, 0x3925BCu, 0x3925C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3925C4u;
label_3925c4:
    // 0x3925c4: 0x24520030  addiu       $s2, $v0, 0x30
    ctx->pc = 0x3925c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3925c8: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x3925c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x3925cc: 0xa2b20000  sb          $s2, 0x0($s5)
    ctx->pc = 0x3925ccu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x3925d0: 0x264102a  slt         $v0, $s3, $a0
    ctx->pc = 0x3925d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3925d4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3925D4u;
    {
        const bool branch_taken_0x3925d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3925D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3925D4u;
        // 0x3925d8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3925d4) {
            ctx->pc = 0x3925A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3925a0;
        }
    }
    ctx->pc = 0x3925DCu;
    // 0x3925dc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3925dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3925e0:
    // 0x3925e0: 0xc0e3f1a  jal         func_38FC68
    ctx->pc = 0x3925E0u;
    SET_GPR_U32(ctx, 31, 0x3925E8u);
    ctx->pc = 0x3925E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3925E0u;
    // 0x3925e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC68u, 0x3925E0u, 0x3925E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3925E8u;
label_3925e8:
    // 0x3925e8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3925e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3925ec: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x3925ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x3925f0: 0xc0e3f7a  jal         func_38FDE8
    ctx->pc = 0x3925F0u;
    SET_GPR_U32(ctx, 31, 0x3925F8u);
    ctx->pc = 0x3925F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3925F0u;
    // 0x3925f4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FDE8u, 0x3925F0u, 0x3925F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3925F8u;
label_3925f8:
    // 0x3925f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3925f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3925fc: 0x5e000007  bgtzl       $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3925FCu;
    {
        const bool branch_taken_0x3925fc = (GPR_S64(ctx, 16) > 0);
        if (branch_taken_0x3925fc) {
            ctx->pc = 0x392600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3925FCu;
            // 0x392600: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39261Cu;
            goto label_39261c;
        }
    }
    ctx->pc = 0x392604u;
    // 0x392604: 0x16000018  bnez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x392604u;
    {
        const bool branch_taken_0x392604 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x392608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392604u;
        // 0x392608: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392604) {
            ctx->pc = 0x392668u;
            goto label_392668;
        }
    }
    ctx->pc = 0x39260Cu;
    // 0x39260c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x39260cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x392610: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x392610u;
    {
        const bool branch_taken_0x392610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x392610) {
            ctx->pc = 0x392614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392610u;
            // 0x392614: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39266Cu;
            goto label_39266c;
        }
    }
    ctx->pc = 0x392618u;
label_392618:
    // 0x392618: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x392618u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_39261c:
    // 0x39261c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39261Cu;
    {
        const bool branch_taken_0x39261c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39261Cu;
        // 0x392620: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39261c) {
            ctx->pc = 0x392634u;
            goto label_392634;
        }
    }
    ctx->pc = 0x392624u;
    // 0x392624: 0x0  nop
    ctx->pc = 0x392624u;
    // NOP
label_392628:
    // 0x392628: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x392628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x39262c: 0x12a20007  beq         $s5, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39262Cu;
    {
        const bool branch_taken_0x39262c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x392630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39262Cu;
        // 0x392630: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39262c) {
            ctx->pc = 0x39264Cu;
            goto label_39264c;
        }
    }
    ctx->pc = 0x392634u;
label_392634:
    // 0x392634: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x392634u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x392638: 0x1043fffb  beq         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x392638u;
    {
        const bool branch_taken_0x392638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x39263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392638u;
        // 0x39263c: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392638) {
            ctx->pc = 0x392628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392628;
        }
    }
    ctx->pc = 0x392640u;
    // 0x392640: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x392640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x392644: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x392644u;
    {
        const bool branch_taken_0x392644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392644u;
        // 0x392648: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392644) {
            ctx->pc = 0x392684u;
            goto label_392684;
        }
    }
    ctx->pc = 0x39264Cu;
label_39264c:
    // 0x39264c: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x39264cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x392650: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x392650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x392654: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x392654u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x392658: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x392658u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x39265c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x39265Cu;
    {
        const bool branch_taken_0x39265c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39265Cu;
        // 0x392660: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39265c) {
            ctx->pc = 0x392688u;
            goto label_392688;
        }
    }
    ctx->pc = 0x392664u;
    // 0x392664: 0x0  nop
    ctx->pc = 0x392664u;
    // NOP
label_392668:
    // 0x392668: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x392668u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_39266c:
    // 0x39266c: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x39266cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x392670: 0x0  nop
    ctx->pc = 0x392670u;
    // NOP
    // 0x392674: 0x0  nop
    ctx->pc = 0x392674u;
    // NOP
    // 0x392678: 0x0  nop
    ctx->pc = 0x392678u;
    // NOP
    // 0x39267c: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39267Cu;
    {
        const bool branch_taken_0x39267c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x39267c) {
            ctx->pc = 0x392668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392668;
        }
    }
    ctx->pc = 0x392684u;
label_392684:
    // 0x392684: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x392684u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_392688:
    // 0x392688: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x392688u;
    SET_GPR_U32(ctx, 31, 0x392690u);
    ctx->pc = 0x39268Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392688u;
    // 0x39268c: 0x8fa40188  lw          $a0, 0x188($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x392688u, 0x392690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392690u;
label_392690:
    // 0x392690: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x392690u;
    SET_GPR_U32(ctx, 31, 0x392698u);
    ctx->pc = 0x392694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392690u;
    // 0x392694: 0x8fa4018c  lw          $a0, 0x18C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x392690u, 0x392698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392698u;
label_392698:
    // 0x392698: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x392698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x39269c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x39269Cu;
    {
        const bool branch_taken_0x39269c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3926A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39269Cu;
        // 0x3926a0: 0x8fa20194  lw          $v0, 0x194($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39269c) {
            ctx->pc = 0x3926C4u;
            goto label_3926c4;
        }
    }
    ctx->pc = 0x3926A4u;
    // 0x3926a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3926A4u;
    {
        const bool branch_taken_0x3926a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3926a4) {
            ctx->pc = 0x3926BCu;
            goto label_3926bc;
        }
    }
    ctx->pc = 0x3926ACu;
    // 0x3926ac: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3926ACu;
    {
        const bool branch_taken_0x3926ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x3926ac) {
            ctx->pc = 0x3926BCu;
            goto label_3926bc;
        }
    }
    ctx->pc = 0x3926B4u;
    // 0x3926b4: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x3926B4u;
    SET_GPR_U32(ctx, 31, 0x3926BCu);
    ctx->pc = 0x3926B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3926B4u;
    // 0x3926b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x3926B4u, 0x3926BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3926BCu;
label_3926bc:
    // 0x3926bc: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x3926BCu;
    SET_GPR_U32(ctx, 31, 0x3926C4u);
    ctx->pc = 0x3926C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3926BCu;
    // 0x3926c0: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x3926BCu, 0x3926C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3926C4u;
label_3926c4:
    // 0x3926c4: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x3926C4u;
    SET_GPR_U32(ctx, 31, 0x3926CCu);
    ctx->pc = 0x3926C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3926C4u;
    // 0x3926c8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x3926C4u, 0x3926CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3926CCu;
label_3926cc:
    // 0x3926cc: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x3926ccu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3926d0: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x3926d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x3926d4: 0xac760000  sw          $s6, 0x0($v1)
    ctx->pc = 0x3926d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 22));
    // 0x3926d8: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x3926d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x3926dc: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3926DCu;
    {
        const bool branch_taken_0x3926dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3926dc) {
            ctx->pc = 0x3926E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3926DCu;
            // 0x3926e0: 0xac950000  sw          $s5, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3926E4u;
            goto label_3926e4;
        }
    }
    ctx->pc = 0x3926E4u;
label_3926e4:
    // 0x3926e4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x3926e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_3926e8:
    // 0x3926e8: 0xdfbf0240  ld          $ra, 0x240($sp)
    ctx->pc = 0x3926e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x3926ec: 0xdfbe0230  ld          $fp, 0x230($sp)
    ctx->pc = 0x3926ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x3926f0: 0xdfb70220  ld          $s7, 0x220($sp)
    ctx->pc = 0x3926f0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x3926f4: 0xdfb60210  ld          $s6, 0x210($sp)
    ctx->pc = 0x3926f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x3926f8: 0xdfb50200  ld          $s5, 0x200($sp)
    ctx->pc = 0x3926f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x3926fc: 0xdfb401f0  ld          $s4, 0x1F0($sp)
    ctx->pc = 0x3926fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x392700: 0xdfb301e0  ld          $s3, 0x1E0($sp)
    ctx->pc = 0x392700u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x392704: 0xdfb201d0  ld          $s2, 0x1D0($sp)
    ctx->pc = 0x392704u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x392708: 0xdfb101c0  ld          $s1, 0x1C0($sp)
    ctx->pc = 0x392708u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x39270c: 0xdfb001b0  ld          $s0, 0x1B0($sp)
    ctx->pc = 0x39270cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x392710: 0x3e00008  jr          $ra
    ctx->pc = 0x392710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392710u;
        // 0x392714: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x392718u;
}
