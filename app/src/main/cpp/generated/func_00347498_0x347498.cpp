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

// Function: func_00347498
// Address: 0x347498 - 0x3475f0
void func_00347498_0x347498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00347498_0x347498");
#endif

    switch (ctx->pc) {
        case 0x347498u: goto label_347498;
        case 0x34749cu: goto label_34749c;
        case 0x3474a0u: goto label_3474a0;
        case 0x3474a4u: goto label_3474a4;
        case 0x3474a8u: goto label_3474a8;
        case 0x3474acu: goto label_3474ac;
        case 0x3474b0u: goto label_3474b0;
        case 0x3474b4u: goto label_3474b4;
        case 0x3474b8u: goto label_3474b8;
        case 0x3474bcu: goto label_3474bc;
        case 0x3474c0u: goto label_3474c0;
        case 0x3474c4u: goto label_3474c4;
        case 0x3474c8u: goto label_3474c8;
        case 0x3474ccu: goto label_3474cc;
        case 0x3474d0u: goto label_3474d0;
        case 0x3474d4u: goto label_3474d4;
        case 0x3474d8u: goto label_3474d8;
        case 0x3474dcu: goto label_3474dc;
        case 0x3474e0u: goto label_3474e0;
        case 0x3474e4u: goto label_3474e4;
        case 0x3474e8u: goto label_3474e8;
        case 0x3474ecu: goto label_3474ec;
        case 0x3474f0u: goto label_3474f0;
        case 0x3474f4u: goto label_3474f4;
        case 0x3474f8u: goto label_3474f8;
        case 0x3474fcu: goto label_3474fc;
        case 0x347500u: goto label_347500;
        case 0x347504u: goto label_347504;
        case 0x347508u: goto label_347508;
        case 0x34750cu: goto label_34750c;
        case 0x347510u: goto label_347510;
        case 0x347514u: goto label_347514;
        case 0x347518u: goto label_347518;
        case 0x34751cu: goto label_34751c;
        case 0x347520u: goto label_347520;
        case 0x347524u: goto label_347524;
        case 0x347528u: goto label_347528;
        case 0x34752cu: goto label_34752c;
        case 0x347530u: goto label_347530;
        case 0x347534u: goto label_347534;
        case 0x347538u: goto label_347538;
        case 0x34753cu: goto label_34753c;
        case 0x347540u: goto label_347540;
        case 0x347544u: goto label_347544;
        case 0x347548u: goto label_347548;
        case 0x34754cu: goto label_34754c;
        case 0x347550u: goto label_347550;
        case 0x347554u: goto label_347554;
        case 0x347558u: goto label_347558;
        case 0x34755cu: goto label_34755c;
        case 0x347560u: goto label_347560;
        case 0x347564u: goto label_347564;
        case 0x347568u: goto label_347568;
        case 0x34756cu: goto label_34756c;
        case 0x347570u: goto label_347570;
        case 0x347574u: goto label_347574;
        case 0x347578u: goto label_347578;
        case 0x34757cu: goto label_34757c;
        case 0x347580u: goto label_347580;
        case 0x347584u: goto label_347584;
        case 0x347588u: goto label_347588;
        case 0x34758cu: goto label_34758c;
        case 0x347590u: goto label_347590;
        case 0x347594u: goto label_347594;
        case 0x347598u: goto label_347598;
        case 0x34759cu: goto label_34759c;
        case 0x3475a0u: goto label_3475a0;
        case 0x3475a4u: goto label_3475a4;
        case 0x3475a8u: goto label_3475a8;
        case 0x3475acu: goto label_3475ac;
        case 0x3475b0u: goto label_3475b0;
        case 0x3475b4u: goto label_3475b4;
        case 0x3475b8u: goto label_3475b8;
        case 0x3475bcu: goto label_3475bc;
        case 0x3475c0u: goto label_3475c0;
        case 0x3475c4u: goto label_3475c4;
        case 0x3475c8u: goto label_3475c8;
        case 0x3475ccu: goto label_3475cc;
        case 0x3475d0u: goto label_3475d0;
        case 0x3475d4u: goto label_3475d4;
        case 0x3475d8u: goto label_3475d8;
        case 0x3475dcu: goto label_3475dc;
        case 0x3475e0u: goto label_3475e0;
        case 0x3475e4u: goto label_3475e4;
        case 0x3475e8u: goto label_3475e8;
        case 0x3475ecu: goto label_3475ec;
        default: break;
    }

    ctx->pc = 0x347498u;

label_347498:
    // 0x347498: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x347498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_34749c:
    // 0x34749c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34749cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3474a0:
    // 0x3474a0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3474a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_3474a4:
    // 0x3474a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3474a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3474a8:
    // 0x3474a8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x3474a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_3474ac:
    // 0x3474ac: 0x26110194  addiu       $s1, $s0, 0x194
    ctx->pc = 0x3474acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 404));
label_3474b0:
    // 0x3474b0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x3474b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_3474b4:
    // 0x3474b4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x3474b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_3474b8:
    // 0x3474b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3474b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3474bc:
    // 0x3474bc: 0x8e12017c  lw          $s2, 0x17C($s0)
    ctx->pc = 0x3474bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_3474c0:
    // 0x3474c0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3474c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3474c4:
    // 0x3474c4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3474c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3474c8:
    // 0x3474c8: 0x40f809  jalr        $v0
label_3474cc:
    if (ctx->pc == 0x3474CCu) {
        ctx->pc = 0x3474CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3474C8u;
        // 0x3474cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3474D0u;
        goto label_3474d0;
    }
    ctx->pc = 0x3474C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3474D0u);
        ctx->pc = 0x3474CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3474C8u;
        // 0x3474cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3474C8u, 0x3474D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3474D0u;
label_3474d0:
    // 0x3474d0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x3474d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_3474d4:
    // 0x3474d4: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x3474d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_3474d8:
    // 0x3474d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3474d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3474dc:
    // 0x3474dc: 0x24a58c98  addiu       $a1, $a1, -0x7368
    ctx->pc = 0x3474dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937752));
label_3474e0:
    // 0x3474e0: 0x24c68ca0  addiu       $a2, $a2, -0x7360
    ctx->pc = 0x3474e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937760));
label_3474e4:
    // 0x3474e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3474e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3474e8:
    // 0x3474e8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_3474ec:
    if (ctx->pc == 0x3474ECu) {
        ctx->pc = 0x3474ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3474E8u;
        // 0x3474ec: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3474F0u;
        goto label_3474f0;
    }
    ctx->pc = 0x3474E8u;
    {
        const bool branch_taken_0x3474e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3474ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3474E8u;
        // 0x3474ec: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3474e8) {
            ctx->pc = 0x347508u;
            goto label_347508;
        }
    }
    ctx->pc = 0x3474F0u;
label_3474f0:
    // 0x3474f0: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x3474f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_3474f4:
    // 0x3474f4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x3474f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_3474f8:
    // 0x3474f8: 0xc0ceb7e  jal         func_33ADF8
label_3474fc:
    if (ctx->pc == 0x3474FCu) {
        ctx->pc = 0x3474FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3474F8u;
        // 0x3474fc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347500u;
        goto label_347500;
    }
    ctx->pc = 0x3474F8u;
    SET_GPR_U32(ctx, 31, 0x347500u);
    ctx->pc = 0x3474FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3474F8u;
    // 0x3474fc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ADF8u, 0x3474F8u, 0x347500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347500u;
label_347500:
    // 0x347500: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_347504:
    if (ctx->pc == 0x347504u) {
        ctx->pc = 0x347504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347500u;
        // 0x347504: 0x26130188  addiu       $s3, $s0, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347508u;
        goto label_347508;
    }
    ctx->pc = 0x347500u;
    {
        const bool branch_taken_0x347500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x347504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347500u;
        // 0x347504: 0x26130188  addiu       $s3, $s0, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347500) {
            ctx->pc = 0x347520u;
            goto label_347520;
        }
    }
    ctx->pc = 0x347508u;
label_347508:
    // 0x347508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x347508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34750c:
    // 0x34750c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x34750cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_347510:
    // 0x347510: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x347510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_347514:
    // 0x347514: 0x1000002c  b           . + 4 + (0x2C << 2)
label_347518:
    if (ctx->pc == 0x347518u) {
        ctx->pc = 0x347518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347514u;
        // 0x347518: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34751Cu;
        goto label_34751c;
    }
    ctx->pc = 0x347514u;
    {
        const bool branch_taken_0x347514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347514u;
        // 0x347518: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347514) {
            ctx->pc = 0x3475C8u;
            goto label_3475c8;
        }
    }
    ctx->pc = 0x34751Cu;
label_34751c:
    // 0x34751c: 0x0  nop
    ctx->pc = 0x34751cu;
    // NOP
label_347520:
    // 0x347520: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x347520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_347524:
    // 0x347524: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_347528:
    if (ctx->pc == 0x347528u) {
        ctx->pc = 0x347528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347524u;
        // 0x347528: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34752Cu;
        goto label_34752c;
    }
    ctx->pc = 0x347524u;
    {
        const bool branch_taken_0x347524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347524u;
        // 0x347528: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347524) {
            ctx->pc = 0x3475A8u;
            goto label_3475a8;
        }
    }
    ctx->pc = 0x34752Cu;
label_34752c:
    // 0x34752c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x34752cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_347530:
    // 0x347530: 0xc0e9452  jal         func_3A5148
label_347534:
    if (ctx->pc == 0x347534u) {
        ctx->pc = 0x347534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347530u;
        // 0x347534: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347538u;
        goto label_347538;
    }
    ctx->pc = 0x347530u;
    SET_GPR_U32(ctx, 31, 0x347538u);
    ctx->pc = 0x347534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347530u;
    // 0x347534: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x347530u, 0x347538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347538u;
label_347538:
    // 0x347538: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x347538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_34753c:
    // 0x34753c: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x34753cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_347540:
    // 0x347540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x347540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_347544:
    // 0x347544: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x347544u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_347548:
    // 0x347548: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x347548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_34754c:
    // 0x34754c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x34754cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_347550:
    // 0x347550: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x347550u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_347554:
    // 0x347554: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x347554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_347558:
    // 0x347558: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x347558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34755c:
    // 0x34755c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x34755cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_347560:
    // 0x347560: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x347560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_347564:
    // 0x347564: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x347564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
label_347568:
    // 0x347568: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x347568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34756c:
    // 0x34756c: 0x40f809  jalr        $v0
label_347570:
    if (ctx->pc == 0x347570u) {
        ctx->pc = 0x347570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34756Cu;
        // 0x347570: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x347574u;
        goto label_347574;
    }
    ctx->pc = 0x34756Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x347574u);
        ctx->pc = 0x347570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34756Cu;
        // 0x347570: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34756Cu, 0x347574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x347574u;
label_347574:
    // 0x347574: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x347574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_347578:
    // 0x347578: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x347578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_34757c:
    // 0x34757c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x34757cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_347580:
    // 0x347580: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x347580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_347584:
    // 0x347584: 0x40f809  jalr        $v0
label_347588:
    if (ctx->pc == 0x347588u) {
        ctx->pc = 0x347588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347584u;
        // 0x347588: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34758Cu;
        goto label_34758c;
    }
    ctx->pc = 0x347584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34758Cu);
        ctx->pc = 0x347588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347584u;
        // 0x347588: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347584u, 0x34758Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34758Cu;
label_34758c:
    // 0x34758c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x34758cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_347590:
    // 0x347590: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x347590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_347594:
    // 0x347594: 0x40f809  jalr        $v0
label_347598:
    if (ctx->pc == 0x347598u) {
        ctx->pc = 0x347598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347594u;
        // 0x347598: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34759Cu;
        goto label_34759c;
    }
    ctx->pc = 0x347594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34759Cu);
        ctx->pc = 0x347598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347594u;
        // 0x347598: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347594u, 0x34759Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34759Cu;
label_34759c:
    // 0x34759c: 0x1000000b  b           . + 4 + (0xB << 2)
label_3475a0:
    if (ctx->pc == 0x3475A0u) {
        ctx->pc = 0x3475A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34759Cu;
        // 0x3475a0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3475A4u;
        goto label_3475a4;
    }
    ctx->pc = 0x34759Cu;
    {
        const bool branch_taken_0x34759c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3475A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34759Cu;
        // 0x3475a0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34759c) {
            ctx->pc = 0x3475CCu;
            goto label_3475cc;
        }
    }
    ctx->pc = 0x3475A4u;
label_3475a4:
    // 0x3475a4: 0x0  nop
    ctx->pc = 0x3475a4u;
    // NOP
label_3475a8:
    // 0x3475a8: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x3475a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3475ac:
    // 0x3475ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3475acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3475b0:
    // 0x3475b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3475b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3475b4:
    // 0x3475b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3475b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3475b8:
    // 0x3475b8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3475b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3475bc:
    // 0x3475bc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3475bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3475c0:
    // 0x3475c0: 0xc0d1da6  jal         func_347698
label_3475c4:
    if (ctx->pc == 0x3475C4u) {
        ctx->pc = 0x3475C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3475C0u;
        // 0x3475c4: 0xae250008  sw          $a1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3475C8u;
        goto label_3475c8;
    }
    ctx->pc = 0x3475C0u;
    SET_GPR_U32(ctx, 31, 0x3475C8u);
    ctx->pc = 0x3475C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3475C0u;
    // 0x3475c4: 0xae250008  sw          $a1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347698u, 0x3475C0u, 0x3475C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3475C8u;
label_3475c8:
    // 0x3475c8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3475c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3475cc:
    // 0x3475cc: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x3475ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3475d0:
    // 0x3475d0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3475d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3475d4:
    // 0x3475d4: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x3475d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_3475d8:
    // 0x3475d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3475d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3475dc:
    // 0x3475dc: 0x3e00008  jr          $ra
label_3475e0:
    if (ctx->pc == 0x3475E0u) {
        ctx->pc = 0x3475E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3475DCu;
        // 0x3475e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3475E4u;
        goto label_3475e4;
    }
    ctx->pc = 0x3475DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3475E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3475DCu;
        // 0x3475e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3475DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3475E4u;
label_3475e4:
    // 0x3475e4: 0x0  nop
    ctx->pc = 0x3475e4u;
    // NOP
label_3475e8:
    // 0x3475e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3475e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3475ec:
    // 0x3475ec: 0x0  nop
    ctx->pc = 0x3475ecu;
    // NOP
    ctx->pc = 0x3475f0u;
}
