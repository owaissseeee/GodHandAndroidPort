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

// Function: func_00326890
// Address: 0x326890 - 0x326b98
void func_00326890_0x326890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00326890_0x326890");
#endif

    switch (ctx->pc) {
        case 0x326890u: goto label_326890;
        case 0x326894u: goto label_326894;
        case 0x326898u: goto label_326898;
        case 0x32689cu: goto label_32689c;
        case 0x3268a0u: goto label_3268a0;
        case 0x3268a4u: goto label_3268a4;
        case 0x3268a8u: goto label_3268a8;
        case 0x3268acu: goto label_3268ac;
        case 0x3268b0u: goto label_3268b0;
        case 0x3268b4u: goto label_3268b4;
        case 0x3268b8u: goto label_3268b8;
        case 0x3268bcu: goto label_3268bc;
        case 0x3268c0u: goto label_3268c0;
        case 0x3268c4u: goto label_3268c4;
        case 0x3268c8u: goto label_3268c8;
        case 0x3268ccu: goto label_3268cc;
        case 0x3268d0u: goto label_3268d0;
        case 0x3268d4u: goto label_3268d4;
        case 0x3268d8u: goto label_3268d8;
        case 0x3268dcu: goto label_3268dc;
        case 0x3268e0u: goto label_3268e0;
        case 0x3268e4u: goto label_3268e4;
        case 0x3268e8u: goto label_3268e8;
        case 0x3268ecu: goto label_3268ec;
        case 0x3268f0u: goto label_3268f0;
        case 0x3268f4u: goto label_3268f4;
        case 0x3268f8u: goto label_3268f8;
        case 0x3268fcu: goto label_3268fc;
        case 0x326900u: goto label_326900;
        case 0x326904u: goto label_326904;
        case 0x326908u: goto label_326908;
        case 0x32690cu: goto label_32690c;
        case 0x326910u: goto label_326910;
        case 0x326914u: goto label_326914;
        case 0x326918u: goto label_326918;
        case 0x32691cu: goto label_32691c;
        case 0x326920u: goto label_326920;
        case 0x326924u: goto label_326924;
        case 0x326928u: goto label_326928;
        case 0x32692cu: goto label_32692c;
        case 0x326930u: goto label_326930;
        case 0x326934u: goto label_326934;
        case 0x326938u: goto label_326938;
        case 0x32693cu: goto label_32693c;
        case 0x326940u: goto label_326940;
        case 0x326944u: goto label_326944;
        case 0x326948u: goto label_326948;
        case 0x32694cu: goto label_32694c;
        case 0x326950u: goto label_326950;
        case 0x326954u: goto label_326954;
        case 0x326958u: goto label_326958;
        case 0x32695cu: goto label_32695c;
        case 0x326960u: goto label_326960;
        case 0x326964u: goto label_326964;
        case 0x326968u: goto label_326968;
        case 0x32696cu: goto label_32696c;
        case 0x326970u: goto label_326970;
        case 0x326974u: goto label_326974;
        case 0x326978u: goto label_326978;
        case 0x32697cu: goto label_32697c;
        case 0x326980u: goto label_326980;
        case 0x326984u: goto label_326984;
        case 0x326988u: goto label_326988;
        case 0x32698cu: goto label_32698c;
        case 0x326990u: goto label_326990;
        case 0x326994u: goto label_326994;
        case 0x326998u: goto label_326998;
        case 0x32699cu: goto label_32699c;
        case 0x3269a0u: goto label_3269a0;
        case 0x3269a4u: goto label_3269a4;
        case 0x3269a8u: goto label_3269a8;
        case 0x3269acu: goto label_3269ac;
        case 0x3269b0u: goto label_3269b0;
        case 0x3269b4u: goto label_3269b4;
        case 0x3269b8u: goto label_3269b8;
        case 0x3269bcu: goto label_3269bc;
        case 0x3269c0u: goto label_3269c0;
        case 0x3269c4u: goto label_3269c4;
        case 0x3269c8u: goto label_3269c8;
        case 0x3269ccu: goto label_3269cc;
        case 0x3269d0u: goto label_3269d0;
        case 0x3269d4u: goto label_3269d4;
        case 0x3269d8u: goto label_3269d8;
        case 0x3269dcu: goto label_3269dc;
        case 0x3269e0u: goto label_3269e0;
        case 0x3269e4u: goto label_3269e4;
        case 0x3269e8u: goto label_3269e8;
        case 0x3269ecu: goto label_3269ec;
        case 0x3269f0u: goto label_3269f0;
        case 0x3269f4u: goto label_3269f4;
        case 0x3269f8u: goto label_3269f8;
        case 0x3269fcu: goto label_3269fc;
        case 0x326a00u: goto label_326a00;
        case 0x326a04u: goto label_326a04;
        case 0x326a08u: goto label_326a08;
        case 0x326a0cu: goto label_326a0c;
        case 0x326a10u: goto label_326a10;
        case 0x326a14u: goto label_326a14;
        case 0x326a18u: goto label_326a18;
        case 0x326a1cu: goto label_326a1c;
        case 0x326a20u: goto label_326a20;
        case 0x326a24u: goto label_326a24;
        case 0x326a28u: goto label_326a28;
        case 0x326a2cu: goto label_326a2c;
        case 0x326a30u: goto label_326a30;
        case 0x326a34u: goto label_326a34;
        case 0x326a38u: goto label_326a38;
        case 0x326a3cu: goto label_326a3c;
        case 0x326a40u: goto label_326a40;
        case 0x326a44u: goto label_326a44;
        case 0x326a48u: goto label_326a48;
        case 0x326a4cu: goto label_326a4c;
        case 0x326a50u: goto label_326a50;
        case 0x326a54u: goto label_326a54;
        case 0x326a58u: goto label_326a58;
        case 0x326a5cu: goto label_326a5c;
        case 0x326a60u: goto label_326a60;
        case 0x326a64u: goto label_326a64;
        case 0x326a68u: goto label_326a68;
        case 0x326a6cu: goto label_326a6c;
        case 0x326a70u: goto label_326a70;
        case 0x326a74u: goto label_326a74;
        case 0x326a78u: goto label_326a78;
        case 0x326a7cu: goto label_326a7c;
        case 0x326a80u: goto label_326a80;
        case 0x326a84u: goto label_326a84;
        case 0x326a88u: goto label_326a88;
        case 0x326a8cu: goto label_326a8c;
        case 0x326a90u: goto label_326a90;
        case 0x326a94u: goto label_326a94;
        case 0x326a98u: goto label_326a98;
        case 0x326a9cu: goto label_326a9c;
        case 0x326aa0u: goto label_326aa0;
        case 0x326aa4u: goto label_326aa4;
        case 0x326aa8u: goto label_326aa8;
        case 0x326aacu: goto label_326aac;
        case 0x326ab0u: goto label_326ab0;
        case 0x326ab4u: goto label_326ab4;
        case 0x326ab8u: goto label_326ab8;
        case 0x326abcu: goto label_326abc;
        case 0x326ac0u: goto label_326ac0;
        case 0x326ac4u: goto label_326ac4;
        case 0x326ac8u: goto label_326ac8;
        case 0x326accu: goto label_326acc;
        case 0x326ad0u: goto label_326ad0;
        case 0x326ad4u: goto label_326ad4;
        case 0x326ad8u: goto label_326ad8;
        case 0x326adcu: goto label_326adc;
        case 0x326ae0u: goto label_326ae0;
        case 0x326ae4u: goto label_326ae4;
        case 0x326ae8u: goto label_326ae8;
        case 0x326aecu: goto label_326aec;
        case 0x326af0u: goto label_326af0;
        case 0x326af4u: goto label_326af4;
        case 0x326af8u: goto label_326af8;
        case 0x326afcu: goto label_326afc;
        case 0x326b00u: goto label_326b00;
        case 0x326b04u: goto label_326b04;
        case 0x326b08u: goto label_326b08;
        case 0x326b0cu: goto label_326b0c;
        case 0x326b10u: goto label_326b10;
        case 0x326b14u: goto label_326b14;
        case 0x326b18u: goto label_326b18;
        case 0x326b1cu: goto label_326b1c;
        case 0x326b20u: goto label_326b20;
        case 0x326b24u: goto label_326b24;
        case 0x326b28u: goto label_326b28;
        case 0x326b2cu: goto label_326b2c;
        case 0x326b30u: goto label_326b30;
        case 0x326b34u: goto label_326b34;
        case 0x326b38u: goto label_326b38;
        case 0x326b3cu: goto label_326b3c;
        case 0x326b40u: goto label_326b40;
        case 0x326b44u: goto label_326b44;
        case 0x326b48u: goto label_326b48;
        case 0x326b4cu: goto label_326b4c;
        case 0x326b50u: goto label_326b50;
        case 0x326b54u: goto label_326b54;
        case 0x326b58u: goto label_326b58;
        case 0x326b5cu: goto label_326b5c;
        case 0x326b60u: goto label_326b60;
        case 0x326b64u: goto label_326b64;
        case 0x326b68u: goto label_326b68;
        case 0x326b6cu: goto label_326b6c;
        case 0x326b70u: goto label_326b70;
        case 0x326b74u: goto label_326b74;
        case 0x326b78u: goto label_326b78;
        case 0x326b7cu: goto label_326b7c;
        case 0x326b80u: goto label_326b80;
        case 0x326b84u: goto label_326b84;
        case 0x326b88u: goto label_326b88;
        case 0x326b8cu: goto label_326b8c;
        case 0x326b90u: goto label_326b90;
        case 0x326b94u: goto label_326b94;
        default: break;
    }

    ctx->pc = 0x326890u;

label_326890:
    // 0x326890: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x326890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_326894:
    // 0x326894: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x326894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_326898:
    // 0x326898: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x326898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_32689c:
    // 0x32689c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x32689cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3268a0:
    // 0x3268a0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3268a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_3268a4:
    // 0x3268a4: 0x3406c800  ori         $a2, $zero, 0xC800
    ctx->pc = 0x3268a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)51200);
label_3268a8:
    // 0x3268a8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3268a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_3268ac:
    // 0x3268ac: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x3268acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3268b0:
    // 0x3268b0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3268b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_3268b4:
    // 0x3268b4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3268b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_3268b8:
    // 0x3268b8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x3268b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_3268bc:
    // 0x3268bc: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x3268bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3268c0:
    // 0x3268c0: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x3268c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3268c4:
    // 0x3268c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3268c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3268c8:
    // 0x3268c8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3268c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3268cc:
    // 0x3268cc: 0x40f809  jalr        $v0
label_3268d0:
    if (ctx->pc == 0x3268D0u) {
        ctx->pc = 0x3268D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3268CCu;
        // 0x3268d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3268D4u;
        goto label_3268d4;
    }
    ctx->pc = 0x3268CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3268D4u);
        ctx->pc = 0x3268D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3268CCu;
        // 0x3268d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3268CCu, 0x3268D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3268D4u;
label_3268d4:
    // 0x3268d4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3268d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3268d8:
    // 0x3268d8: 0x18800012  blez        $a0, . + 4 + (0x12 << 2)
label_3268dc:
    if (ctx->pc == 0x3268DCu) {
        ctx->pc = 0x3268DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3268D8u;
        // 0x3268dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3268E0u;
        goto label_3268e0;
    }
    ctx->pc = 0x3268D8u;
    {
        const bool branch_taken_0x3268d8 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x3268DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3268D8u;
        // 0x3268dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3268d8) {
            ctx->pc = 0x326924u;
            goto label_326924;
        }
    }
    ctx->pc = 0x3268E0u;
label_3268e0:
    // 0x3268e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3268e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3268e4:
    // 0x3268e4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3268e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3268e8:
    // 0x3268e8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_3268ec:
    if (ctx->pc == 0x3268ECu) {
        ctx->pc = 0x3268ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3268E8u;
        // 0x3268ec: 0x517c2  srl         $v0, $a1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3268F0u;
        goto label_3268f0;
    }
    ctx->pc = 0x3268E8u;
    {
        const bool branch_taken_0x3268e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3268ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3268E8u;
        // 0x3268ec: 0x517c2  srl         $v0, $a1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3268e8) {
            ctx->pc = 0x326928u;
            goto label_326928;
        }
    }
    ctx->pc = 0x3268F0u;
label_3268f0:
    // 0x3268f0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3268f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3268f4:
    // 0x3268f4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3268f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3268f8:
    // 0x3268f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3268f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3268fc:
    // 0x3268fc: 0x0  nop
    ctx->pc = 0x3268fcu;
    // NOP
label_326900:
    // 0x326900: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x326900u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_326904:
    // 0x326904: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_326908:
    if (ctx->pc == 0x326908u) {
        ctx->pc = 0x326908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326904u;
        // 0x326908: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32690Cu;
        goto label_32690c;
    }
    ctx->pc = 0x326904u;
    {
        const bool branch_taken_0x326904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326904u;
        // 0x326908: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326904) {
            ctx->pc = 0x326924u;
            goto label_326924;
        }
    }
    ctx->pc = 0x32690Cu;
label_32690c:
    // 0x32690c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x32690cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_326910:
    // 0x326910: 0x0  nop
    ctx->pc = 0x326910u;
    // NOP
label_326914:
    // 0x326914: 0x0  nop
    ctx->pc = 0x326914u;
    // NOP
label_326918:
    // 0x326918: 0x0  nop
    ctx->pc = 0x326918u;
    // NOP
label_32691c:
    // 0x32691c: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
label_326920:
    if (ctx->pc == 0x326920u) {
        ctx->pc = 0x326920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32691Cu;
        // 0x326920: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326924u;
        goto label_326924;
    }
    ctx->pc = 0x32691Cu;
    {
        const bool branch_taken_0x32691c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32691c) {
            ctx->pc = 0x326920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32691Cu;
            // 0x326920: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326900;
        }
    }
    ctx->pc = 0x326924u;
label_326924:
    // 0x326924: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x326924u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_326928:
    // 0x326928: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x326928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_32692c:
    // 0x32692c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x32692cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_326930:
    // 0x326930: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x326930u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_326934:
    // 0x326934: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x326934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_326938:
    // 0x326938: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_32693c:
    if (ctx->pc == 0x32693Cu) {
        ctx->pc = 0x32693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326938u;
        // 0x32693c: 0x27b40010  addiu       $s4, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326940u;
        goto label_326940;
    }
    ctx->pc = 0x326938u;
    {
        const bool branch_taken_0x326938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x32693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326938u;
        // 0x32693c: 0x27b40010  addiu       $s4, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326938) {
            ctx->pc = 0x326988u;
            goto label_326988;
        }
    }
    ctx->pc = 0x326940u;
label_326940:
    // 0x326940: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x326940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_326944:
    // 0x326944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x326944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_326948:
    // 0x326948: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x326948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32694c:
    // 0x32694c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x32694cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_326950:
    // 0x326950: 0x40f809  jalr        $v0
label_326954:
    if (ctx->pc == 0x326954u) {
        ctx->pc = 0x326954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326950u;
        // 0x326954: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326958u;
        goto label_326958;
    }
    ctx->pc = 0x326950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x326958u);
        ctx->pc = 0x326954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326950u;
        // 0x326954: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326950u, 0x326958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326958u;
label_326958:
    // 0x326958: 0xc0cf1c6  jal         func_33C718
label_32695c:
    if (ctx->pc == 0x32695Cu) {
        ctx->pc = 0x326960u;
        goto label_326960;
    }
    ctx->pc = 0x326958u;
    SET_GPR_U32(ctx, 31, 0x326960u);
    ctx->pc = 0x33C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C718u, 0x326958u, 0x326960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326960u;
label_326960:
    // 0x326960: 0x54400084  bnel        $v0, $zero, . + 4 + (0x84 << 2)
label_326964:
    if (ctx->pc == 0x326964u) {
        ctx->pc = 0x326964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326960u;
        // 0x326964: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326968u;
        goto label_326968;
    }
    ctx->pc = 0x326960u;
    {
        const bool branch_taken_0x326960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326960) {
            ctx->pc = 0x326964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326960u;
            // 0x326964: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326B74u;
            goto label_326b74;
        }
    }
    ctx->pc = 0x326968u;
label_326968:
    // 0x326968: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x326968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_32696c:
    // 0x32696c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x32696cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_326970:
    // 0x326970: 0x24841e48  addiu       $a0, $a0, 0x1E48
    ctx->pc = 0x326970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7752));
label_326974:
    // 0x326974: 0xc0cfc6a  jal         func_33F1A8
label_326978:
    if (ctx->pc == 0x326978u) {
        ctx->pc = 0x326978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326974u;
        // 0x326978: 0x24a51e68  addiu       $a1, $a1, 0x1E68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32697Cu;
        goto label_32697c;
    }
    ctx->pc = 0x326974u;
    SET_GPR_U32(ctx, 31, 0x32697Cu);
    ctx->pc = 0x326978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326974u;
    // 0x326978: 0x24a51e68  addiu       $a1, $a1, 0x1E68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F1A8u, 0x326974u, 0x32697Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32697Cu;
label_32697c:
    // 0x32697c: 0x1000007d  b           . + 4 + (0x7D << 2)
label_326980:
    if (ctx->pc == 0x326980u) {
        ctx->pc = 0x326980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32697Cu;
        // 0x326980: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326984u;
        goto label_326984;
    }
    ctx->pc = 0x32697Cu;
    {
        const bool branch_taken_0x32697c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32697Cu;
        // 0x326980: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32697c) {
            ctx->pc = 0x326B74u;
            goto label_326b74;
        }
    }
    ctx->pc = 0x326984u;
label_326984:
    // 0x326984: 0x0  nop
    ctx->pc = 0x326984u;
    // NOP
label_326988:
    // 0x326988: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x326988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32698c:
    // 0x32698c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x32698cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_326990:
    // 0x326990: 0xc0ceb28  jal         func_33ACA0
label_326994:
    if (ctx->pc == 0x326994u) {
        ctx->pc = 0x326994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326990u;
        // 0x326994: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326998u;
        goto label_326998;
    }
    ctx->pc = 0x326990u;
    SET_GPR_U32(ctx, 31, 0x326998u);
    ctx->pc = 0x326994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326990u;
    // 0x326994: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x326990u, 0x326998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326998u;
label_326998:
    // 0x326998: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x326998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32699c:
    // 0x32699c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x32699cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3269a0:
    // 0x3269a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3269a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3269a4:
    // 0x3269a4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3269a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3269a8:
    // 0x3269a8: 0x40f809  jalr        $v0
label_3269ac:
    if (ctx->pc == 0x3269ACu) {
        ctx->pc = 0x3269ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269A8u;
        // 0x3269ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3269B0u;
        goto label_3269b0;
    }
    ctx->pc = 0x3269A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3269B0u);
        ctx->pc = 0x3269ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269A8u;
        // 0x3269ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3269A8u, 0x3269B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3269B0u;
label_3269b0:
    // 0x3269b0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x3269b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3269b4:
    // 0x3269b4: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x3269b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
label_3269b8:
    // 0x3269b8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_3269bc:
    if (ctx->pc == 0x3269BCu) {
        ctx->pc = 0x3269BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269B8u;
        // 0x3269bc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3269C0u;
        goto label_3269c0;
    }
    ctx->pc = 0x3269B8u;
    {
        const bool branch_taken_0x3269b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3269b8) {
            ctx->pc = 0x3269BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3269B8u;
            // 0x3269bc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3269E8u;
            goto label_3269e8;
        }
    }
    ctx->pc = 0x3269C0u;
label_3269c0:
    // 0x3269c0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3269c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3269c4:
    // 0x3269c4: 0xc0cf33c  jal         func_33CCF0
label_3269c8:
    if (ctx->pc == 0x3269C8u) {
        ctx->pc = 0x3269C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269C4u;
        // 0x3269c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3269CCu;
        goto label_3269cc;
    }
    ctx->pc = 0x3269C4u;
    SET_GPR_U32(ctx, 31, 0x3269CCu);
    ctx->pc = 0x3269C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3269C4u;
    // 0x3269c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CCF0u, 0x3269C4u, 0x3269CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3269CCu;
label_3269cc:
    // 0x3269cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3269ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3269d0:
    // 0x3269d0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_3269d4:
    if (ctx->pc == 0x3269D4u) {
        ctx->pc = 0x3269D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269D0u;
        // 0x3269d4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3269D8u;
        goto label_3269d8;
    }
    ctx->pc = 0x3269D0u;
    {
        const bool branch_taken_0x3269d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3269D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269D0u;
        // 0x3269d4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3269d0) {
            ctx->pc = 0x3269E4u;
            goto label_3269e4;
        }
    }
    ctx->pc = 0x3269D8u;
label_3269d8:
    // 0x3269d8: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x3269d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3269dc:
    // 0x3269dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3269e0:
    if (ctx->pc == 0x3269E0u) {
        ctx->pc = 0x3269E4u;
        goto label_3269e4;
    }
    ctx->pc = 0x3269DCu;
    {
        const bool branch_taken_0x3269dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3269dc) {
            ctx->pc = 0x326A08u;
            goto label_326a08;
        }
    }
    ctx->pc = 0x3269E4u;
label_3269e4:
    // 0x3269e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3269e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3269e8:
    // 0x3269e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3269e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3269ec:
    // 0x3269ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3269ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3269f0:
    // 0x3269f0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3269f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3269f4:
    // 0x3269f4: 0x40f809  jalr        $v0
label_3269f8:
    if (ctx->pc == 0x3269F8u) {
        ctx->pc = 0x3269F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269F4u;
        // 0x3269f8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3269FCu;
        goto label_3269fc;
    }
    ctx->pc = 0x3269F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3269FCu);
        ctx->pc = 0x3269F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269F4u;
        // 0x3269f8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3269F4u, 0x3269FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3269FCu;
label_3269fc:
    // 0x3269fc: 0x1000005f  b           . + 4 + (0x5F << 2)
label_326a00:
    if (ctx->pc == 0x326A00u) {
        ctx->pc = 0x326A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269FCu;
        // 0x326a00: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326A04u;
        goto label_326a04;
    }
    ctx->pc = 0x3269FCu;
    {
        const bool branch_taken_0x3269fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269FCu;
        // 0x326a00: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3269fc) {
            ctx->pc = 0x326B7Cu;
            goto label_326b7c;
        }
    }
    ctx->pc = 0x326A04u;
label_326a04:
    // 0x326a04: 0x0  nop
    ctx->pc = 0x326a04u;
    // NOP
label_326a08:
    // 0x326a08: 0x623001b  bgezl       $s1, . + 4 + (0x1B << 2)
label_326a0c:
    if (ctx->pc == 0x326A0Cu) {
        ctx->pc = 0x326A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A08u;
        // 0x326a0c: 0xae710098  sw          $s1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326A10u;
        goto label_326a10;
    }
    ctx->pc = 0x326A08u;
    {
        const bool branch_taken_0x326a08 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x326a08) {
            ctx->pc = 0x326A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326A08u;
            // 0x326a0c: 0xae710098  sw          $s1, 0x98($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326A78u;
            goto label_326a78;
        }
    }
    ctx->pc = 0x326A10u;
label_326a10:
    // 0x326a10: 0x8642009a  lh          $v0, 0x9A($s2)
    ctx->pc = 0x326a10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 154)));
label_326a14:
    // 0x326a14: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_326a18:
    if (ctx->pc == 0x326A18u) {
        ctx->pc = 0x326A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A14u;
        // 0x326a18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326A1Cu;
        goto label_326a1c;
    }
    ctx->pc = 0x326A14u;
    {
        const bool branch_taken_0x326a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A14u;
        // 0x326a18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326a14) {
            ctx->pc = 0x326A30u;
            goto label_326a30;
        }
    }
    ctx->pc = 0x326A1Cu;
label_326a1c:
    // 0x326a1c: 0xc0cf314  jal         func_33CC50
label_326a20:
    if (ctx->pc == 0x326A20u) {
        ctx->pc = 0x326A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A1Cu;
        // 0x326a20: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326A24u;
        goto label_326a24;
    }
    ctx->pc = 0x326A1Cu;
    SET_GPR_U32(ctx, 31, 0x326A24u);
    ctx->pc = 0x326A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326A1Cu;
    // 0x326a20: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CC50u, 0x326A1Cu, 0x326A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326A24u;
label_326a24:
    // 0x326a24: 0x10000014  b           . + 4 + (0x14 << 2)
label_326a28:
    if (ctx->pc == 0x326A28u) {
        ctx->pc = 0x326A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A24u;
        // 0x326a28: 0xae710098  sw          $s1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326A2Cu;
        goto label_326a2c;
    }
    ctx->pc = 0x326A24u;
    {
        const bool branch_taken_0x326a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A24u;
        // 0x326a28: 0xae710098  sw          $s1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326a24) {
            ctx->pc = 0x326A78u;
            goto label_326a78;
        }
    }
    ctx->pc = 0x326A2Cu;
label_326a2c:
    // 0x326a2c: 0x0  nop
    ctx->pc = 0x326a2cu;
    // NOP
label_326a30:
    // 0x326a30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x326a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_326a34:
    // 0x326a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x326a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_326a38:
    // 0x326a38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x326a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_326a3c:
    // 0x326a3c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x326a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_326a40:
    // 0x326a40: 0x40f809  jalr        $v0
label_326a44:
    if (ctx->pc == 0x326A44u) {
        ctx->pc = 0x326A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A40u;
        // 0x326a44: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326A48u;
        goto label_326a48;
    }
    ctx->pc = 0x326A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x326A48u);
        ctx->pc = 0x326A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A40u;
        // 0x326a44: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326A40u, 0x326A48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326A48u;
label_326a48:
    // 0x326a48: 0xc0cf1c6  jal         func_33C718
label_326a4c:
    if (ctx->pc == 0x326A4Cu) {
        ctx->pc = 0x326A50u;
        goto label_326a50;
    }
    ctx->pc = 0x326A48u;
    SET_GPR_U32(ctx, 31, 0x326A50u);
    ctx->pc = 0x33C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C718u, 0x326A48u, 0x326A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326A50u;
label_326a50:
    // 0x326a50: 0x54400048  bnel        $v0, $zero, . + 4 + (0x48 << 2)
label_326a54:
    if (ctx->pc == 0x326A54u) {
        ctx->pc = 0x326A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A50u;
        // 0x326a54: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326A58u;
        goto label_326a58;
    }
    ctx->pc = 0x326A50u;
    {
        const bool branch_taken_0x326a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326a50) {
            ctx->pc = 0x326A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326A50u;
            // 0x326a54: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326B74u;
            goto label_326b74;
        }
    }
    ctx->pc = 0x326A58u;
label_326a58:
    // 0x326a58: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x326a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_326a5c:
    // 0x326a5c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x326a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_326a60:
    // 0x326a60: 0x24841e88  addiu       $a0, $a0, 0x1E88
    ctx->pc = 0x326a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7816));
label_326a64:
    // 0x326a64: 0xc0cfc6a  jal         func_33F1A8
label_326a68:
    if (ctx->pc == 0x326A68u) {
        ctx->pc = 0x326A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A64u;
        // 0x326a68: 0x24a51ea8  addiu       $a1, $a1, 0x1EA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326A6Cu;
        goto label_326a6c;
    }
    ctx->pc = 0x326A64u;
    SET_GPR_U32(ctx, 31, 0x326A6Cu);
    ctx->pc = 0x326A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326A64u;
    // 0x326a68: 0x24a51ea8  addiu       $a1, $a1, 0x1EA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F1A8u, 0x326A64u, 0x326A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326A6Cu;
label_326a6c:
    // 0x326a6c: 0x10000041  b           . + 4 + (0x41 << 2)
label_326a70:
    if (ctx->pc == 0x326A70u) {
        ctx->pc = 0x326A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A6Cu;
        // 0x326a70: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326A74u;
        goto label_326a74;
    }
    ctx->pc = 0x326A6Cu;
    {
        const bool branch_taken_0x326a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A6Cu;
        // 0x326a70: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326a6c) {
            ctx->pc = 0x326B74u;
            goto label_326b74;
        }
    }
    ctx->pc = 0x326A74u;
label_326a74:
    // 0x326a74: 0x0  nop
    ctx->pc = 0x326a74u;
    // NOP
label_326a78:
    // 0x326a78: 0xc0cf3a2  jal         func_33CE88
label_326a7c:
    if (ctx->pc == 0x326A7Cu) {
        ctx->pc = 0x326A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A78u;
        // 0x326a7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326A80u;
        goto label_326a80;
    }
    ctx->pc = 0x326A78u;
    SET_GPR_U32(ctx, 31, 0x326A80u);
    ctx->pc = 0x326A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326A78u;
    // 0x326a7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CE88u, 0x326A78u, 0x326A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326A80u;
label_326a80:
    // 0x326a80: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x326a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_326a84:
    // 0x326a84: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_326a88:
    if (ctx->pc == 0x326A88u) {
        ctx->pc = 0x326A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A84u;
        // 0x326a88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326A8Cu;
        goto label_326a8c;
    }
    ctx->pc = 0x326A84u;
    {
        const bool branch_taken_0x326a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x326A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A84u;
        // 0x326a88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326a84) {
            ctx->pc = 0x326A90u;
            goto label_326a90;
        }
    }
    ctx->pc = 0x326A8Cu;
label_326a8c:
    // 0x326a8c: 0xa2620003  sb          $v0, 0x3($s3)
    ctx->pc = 0x326a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 2));
label_326a90:
    // 0x326a90: 0xc0cf3a2  jal         func_33CE88
label_326a94:
    if (ctx->pc == 0x326A94u) {
        ctx->pc = 0x326A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A90u;
        // 0x326a94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326A98u;
        goto label_326a98;
    }
    ctx->pc = 0x326A90u;
    SET_GPR_U32(ctx, 31, 0x326A98u);
    ctx->pc = 0x326A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326A90u;
    // 0x326a94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CE88u, 0x326A90u, 0x326A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326A98u;
label_326a98:
    // 0x326a98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x326a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_326a9c:
    // 0x326a9c: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_326aa0:
    if (ctx->pc == 0x326AA0u) {
        ctx->pc = 0x326AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A9Cu;
        // 0x326aa0: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326AA4u;
        goto label_326aa4;
    }
    ctx->pc = 0x326A9Cu;
    {
        const bool branch_taken_0x326a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x326AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A9Cu;
        // 0x326aa0: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326a9c) {
            ctx->pc = 0x326ABCu;
            goto label_326abc;
        }
    }
    ctx->pc = 0x326AA4u;
label_326aa4:
    // 0x326aa4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x326aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_326aa8:
    // 0x326aa8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x326aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_326aac:
    // 0x326aac: 0x26640058  addiu       $a0, $s3, 0x58
    ctx->pc = 0x326aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
label_326ab0:
    // 0x326ab0: 0x28c20041  slti        $v0, $a2, 0x41
    ctx->pc = 0x326ab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)65) ? 1 : 0);
label_326ab4:
    // 0x326ab4: 0xc0e9452  jal         func_3A5148
label_326ab8:
    if (ctx->pc == 0x326AB8u) {
        ctx->pc = 0x326AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326AB4u;
        // 0x326ab8: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326ABCu;
        goto label_326abc;
    }
    ctx->pc = 0x326AB4u;
    SET_GPR_U32(ctx, 31, 0x326ABCu);
    ctx->pc = 0x326AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326AB4u;
    // 0x326ab8: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x326AB4u, 0x326ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326ABCu;
label_326abc:
    // 0x326abc: 0xc0cf3a2  jal         func_33CE88
label_326ac0:
    if (ctx->pc == 0x326AC0u) {
        ctx->pc = 0x326AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326ABCu;
        // 0x326ac0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326AC4u;
        goto label_326ac4;
    }
    ctx->pc = 0x326ABCu;
    SET_GPR_U32(ctx, 31, 0x326AC4u);
    ctx->pc = 0x326AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326ABCu;
    // 0x326ac0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CE88u, 0x326ABCu, 0x326AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326AC4u;
label_326ac4:
    // 0x326ac4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x326ac4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_326ac8:
    // 0x326ac8: 0x2462fff6  addiu       $v0, $v1, -0xA
    ctx->pc = 0x326ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
label_326acc:
    // 0x326acc: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x326accu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_326ad0:
    // 0x326ad0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_326ad4:
    if (ctx->pc == 0x326AD4u) {
        ctx->pc = 0x326AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326AD0u;
        // 0x326ad4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326AD8u;
        goto label_326ad8;
    }
    ctx->pc = 0x326AD0u;
    {
        const bool branch_taken_0x326ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326ad0) {
            ctx->pc = 0x326AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326AD0u;
            // 0x326ad4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326AF0u;
            goto label_326af0;
        }
    }
    ctx->pc = 0x326AD8u;
label_326ad8:
    // 0x326ad8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x326ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_326adc:
    // 0x326adc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_326ae0:
    if (ctx->pc == 0x326AE0u) {
        ctx->pc = 0x326AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326ADCu;
        // 0x326ae0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326AE4u;
        goto label_326ae4;
    }
    ctx->pc = 0x326ADCu;
    {
        const bool branch_taken_0x326adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x326AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326ADCu;
        // 0x326ae0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326adc) {
            ctx->pc = 0x326AECu;
            goto label_326aec;
        }
    }
    ctx->pc = 0x326AE4u;
label_326ae4:
    // 0x326ae4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_326ae8:
    if (ctx->pc == 0x326AE8u) {
        ctx->pc = 0x326AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326AE4u;
        // 0x326ae8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326AECu;
        goto label_326aec;
    }
    ctx->pc = 0x326AE4u;
    {
        const bool branch_taken_0x326ae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x326AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326AE4u;
        // 0x326ae8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ae4) {
            ctx->pc = 0x326B10u;
            goto label_326b10;
        }
    }
    ctx->pc = 0x326AECu;
label_326aec:
    // 0x326aec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x326aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_326af0:
    // 0x326af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x326af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_326af4:
    // 0x326af4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x326af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_326af8:
    // 0x326af8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x326af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_326afc:
    // 0x326afc: 0x40f809  jalr        $v0
label_326b00:
    if (ctx->pc == 0x326B00u) {
        ctx->pc = 0x326B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326AFCu;
        // 0x326b00: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326B04u;
        goto label_326b04;
    }
    ctx->pc = 0x326AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x326B04u);
        ctx->pc = 0x326B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326AFCu;
        // 0x326b00: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326AFCu, 0x326B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326B04u;
label_326b04:
    // 0x326b04: 0x10000013  b           . + 4 + (0x13 << 2)
label_326b08:
    if (ctx->pc == 0x326B08u) {
        ctx->pc = 0x326B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B04u;
        // 0x326b08: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326B0Cu;
        goto label_326b0c;
    }
    ctx->pc = 0x326B04u;
    {
        const bool branch_taken_0x326b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B04u;
        // 0x326b08: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326b04) {
            ctx->pc = 0x326B54u;
            goto label_326b54;
        }
    }
    ctx->pc = 0x326B0Cu;
label_326b0c:
    // 0x326b0c: 0x0  nop
    ctx->pc = 0x326b0cu;
    // NOP
label_326b10:
    // 0x326b10: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x326b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_326b14:
    // 0x326b14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x326b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_326b18:
    // 0x326b18: 0xc0ceb28  jal         func_33ACA0
label_326b1c:
    if (ctx->pc == 0x326B1Cu) {
        ctx->pc = 0x326B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B18u;
        // 0x326b1c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326B20u;
        goto label_326b20;
    }
    ctx->pc = 0x326B18u;
    SET_GPR_U32(ctx, 31, 0x326B20u);
    ctx->pc = 0x326B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326B18u;
    // 0x326b1c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x326B18u, 0x326B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326B20u;
label_326b20:
    // 0x326b20: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x326b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_326b24:
    // 0x326b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x326b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_326b28:
    // 0x326b28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x326b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326b2c:
    // 0x326b2c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x326b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_326b30:
    // 0x326b30: 0x40f809  jalr        $v0
label_326b34:
    if (ctx->pc == 0x326B34u) {
        ctx->pc = 0x326B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B30u;
        // 0x326b34: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326B38u;
        goto label_326b38;
    }
    ctx->pc = 0x326B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x326B38u);
        ctx->pc = 0x326B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B30u;
        // 0x326b34: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326B30u, 0x326B38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326B38u;
label_326b38:
    // 0x326b38: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x326b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_326b3c:
    // 0x326b3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x326b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_326b40:
    // 0x326b40: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x326b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_326b44:
    // 0x326b44: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x326b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_326b48:
    // 0x326b48: 0x40f809  jalr        $v0
label_326b4c:
    if (ctx->pc == 0x326B4Cu) {
        ctx->pc = 0x326B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B48u;
        // 0x326b4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326B50u;
        goto label_326b50;
    }
    ctx->pc = 0x326B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x326B50u);
        ctx->pc = 0x326B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B48u;
        // 0x326b4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326B48u, 0x326B50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326B50u;
label_326b50:
    // 0x326b50: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x326b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
label_326b54:
    // 0x326b54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_326b58:
    if (ctx->pc == 0x326B58u) {
        ctx->pc = 0x326B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B54u;
        // 0x326b58: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326B5Cu;
        goto label_326b5c;
    }
    ctx->pc = 0x326B54u;
    {
        const bool branch_taken_0x326b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B54u;
        // 0x326b58: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326b54) {
            ctx->pc = 0x326B70u;
            goto label_326b70;
        }
    }
    ctx->pc = 0x326B5Cu;
label_326b5c:
    // 0x326b5c: 0x8c42f9ec  lw          $v0, -0x614($v0)
    ctx->pc = 0x326b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965740)));
label_326b60:
    // 0x326b60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_326b64:
    if (ctx->pc == 0x326B64u) {
        ctx->pc = 0x326B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B60u;
        // 0x326b64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326B68u;
        goto label_326b68;
    }
    ctx->pc = 0x326B60u;
    {
        const bool branch_taken_0x326b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B60u;
        // 0x326b64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326b60) {
            ctx->pc = 0x326B70u;
            goto label_326b70;
        }
    }
    ctx->pc = 0x326B68u;
label_326b68:
    // 0x326b68: 0x40f809  jalr        $v0
label_326b6c:
    if (ctx->pc == 0x326B6Cu) {
        ctx->pc = 0x326B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B68u;
        // 0x326b6c: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326B70u;
        goto label_326b70;
    }
    ctx->pc = 0x326B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x326B70u);
        ctx->pc = 0x326B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B68u;
        // 0x326b6c: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326B68u, 0x326B70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326B70u;
label_326b70:
    // 0x326b70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x326b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_326b74:
    // 0x326b74: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x326b74u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_326b78:
    // 0x326b78: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x326b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_326b7c:
    // 0x326b7c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x326b7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_326b80:
    // 0x326b80: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x326b80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_326b84:
    // 0x326b84: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x326b84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_326b88:
    // 0x326b88: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x326b88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_326b8c:
    // 0x326b8c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x326b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_326b90:
    // 0x326b90: 0x3e00008  jr          $ra
label_326b94:
    if (ctx->pc == 0x326B94u) {
        ctx->pc = 0x326B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B90u;
        // 0x326b94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326B98u;
        goto label_fallthrough_0x326b90;
    }
    ctx->pc = 0x326B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B90u;
        // 0x326b94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x326b90:
    ctx->pc = 0x326B98u;
}
