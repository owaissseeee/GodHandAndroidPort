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

// Function: func_002FF748
// Address: 0x2ff748 - 0x2ff8a0
void func_002FF748_0x2ff748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FF748_0x2ff748");
#endif

    switch (ctx->pc) {
        case 0x2ff894u: goto label_2ff894;
        default: break;
    }

    ctx->pc = 0x2ff748u;

    // 0x2ff748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ff748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ff74c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2ff74cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff750: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ff750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ff754: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2ff754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x2ff758: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2ff758u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff75c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2ff75cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff760: 0x8d42011c  lw          $v0, 0x11C($t2)
    ctx->pc = 0x2ff760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 284)));
    // 0x2ff764: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2ff764u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff768: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ff768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ff76c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2FF76Cu;
    {
        const bool branch_taken_0x2ff76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF76Cu;
        // 0x2ff770: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff76c) {
            ctx->pc = 0x2FF7F0u;
            goto label_2ff7f0;
        }
    }
    ctx->pc = 0x2FF774u;
    // 0x2ff774: 0x91420101  lbu         $v0, 0x101($t2)
    ctx->pc = 0x2ff774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 257)));
    // 0x2ff778: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x2ff778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2ff77c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ff77cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff780: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2ff780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2ff784: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x2ff784u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x2ff788: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x2ff788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2ff78c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2FF78Cu;
    {
        const bool branch_taken_0x2ff78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF78Cu;
        // 0x2ff790: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff78c) {
            ctx->pc = 0x2FF80Cu;
            goto label_2ff80c;
        }
    }
    ctx->pc = 0x2FF794u;
    // 0x2ff794: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2ff794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2ff798: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ff798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ff79c: 0x2442fa90  addiu       $v0, $v0, -0x570
    ctx->pc = 0x2ff79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965904));
    // 0x2ff7a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ff7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ff7a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ff7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ff7a8: 0x800008  jr          $a0
    ctx->pc = 0x2FF7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2FF7B0u: goto label_2ff7b0;
            case 0x2FF7B8u: goto label_2ff7b8;
            case 0x2FF7C0u: goto label_2ff7c0;
            case 0x2FF7C8u: goto label_2ff7c8;
            case 0x2FF7D0u: goto label_2ff7d0;
            case 0x2FF7D8u: goto label_2ff7d8;
            case 0x2FF7E4u: goto label_2ff7e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF7A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2FF7B0u;
label_2ff7b0:
    // 0x2ff7b0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2FF7B0u;
    {
        const bool branch_taken_0x2ff7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7B0u;
        // 0x2ff7b4: 0x2409000c  addiu       $t1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff7b0) {
            ctx->pc = 0x2FF80Cu;
            goto label_2ff80c;
        }
    }
    ctx->pc = 0x2FF7B8u;
label_2ff7b8:
    // 0x2ff7b8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2FF7B8u;
    {
        const bool branch_taken_0x2ff7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7B8u;
        // 0x2ff7bc: 0x2409000b  addiu       $t1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff7b8) {
            ctx->pc = 0x2FF80Cu;
            goto label_2ff80c;
        }
    }
    ctx->pc = 0x2FF7C0u;
label_2ff7c0:
    // 0x2ff7c0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2FF7C0u;
    {
        const bool branch_taken_0x2ff7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7C0u;
        // 0x2ff7c4: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff7c0) {
            ctx->pc = 0x2FF80Cu;
            goto label_2ff80c;
        }
    }
    ctx->pc = 0x2FF7C8u;
label_2ff7c8:
    // 0x2ff7c8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2FF7C8u;
    {
        const bool branch_taken_0x2ff7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7C8u;
        // 0x2ff7cc: 0x24090009  addiu       $t1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff7c8) {
            ctx->pc = 0x2FF80Cu;
            goto label_2ff80c;
        }
    }
    ctx->pc = 0x2FF7D0u;
label_2ff7d0:
    // 0x2ff7d0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2FF7D0u;
    {
        const bool branch_taken_0x2ff7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7D0u;
        // 0x2ff7d4: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff7d0) {
            ctx->pc = 0x2FF80Cu;
            goto label_2ff80c;
        }
    }
    ctx->pc = 0x2FF7D8u;
label_2ff7d8:
    // 0x2ff7d8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2ff7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ff7dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2FF7DCu;
    {
        const bool branch_taken_0x2ff7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7DCu;
        // 0x2ff7e0: 0x24090007  addiu       $t1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff7dc) {
            ctx->pc = 0x2FF80Cu;
            goto label_2ff80c;
        }
    }
    ctx->pc = 0x2FF7E4u;
label_2ff7e4:
    // 0x2ff7e4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2ff7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ff7e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2FF7E8u;
    {
        const bool branch_taken_0x2ff7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7E8u;
        // 0x2ff7ec: 0x24090003  addiu       $t1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff7e8) {
            ctx->pc = 0x2FF80Cu;
            goto label_2ff80c;
        }
    }
    ctx->pc = 0x2FF7F0u;
label_2ff7f0:
    // 0x2ff7f0: 0x292403fc  slti        $a0, $t1, 0x3FC
    ctx->pc = 0x2ff7f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)1020) ? 1 : 0);
    // 0x2ff7f4: 0x240303fc  addiu       $v1, $zero, 0x3FC
    ctx->pc = 0x2ff7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1020));
    // 0x2ff7f8: 0x64480a  movz        $t1, $v1, $a0
    ctx->pc = 0x2ff7f8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x2ff7fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ff7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ff800: 0x49102a  slt         $v0, $v0, $t1
    ctx->pc = 0x2ff800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2ff804: 0x91460101  lbu         $a2, 0x101($t2)
    ctx->pc = 0x2ff804u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 257)));
    // 0x2ff808: 0x2480a  movz        $t1, $zero, $v0
    ctx->pc = 0x2ff808u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_2ff80c:
    // 0x2ff80c: 0x8d44011c  lw          $a0, 0x11C($t2)
    ctx->pc = 0x2ff80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 284)));
    // 0x2ff810: 0x30822000  andi        $v0, $a0, 0x2000
    ctx->pc = 0x2ff810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x2ff814: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FF814u;
    {
        const bool branch_taken_0x2ff814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF814u;
        // 0x2ff818: 0x30824000  andi        $v0, $a0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff814) {
            ctx->pc = 0x2FF834u;
            goto label_2ff834;
        }
    }
    ctx->pc = 0x2FF81Cu;
    // 0x2ff81c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FF81Cu;
    {
        const bool branch_taken_0x2ff81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF81Cu;
        // 0x2ff820: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff81c) {
            ctx->pc = 0x2FF82Cu;
            goto label_2ff82c;
        }
    }
    ctx->pc = 0x2FF824u;
    // 0x2ff824: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FF824u;
    {
        const bool branch_taken_0x2ff824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF824u;
        // 0x2ff828: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff824) {
            ctx->pc = 0x2FF844u;
            goto label_2ff844;
        }
    }
    ctx->pc = 0x2FF82Cu;
label_2ff82c:
    // 0x2ff82c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FF82Cu;
    {
        const bool branch_taken_0x2ff82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF82Cu;
        // 0x2ff830: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff82c) {
            ctx->pc = 0x2FF844u;
            goto label_2ff844;
        }
    }
    ctx->pc = 0x2FF834u;
label_2ff834:
    // 0x2ff834: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FF834u;
    {
        const bool branch_taken_0x2ff834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF834u;
        // 0x2ff838: 0x61600  sll         $v0, $a2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff834) {
            ctx->pc = 0x2FF848u;
            goto label_2ff848;
        }
    }
    ctx->pc = 0x2FF83Cu;
    // 0x2ff83c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2ff83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ff840: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x2ff840u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2ff844:
    // 0x2ff844: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x2ff844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_2ff848:
    // 0x2ff848: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x2ff848u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2ff84c: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x2ff84cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ff850: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2FF850u;
    {
        const bool branch_taken_0x2ff850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff850) {
            ctx->pc = 0x2FF854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF850u;
            // 0x2ff854: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF884u;
            goto label_2ff884;
        }
    }
    ctx->pc = 0x2FF858u;
    // 0x2ff858: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ff858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ff85c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FF85Cu;
    {
        const bool branch_taken_0x2ff85c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FF860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF85Cu;
        // 0x2ff860: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff85c) {
            ctx->pc = 0x2FF870u;
            goto label_2ff870;
        }
    }
    ctx->pc = 0x2FF864u;
    // 0x2ff864: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2ff864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ff868: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FF868u;
    {
        const bool branch_taken_0x2ff868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF868u;
        // 0x2ff86c: 0x24090007  addiu       $t1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff868) {
            ctx->pc = 0x2FF880u;
            goto label_2ff880;
        }
    }
    ctx->pc = 0x2FF870u;
label_2ff870:
    // 0x2ff870: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FF870u;
    {
        const bool branch_taken_0x2ff870 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FF874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF870u;
        // 0x2ff874: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff870) {
            ctx->pc = 0x2FF884u;
            goto label_2ff884;
        }
    }
    ctx->pc = 0x2FF878u;
    // 0x2ff878: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2ff878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ff87c: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x2ff87cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ff880:
    // 0x2ff880: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x2ff880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
label_2ff884:
    // 0x2ff884: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x2ff884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff888: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x2ff888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x2ff88c: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x2FF88Cu;
    SET_GPR_U32(ctx, 31, 0x2FF894u);
    ctx->pc = 0x2FF890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF88Cu;
    // 0x2ff890: 0x160382d  daddu       $a3, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x2FF88Cu, 0x2FF894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF894u;
label_2ff894:
    // 0x2ff894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ff894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff898: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF898u;
        // 0x2ff89c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF8A0u;
}
