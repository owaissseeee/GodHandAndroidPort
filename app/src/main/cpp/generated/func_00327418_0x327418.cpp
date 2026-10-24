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

// Function: func_00327418
// Address: 0x327418 - 0x327568
void func_00327418_0x327418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00327418_0x327418");
#endif

    switch (ctx->pc) {
        case 0x327418u: goto label_327418;
        case 0x32741cu: goto label_32741c;
        case 0x327420u: goto label_327420;
        case 0x327424u: goto label_327424;
        case 0x327428u: goto label_327428;
        case 0x32742cu: goto label_32742c;
        case 0x327430u: goto label_327430;
        case 0x327434u: goto label_327434;
        case 0x327438u: goto label_327438;
        case 0x32743cu: goto label_32743c;
        case 0x327440u: goto label_327440;
        case 0x327444u: goto label_327444;
        case 0x327448u: goto label_327448;
        case 0x32744cu: goto label_32744c;
        case 0x327450u: goto label_327450;
        case 0x327454u: goto label_327454;
        case 0x327458u: goto label_327458;
        case 0x32745cu: goto label_32745c;
        case 0x327460u: goto label_327460;
        case 0x327464u: goto label_327464;
        case 0x327468u: goto label_327468;
        case 0x32746cu: goto label_32746c;
        case 0x327470u: goto label_327470;
        case 0x327474u: goto label_327474;
        case 0x327478u: goto label_327478;
        case 0x32747cu: goto label_32747c;
        case 0x327480u: goto label_327480;
        case 0x327484u: goto label_327484;
        case 0x327488u: goto label_327488;
        case 0x32748cu: goto label_32748c;
        case 0x327490u: goto label_327490;
        case 0x327494u: goto label_327494;
        case 0x327498u: goto label_327498;
        case 0x32749cu: goto label_32749c;
        case 0x3274a0u: goto label_3274a0;
        case 0x3274a4u: goto label_3274a4;
        case 0x3274a8u: goto label_3274a8;
        case 0x3274acu: goto label_3274ac;
        case 0x3274b0u: goto label_3274b0;
        case 0x3274b4u: goto label_3274b4;
        case 0x3274b8u: goto label_3274b8;
        case 0x3274bcu: goto label_3274bc;
        case 0x3274c0u: goto label_3274c0;
        case 0x3274c4u: goto label_3274c4;
        case 0x3274c8u: goto label_3274c8;
        case 0x3274ccu: goto label_3274cc;
        case 0x3274d0u: goto label_3274d0;
        case 0x3274d4u: goto label_3274d4;
        case 0x3274d8u: goto label_3274d8;
        case 0x3274dcu: goto label_3274dc;
        case 0x3274e0u: goto label_3274e0;
        case 0x3274e4u: goto label_3274e4;
        case 0x3274e8u: goto label_3274e8;
        case 0x3274ecu: goto label_3274ec;
        case 0x3274f0u: goto label_3274f0;
        case 0x3274f4u: goto label_3274f4;
        case 0x3274f8u: goto label_3274f8;
        case 0x3274fcu: goto label_3274fc;
        case 0x327500u: goto label_327500;
        case 0x327504u: goto label_327504;
        case 0x327508u: goto label_327508;
        case 0x32750cu: goto label_32750c;
        case 0x327510u: goto label_327510;
        case 0x327514u: goto label_327514;
        case 0x327518u: goto label_327518;
        case 0x32751cu: goto label_32751c;
        case 0x327520u: goto label_327520;
        case 0x327524u: goto label_327524;
        case 0x327528u: goto label_327528;
        case 0x32752cu: goto label_32752c;
        case 0x327530u: goto label_327530;
        case 0x327534u: goto label_327534;
        case 0x327538u: goto label_327538;
        case 0x32753cu: goto label_32753c;
        case 0x327540u: goto label_327540;
        case 0x327544u: goto label_327544;
        case 0x327548u: goto label_327548;
        case 0x32754cu: goto label_32754c;
        case 0x327550u: goto label_327550;
        case 0x327554u: goto label_327554;
        case 0x327558u: goto label_327558;
        case 0x32755cu: goto label_32755c;
        case 0x327560u: goto label_327560;
        case 0x327564u: goto label_327564;
        default: break;
    }

    ctx->pc = 0x327418u;

label_327418:
    // 0x327418: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x327418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_32741c:
    // 0x32741c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x32741cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_327420:
    // 0x327420: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x327420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_327424:
    // 0x327424: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x327424u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_327428:
    // 0x327428: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x327428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_32742c:
    // 0x32742c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x32742cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327430:
    // 0x327430: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x327430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_327434:
    // 0x327434: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x327434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_327438:
    // 0x327438: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x327438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_32743c:
    // 0x32743c: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x32743cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_327440:
    // 0x327440: 0x82430002  lb          $v1, 0x2($s2)
    ctx->pc = 0x327440u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_327444:
    // 0x327444: 0x28840  sll         $s1, $v0, 1
    ctx->pc = 0x327444u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_327448:
    // 0x327448: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
label_32744c:
    if (ctx->pc == 0x32744Cu) {
        ctx->pc = 0x32744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327448u;
        // 0x32744c: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327450u;
        goto label_327450;
    }
    ctx->pc = 0x327448u;
    {
        const bool branch_taken_0x327448 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x32744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327448u;
        // 0x32744c: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327448) {
            ctx->pc = 0x3274B4u;
            goto label_3274b4;
        }
    }
    ctx->pc = 0x327450u;
label_327450:
    // 0x327450: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x327450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_327454:
    // 0x327454: 0x0  nop
    ctx->pc = 0x327454u;
    // NOP
label_327458:
    // 0x327458: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x327458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32745c:
    // 0x32745c: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x32745cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_327460:
    // 0x327460: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x327460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_327464:
    // 0x327464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x327464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327468:
    // 0x327468: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x327468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32746c:
    // 0x32746c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x32746cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_327470:
    // 0x327470: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x327470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_327474:
    // 0x327474: 0x40f809  jalr        $v0
label_327478:
    if (ctx->pc == 0x327478u) {
        ctx->pc = 0x327478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327474u;
        // 0x327478: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32747Cu;
        goto label_32747c;
    }
    ctx->pc = 0x327474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32747Cu);
        ctx->pc = 0x327478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327474u;
        // 0x327478: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327474u, 0x32747Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32747Cu;
label_32747c:
    // 0x32747c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x32747cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_327480:
    // 0x327480: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x327480u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_327484:
    // 0x327484: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x327484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327488:
    // 0x327488: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x327488u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32748c:
    // 0x32748c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x32748cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_327490:
    // 0x327490: 0x228102a  slt         $v0, $s1, $t0
    ctx->pc = 0x327490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_327494:
    // 0x327494: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x327494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_327498:
    // 0x327498: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x327498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_32749c:
    // 0x32749c: 0x60f809  jalr        $v1
label_3274a0:
    if (ctx->pc == 0x3274A0u) {
        ctx->pc = 0x3274A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32749Cu;
        // 0x3274a0: 0x102880a  movz        $s1, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3274A4u;
        goto label_3274a4;
    }
    ctx->pc = 0x32749Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3274A4u);
        ctx->pc = 0x3274A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32749Cu;
        // 0x3274a0: 0x102880a  movz        $s1, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32749Cu, 0x3274A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3274A4u;
label_3274a4:
    // 0x3274a4: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x3274a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_3274a8:
    // 0x3274a8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x3274a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3274ac:
    // 0x3274ac: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_3274b0:
    if (ctx->pc == 0x3274B0u) {
        ctx->pc = 0x3274B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3274ACu;
        // 0x3274b0: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3274B4u;
        goto label_3274b4;
    }
    ctx->pc = 0x3274ACu;
    {
        const bool branch_taken_0x3274ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3274B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3274ACu;
        // 0x3274b0: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3274ac) {
            ctx->pc = 0x327458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327458;
        }
    }
    ctx->pc = 0x3274B4u;
label_3274b4:
    // 0x3274b4: 0x1117c2  srl         $v0, $s1, 31
    ctx->pc = 0x3274b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_3274b8:
    // 0x3274b8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3274b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3274bc:
    // 0x3274bc: 0x2a043  sra         $s4, $v0, 1
    ctx->pc = 0x3274bcu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 1));
label_3274c0:
    // 0x3274c0: 0x148840  sll         $s1, $s4, 1
    ctx->pc = 0x3274c0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_3274c4:
    // 0x3274c4: 0x1a200020  blez        $s1, . + 4 + (0x20 << 2)
label_3274c8:
    if (ctx->pc == 0x3274C8u) {
        ctx->pc = 0x3274C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3274C4u;
        // 0x3274c8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3274CCu;
        goto label_3274cc;
    }
    ctx->pc = 0x3274C4u;
    {
        const bool branch_taken_0x3274c4 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x3274C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3274C4u;
        // 0x3274c8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3274c4) {
            ctx->pc = 0x327548u;
            goto label_327548;
        }
    }
    ctx->pc = 0x3274CCu;
label_3274cc:
    // 0x3274cc: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x3274ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_3274d0:
    // 0x3274d0: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
label_3274d4:
    if (ctx->pc == 0x3274D4u) {
        ctx->pc = 0x3274D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3274D0u;
        // 0x3274d4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3274D8u;
        goto label_3274d8;
    }
    ctx->pc = 0x3274D0u;
    {
        const bool branch_taken_0x3274d0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3274D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3274D0u;
        // 0x3274d4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3274d0) {
            ctx->pc = 0x327538u;
            goto label_327538;
        }
    }
    ctx->pc = 0x3274D8u;
label_3274d8:
    // 0x3274d8: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x3274d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_3274dc:
    // 0x3274dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3274dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3274e0:
    // 0x3274e0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x3274e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3274e4:
    // 0x3274e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3274e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3274e8:
    // 0x3274e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3274e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3274ec:
    // 0x3274ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3274ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3274f0:
    // 0x3274f0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3274f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3274f4:
    // 0x3274f4: 0x40f809  jalr        $v0
label_3274f8:
    if (ctx->pc == 0x3274F8u) {
        ctx->pc = 0x3274F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3274F4u;
        // 0x3274f8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3274FCu;
        goto label_3274fc;
    }
    ctx->pc = 0x3274F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3274FCu);
        ctx->pc = 0x3274F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3274F4u;
        // 0x3274f8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3274F4u, 0x3274FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3274FCu;
label_3274fc:
    // 0x3274fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3274fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327500:
    // 0x327500: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x327500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_327504:
    // 0x327504: 0xc0e94bc  jal         func_3A52F0
label_327508:
    if (ctx->pc == 0x327508u) {
        ctx->pc = 0x327508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327504u;
        // 0x327508: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32750Cu;
        goto label_32750c;
    }
    ctx->pc = 0x327504u;
    SET_GPR_U32(ctx, 31, 0x32750Cu);
    ctx->pc = 0x327508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327504u;
    // 0x327508: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x327504u, 0x32750Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32750Cu;
label_32750c:
    // 0x32750c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x32750cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_327510:
    // 0x327510: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x327510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_327514:
    // 0x327514: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x327514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_327518:
    // 0x327518: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x327518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32751c:
    // 0x32751c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x32751cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_327520:
    // 0x327520: 0x60f809  jalr        $v1
label_327524:
    if (ctx->pc == 0x327524u) {
        ctx->pc = 0x327524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327520u;
        // 0x327524: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327528u;
        goto label_327528;
    }
    ctx->pc = 0x327520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x327528u);
        ctx->pc = 0x327524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327520u;
        // 0x327524: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327520u, 0x327528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x327528u;
label_327528:
    // 0x327528: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x327528u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_32752c:
    // 0x32752c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x32752cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_327530:
    // 0x327530: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
label_327534:
    if (ctx->pc == 0x327534u) {
        ctx->pc = 0x327534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327530u;
        // 0x327534: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327538u;
        goto label_327538;
    }
    ctx->pc = 0x327530u;
    {
        const bool branch_taken_0x327530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x327530) {
            ctx->pc = 0x327534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327530u;
            // 0x327534: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3274E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3274e0;
        }
    }
    ctx->pc = 0x327538u;
label_327538:
    // 0x327538: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x327538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_32753c:
    // 0x32753c: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x32753cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_327540:
    // 0x327540: 0xae4200a0  sw          $v0, 0xA0($s2)
    ctx->pc = 0x327540u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
label_327544:
    // 0x327544: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x327544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_327548:
    // 0x327548: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x327548u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_32754c:
    // 0x32754c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x32754cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_327550:
    // 0x327550: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x327550u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_327554:
    // 0x327554: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x327554u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_327558:
    // 0x327558: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x327558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_32755c:
    // 0x32755c: 0x3e00008  jr          $ra
label_327560:
    if (ctx->pc == 0x327560u) {
        ctx->pc = 0x327560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32755Cu;
        // 0x327560: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327564u;
        goto label_327564;
    }
    ctx->pc = 0x32755Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32755Cu;
        // 0x327560: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32755Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327564u;
label_327564:
    // 0x327564: 0x0  nop
    ctx->pc = 0x327564u;
    // NOP
    ctx->pc = 0x327568u;
}
