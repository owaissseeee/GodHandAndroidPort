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

// Function: func_001B57E8
// Address: 0x1b57e8 - 0x1b5a58
void func_001B57E8_0x1b57e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B57E8_0x1b57e8");
#endif

    switch (ctx->pc) {
        case 0x1b57e8u: goto label_1b57e8;
        case 0x1b57ecu: goto label_1b57ec;
        case 0x1b57f0u: goto label_1b57f0;
        case 0x1b57f4u: goto label_1b57f4;
        case 0x1b57f8u: goto label_1b57f8;
        case 0x1b57fcu: goto label_1b57fc;
        case 0x1b5800u: goto label_1b5800;
        case 0x1b5804u: goto label_1b5804;
        case 0x1b5808u: goto label_1b5808;
        case 0x1b580cu: goto label_1b580c;
        case 0x1b5810u: goto label_1b5810;
        case 0x1b5814u: goto label_1b5814;
        case 0x1b5818u: goto label_1b5818;
        case 0x1b581cu: goto label_1b581c;
        case 0x1b5820u: goto label_1b5820;
        case 0x1b5824u: goto label_1b5824;
        case 0x1b5828u: goto label_1b5828;
        case 0x1b582cu: goto label_1b582c;
        case 0x1b5830u: goto label_1b5830;
        case 0x1b5834u: goto label_1b5834;
        case 0x1b5838u: goto label_1b5838;
        case 0x1b583cu: goto label_1b583c;
        case 0x1b5840u: goto label_1b5840;
        case 0x1b5844u: goto label_1b5844;
        case 0x1b5848u: goto label_1b5848;
        case 0x1b584cu: goto label_1b584c;
        case 0x1b5850u: goto label_1b5850;
        case 0x1b5854u: goto label_1b5854;
        case 0x1b5858u: goto label_1b5858;
        case 0x1b585cu: goto label_1b585c;
        case 0x1b5860u: goto label_1b5860;
        case 0x1b5864u: goto label_1b5864;
        case 0x1b5868u: goto label_1b5868;
        case 0x1b586cu: goto label_1b586c;
        case 0x1b5870u: goto label_1b5870;
        case 0x1b5874u: goto label_1b5874;
        case 0x1b5878u: goto label_1b5878;
        case 0x1b587cu: goto label_1b587c;
        case 0x1b5880u: goto label_1b5880;
        case 0x1b5884u: goto label_1b5884;
        case 0x1b5888u: goto label_1b5888;
        case 0x1b588cu: goto label_1b588c;
        case 0x1b5890u: goto label_1b5890;
        case 0x1b5894u: goto label_1b5894;
        case 0x1b5898u: goto label_1b5898;
        case 0x1b589cu: goto label_1b589c;
        case 0x1b58a0u: goto label_1b58a0;
        case 0x1b58a4u: goto label_1b58a4;
        case 0x1b58a8u: goto label_1b58a8;
        case 0x1b58acu: goto label_1b58ac;
        case 0x1b58b0u: goto label_1b58b0;
        case 0x1b58b4u: goto label_1b58b4;
        case 0x1b58b8u: goto label_1b58b8;
        case 0x1b58bcu: goto label_1b58bc;
        case 0x1b58c0u: goto label_1b58c0;
        case 0x1b58c4u: goto label_1b58c4;
        case 0x1b58c8u: goto label_1b58c8;
        case 0x1b58ccu: goto label_1b58cc;
        case 0x1b58d0u: goto label_1b58d0;
        case 0x1b58d4u: goto label_1b58d4;
        case 0x1b58d8u: goto label_1b58d8;
        case 0x1b58dcu: goto label_1b58dc;
        case 0x1b58e0u: goto label_1b58e0;
        case 0x1b58e4u: goto label_1b58e4;
        case 0x1b58e8u: goto label_1b58e8;
        case 0x1b58ecu: goto label_1b58ec;
        case 0x1b58f0u: goto label_1b58f0;
        case 0x1b58f4u: goto label_1b58f4;
        case 0x1b58f8u: goto label_1b58f8;
        case 0x1b58fcu: goto label_1b58fc;
        case 0x1b5900u: goto label_1b5900;
        case 0x1b5904u: goto label_1b5904;
        case 0x1b5908u: goto label_1b5908;
        case 0x1b590cu: goto label_1b590c;
        case 0x1b5910u: goto label_1b5910;
        case 0x1b5914u: goto label_1b5914;
        case 0x1b5918u: goto label_1b5918;
        case 0x1b591cu: goto label_1b591c;
        case 0x1b5920u: goto label_1b5920;
        case 0x1b5924u: goto label_1b5924;
        case 0x1b5928u: goto label_1b5928;
        case 0x1b592cu: goto label_1b592c;
        case 0x1b5930u: goto label_1b5930;
        case 0x1b5934u: goto label_1b5934;
        case 0x1b5938u: goto label_1b5938;
        case 0x1b593cu: goto label_1b593c;
        case 0x1b5940u: goto label_1b5940;
        case 0x1b5944u: goto label_1b5944;
        case 0x1b5948u: goto label_1b5948;
        case 0x1b594cu: goto label_1b594c;
        case 0x1b5950u: goto label_1b5950;
        case 0x1b5954u: goto label_1b5954;
        case 0x1b5958u: goto label_1b5958;
        case 0x1b595cu: goto label_1b595c;
        case 0x1b5960u: goto label_1b5960;
        case 0x1b5964u: goto label_1b5964;
        case 0x1b5968u: goto label_1b5968;
        case 0x1b596cu: goto label_1b596c;
        case 0x1b5970u: goto label_1b5970;
        case 0x1b5974u: goto label_1b5974;
        case 0x1b5978u: goto label_1b5978;
        case 0x1b597cu: goto label_1b597c;
        case 0x1b5980u: goto label_1b5980;
        case 0x1b5984u: goto label_1b5984;
        case 0x1b5988u: goto label_1b5988;
        case 0x1b598cu: goto label_1b598c;
        case 0x1b5990u: goto label_1b5990;
        case 0x1b5994u: goto label_1b5994;
        case 0x1b5998u: goto label_1b5998;
        case 0x1b599cu: goto label_1b599c;
        case 0x1b59a0u: goto label_1b59a0;
        case 0x1b59a4u: goto label_1b59a4;
        case 0x1b59a8u: goto label_1b59a8;
        case 0x1b59acu: goto label_1b59ac;
        case 0x1b59b0u: goto label_1b59b0;
        case 0x1b59b4u: goto label_1b59b4;
        case 0x1b59b8u: goto label_1b59b8;
        case 0x1b59bcu: goto label_1b59bc;
        case 0x1b59c0u: goto label_1b59c0;
        case 0x1b59c4u: goto label_1b59c4;
        case 0x1b59c8u: goto label_1b59c8;
        case 0x1b59ccu: goto label_1b59cc;
        case 0x1b59d0u: goto label_1b59d0;
        case 0x1b59d4u: goto label_1b59d4;
        case 0x1b59d8u: goto label_1b59d8;
        case 0x1b59dcu: goto label_1b59dc;
        case 0x1b59e0u: goto label_1b59e0;
        case 0x1b59e4u: goto label_1b59e4;
        case 0x1b59e8u: goto label_1b59e8;
        case 0x1b59ecu: goto label_1b59ec;
        case 0x1b59f0u: goto label_1b59f0;
        case 0x1b59f4u: goto label_1b59f4;
        case 0x1b59f8u: goto label_1b59f8;
        case 0x1b59fcu: goto label_1b59fc;
        case 0x1b5a00u: goto label_1b5a00;
        case 0x1b5a04u: goto label_1b5a04;
        case 0x1b5a08u: goto label_1b5a08;
        case 0x1b5a0cu: goto label_1b5a0c;
        case 0x1b5a10u: goto label_1b5a10;
        case 0x1b5a14u: goto label_1b5a14;
        case 0x1b5a18u: goto label_1b5a18;
        case 0x1b5a1cu: goto label_1b5a1c;
        case 0x1b5a20u: goto label_1b5a20;
        case 0x1b5a24u: goto label_1b5a24;
        case 0x1b5a28u: goto label_1b5a28;
        case 0x1b5a2cu: goto label_1b5a2c;
        case 0x1b5a30u: goto label_1b5a30;
        case 0x1b5a34u: goto label_1b5a34;
        case 0x1b5a38u: goto label_1b5a38;
        case 0x1b5a3cu: goto label_1b5a3c;
        case 0x1b5a40u: goto label_1b5a40;
        case 0x1b5a44u: goto label_1b5a44;
        case 0x1b5a48u: goto label_1b5a48;
        case 0x1b5a4cu: goto label_1b5a4c;
        case 0x1b5a50u: goto label_1b5a50;
        case 0x1b5a54u: goto label_1b5a54;
        default: break;
    }

    ctx->pc = 0x1b57e8u;

label_1b57e8:
    // 0x1b57e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b57e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1b57ec:
    // 0x1b57ec: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1b57ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1b57f0:
    // 0x1b57f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b57f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b57f4:
    // 0x1b57f4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1b57f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1b57f8:
    // 0x1b57f8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1b57f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1b57fc:
    // 0x1b57fc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b57fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1b5800:
    // 0x1b5800: 0xc06dbee  jal         func_1B6FB8
label_1b5804:
    if (ctx->pc == 0x1B5804u) {
        ctx->pc = 0x1B5804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5800u;
        // 0x1b5804: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5808u;
        goto label_1b5808;
    }
    ctx->pc = 0x1B5800u;
    SET_GPR_U32(ctx, 31, 0x1B5808u);
    ctx->pc = 0x1B5804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5800u;
    // 0x1b5804: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1B5800u, 0x1B5808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5808u;
label_1b5808:
    // 0x1b5808: 0x240403b6  addiu       $a0, $zero, 0x3B6
    ctx->pc = 0x1b5808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 950));
label_1b580c:
    // 0x1b580c: 0xc0c3ea6  jal         func_30FA98
label_1b5810:
    if (ctx->pc == 0x1B5810u) {
        ctx->pc = 0x1B5810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B580Cu;
        // 0x1b5810: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5814u;
        goto label_1b5814;
    }
    ctx->pc = 0x1B580Cu;
    SET_GPR_U32(ctx, 31, 0x1B5814u);
    ctx->pc = 0x1B5810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B580Cu;
    // 0x1b5810: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x1B580Cu, 0x1B5814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5814u;
label_1b5814:
    // 0x1b5814: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1b5814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1b5818:
    // 0x1b5818: 0xae020604  sw          $v0, 0x604($s0)
    ctx->pc = 0x1b5818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 2));
label_1b581c:
    // 0x1b581c: 0xc0c3ea6  jal         func_30FA98
label_1b5820:
    if (ctx->pc == 0x1B5820u) {
        ctx->pc = 0x1B5820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B581Cu;
        // 0x1b5820: 0x240403b6  addiu       $a0, $zero, 0x3B6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 950));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5824u;
        goto label_1b5824;
    }
    ctx->pc = 0x1B581Cu;
    SET_GPR_U32(ctx, 31, 0x1B5824u);
    ctx->pc = 0x1B5820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B581Cu;
    // 0x1b5820: 0x240403b6  addiu       $a0, $zero, 0x3B6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 950));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x1B581Cu, 0x1B5824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5824u;
label_1b5824:
    // 0x1b5824: 0x8e050604  lw          $a1, 0x604($s0)
    ctx->pc = 0x1b5824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
label_1b5828:
    // 0x1b5828: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_1b582c:
    if (ctx->pc == 0x1B582Cu) {
        ctx->pc = 0x1B582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5828u;
        // 0x1b582c: 0xae020608  sw          $v0, 0x608($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5830u;
        goto label_1b5830;
    }
    ctx->pc = 0x1B5828u;
    {
        const bool branch_taken_0x1b5828 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5828u;
        // 0x1b582c: 0xae020608  sw          $v0, 0x608($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5828) {
            ctx->pc = 0x1B585Cu;
            goto label_1b585c;
        }
    }
    ctx->pc = 0x1B5830u;
label_1b5830:
    // 0x1b5830: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x1b5830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_1b5834:
    // 0x1b5834: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1b5834u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1b5838:
    // 0x1b5838: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1b5838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1b583c:
    // 0x1b583c: 0x40f809  jalr        $v0
label_1b5840:
    if (ctx->pc == 0x1B5840u) {
        ctx->pc = 0x1B5840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B583Cu;
        // 0x1b5840: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5844u;
        goto label_1b5844;
    }
    ctx->pc = 0x1B583Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B5844u);
        ctx->pc = 0x1B5840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B583Cu;
        // 0x1b5840: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B583Cu, 0x1B5844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5844u;
label_1b5844:
    // 0x1b5844: 0x8e040604  lw          $a0, 0x604($s0)
    ctx->pc = 0x1b5844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
label_1b5848:
    // 0x1b5848: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1b5848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_1b584c:
    // 0x1b584c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b584cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b5850:
    // 0x1b5850: 0x8c82062c  lw          $v0, 0x62C($a0)
    ctx->pc = 0x1b5850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1580)));
label_1b5854:
    // 0x1b5854: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b5854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1b5858:
    // 0x1b5858: 0xac82062c  sw          $v0, 0x62C($a0)
    ctx->pc = 0x1b5858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1580), GPR_U32(ctx, 2));
label_1b585c:
    // 0x1b585c: 0x8e050608  lw          $a1, 0x608($s0)
    ctx->pc = 0x1b585cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
label_1b5860:
    // 0x1b5860: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_1b5864:
    if (ctx->pc == 0x1B5864u) {
        ctx->pc = 0x1B5868u;
        goto label_1b5868;
    }
    ctx->pc = 0x1B5860u;
    {
        const bool branch_taken_0x1b5860 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5860) {
            ctx->pc = 0x1B5894u;
            goto label_1b5894;
        }
    }
    ctx->pc = 0x1B5868u;
label_1b5868:
    // 0x1b5868: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x1b5868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_1b586c:
    // 0x1b586c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1b586cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1b5870:
    // 0x1b5870: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1b5870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1b5874:
    // 0x1b5874: 0x40f809  jalr        $v0
label_1b5878:
    if (ctx->pc == 0x1B5878u) {
        ctx->pc = 0x1B5878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5874u;
        // 0x1b5878: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B587Cu;
        goto label_1b587c;
    }
    ctx->pc = 0x1B5874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B587Cu);
        ctx->pc = 0x1B5878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5874u;
        // 0x1b5878: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5874u, 0x1B587Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B587Cu;
label_1b587c:
    // 0x1b587c: 0x8e040608  lw          $a0, 0x608($s0)
    ctx->pc = 0x1b587cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
label_1b5880:
    // 0x1b5880: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1b5880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_1b5884:
    // 0x1b5884: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b5884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b5888:
    // 0x1b5888: 0x8c82062c  lw          $v0, 0x62C($a0)
    ctx->pc = 0x1b5888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1580)));
label_1b588c:
    // 0x1b588c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b588cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1b5890:
    // 0x1b5890: 0xac82062c  sw          $v0, 0x62C($a0)
    ctx->pc = 0x1b5890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1580), GPR_U32(ctx, 2));
label_1b5894:
    // 0x1b5894: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b5894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b5898:
    // 0x1b5898: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b5898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b589c:
    // 0x1b589c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1b589cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b58a0:
    // 0x1b58a0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1b58a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1b58a4:
    // 0x1b58a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b58a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b58a8:
    // 0x1b58a8: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1b58a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b58ac:
    // 0x1b58ac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b58acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b58b0:
    // 0x1b58b0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1b58b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_1b58b4:
    // 0x1b58b4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1b58b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1b58b8:
    // 0x1b58b8: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x1b58b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
label_1b58bc:
    // 0x1b58bc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1b58bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1b58c0:
    // 0x1b58c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b58c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b58c4:
    // 0x1b58c4: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1b58c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b58c8:
    // 0x1b58c8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1b58c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b58cc:
    // 0x1b58cc: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1b58ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1b58d0:
    // 0x1b58d0: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1b58d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1b58d4:
    // 0x1b58d4: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x1b58d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1b58d8:
    // 0x1b58d8: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x1b58d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_1b58dc:
    // 0x1b58dc: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1b58dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_1b58e0:
    // 0x1b58e0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1b58e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1b58e4:
    // 0x1b58e4: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1b58e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_1b58e8:
    // 0x1b58e8: 0xc07f886  jal         func_1FE218
label_1b58ec:
    if (ctx->pc == 0x1B58ECu) {
        ctx->pc = 0x1B58ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B58E8u;
        // 0x1b58ec: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B58F0u;
        goto label_1b58f0;
    }
    ctx->pc = 0x1B58E8u;
    SET_GPR_U32(ctx, 31, 0x1B58F0u);
    ctx->pc = 0x1B58ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B58E8u;
    // 0x1b58ec: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1B58E8u, 0x1B58F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B58F0u;
label_1b58f0:
    // 0x1b58f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b58f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b58f4:
    // 0x1b58f4: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_1b58f8:
    if (ctx->pc == 0x1B58F8u) {
        ctx->pc = 0x1B58F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B58F4u;
        // 0x1b58f8: 0xae040600  sw          $a0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B58FCu;
        goto label_1b58fc;
    }
    ctx->pc = 0x1B58F4u;
    {
        const bool branch_taken_0x1b58f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B58F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B58F4u;
        // 0x1b58f8: 0xae040600  sw          $a0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b58f4) {
            ctx->pc = 0x1B5930u;
            goto label_1b5930;
        }
    }
    ctx->pc = 0x1B58FCu;
label_1b58fc:
    // 0x1b58fc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1b58fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1b5900:
    // 0x1b5900: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1b5900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_1b5904:
    // 0x1b5904: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1b5904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_1b5908:
    // 0x1b5908: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x1b5908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_1b590c:
    // 0x1b590c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1b590cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1b5910:
    // 0x1b5910: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b5910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5914:
    // 0x1b5914: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1b5914u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1b5918:
    // 0x1b5918: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b5918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b591c:
    // 0x1b591c: 0xc07f676  jal         func_1FD9D8
label_1b5920:
    if (ctx->pc == 0x1B5920u) {
        ctx->pc = 0x1B5920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B591Cu;
        // 0x1b5920: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5924u;
        goto label_1b5924;
    }
    ctx->pc = 0x1B591Cu;
    SET_GPR_U32(ctx, 31, 0x1B5924u);
    ctx->pc = 0x1B5920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B591Cu;
    // 0x1b5920: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x1B591Cu, 0x1B5924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5924u;
label_1b5924:
    // 0x1b5924: 0x8e040600  lw          $a0, 0x600($s0)
    ctx->pc = 0x1b5924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
label_1b5928:
    // 0x1b5928: 0xc07f59a  jal         func_1FD668
label_1b592c:
    if (ctx->pc == 0x1B592Cu) {
        ctx->pc = 0x1B592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5928u;
        // 0x1b592c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5930u;
        goto label_1b5930;
    }
    ctx->pc = 0x1B5928u;
    SET_GPR_U32(ctx, 31, 0x1B5930u);
    ctx->pc = 0x1B592Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5928u;
    // 0x1b592c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B5928u, 0x1B5930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5930u;
label_1b5930:
    // 0x1b5930: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b5930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b5934:
    // 0x1b5934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b5938:
    // 0x1b5938: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x1b5938u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
label_1b593c:
    // 0x1b593c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b593cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5940:
    // 0x1b5940: 0xa6020548  sh          $v0, 0x548($s0)
    ctx->pc = 0x1b5940u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
label_1b5944:
    // 0x1b5944: 0xc06dca0  jal         func_1B7280
label_1b5948:
    if (ctx->pc == 0x1B5948u) {
        ctx->pc = 0x1B5948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5944u;
        // 0x1b5948: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B594Cu;
        goto label_1b594c;
    }
    ctx->pc = 0x1B5944u;
    SET_GPR_U32(ctx, 31, 0x1B594Cu);
    ctx->pc = 0x1B5948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5944u;
    // 0x1b5948: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1B5944u, 0x1B594Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B594Cu;
label_1b594c:
    // 0x1b594c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1b594cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1b5950:
    // 0x1b5950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b5954:
    // 0x1b5954: 0xc06dca0  jal         func_1B7280
label_1b5958:
    if (ctx->pc == 0x1B5958u) {
        ctx->pc = 0x1B5958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5954u;
        // 0x1b5958: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B595Cu;
        goto label_1b595c;
    }
    ctx->pc = 0x1B5954u;
    SET_GPR_U32(ctx, 31, 0x1B595Cu);
    ctx->pc = 0x1B5958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5954u;
    // 0x1b5958: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1B5954u, 0x1B595Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B595Cu;
label_1b595c:
    // 0x1b595c: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1b595cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_1b5960:
    // 0x1b5960: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b5960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5964:
    // 0x1b5964: 0x5045002f  beql        $v0, $a1, . + 4 + (0x2F << 2)
label_1b5968:
    if (ctx->pc == 0x1B5968u) {
        ctx->pc = 0x1B5968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5964u;
        // 0x1b5968: 0x8e0305b8  lw          $v1, 0x5B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B596Cu;
        goto label_1b596c;
    }
    ctx->pc = 0x1B5964u;
    {
        const bool branch_taken_0x1b5964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1b5964) {
            ctx->pc = 0x1B5968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5964u;
            // 0x1b5968: 0x8e0305b8  lw          $v1, 0x5B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5A24u;
            goto label_1b5a24;
        }
    }
    ctx->pc = 0x1B596Cu;
label_1b596c:
    // 0x1b596c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b596cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5970:
    // 0x1b5970: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b5970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5974:
    // 0x1b5974: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1b5974u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_1b5978:
    // 0x1b5978: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b5978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b597c:
    // 0x1b597c: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1b597cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1b5980:
    // 0x1b5980: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b5984:
    if (ctx->pc == 0x1B5984u) {
        ctx->pc = 0x1B5984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5980u;
        // 0x1b5984: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5988u;
        goto label_1b5988;
    }
    ctx->pc = 0x1B5980u;
    {
        const bool branch_taken_0x1b5980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5980u;
        // 0x1b5984: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5980) {
            ctx->pc = 0x1B5990u;
            goto label_1b5990;
        }
    }
    ctx->pc = 0x1B5988u;
label_1b5988:
    // 0x1b5988: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1b5988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b598c:
    // 0x1b598c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b598cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5990:
    // 0x1b5990: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1b5990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1b5994:
    // 0x1b5994: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b5998:
    if (ctx->pc == 0x1B5998u) {
        ctx->pc = 0x1B5998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5994u;
        // 0x1b5998: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B599Cu;
        goto label_1b599c;
    }
    ctx->pc = 0x1B5994u;
    {
        const bool branch_taken_0x1b5994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5994u;
        // 0x1b5998: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5994) {
            ctx->pc = 0x1B59ACu;
            goto label_1b59ac;
        }
    }
    ctx->pc = 0x1B599Cu;
label_1b599c:
    // 0x1b599c: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x1b599cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_1b59a0:
    // 0x1b59a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b59a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b59a4:
    // 0x1b59a4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b59a8:
    if (ctx->pc == 0x1B59A8u) {
        ctx->pc = 0x1B59A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B59A4u;
        // 0x1b59a8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B59ACu;
        goto label_1b59ac;
    }
    ctx->pc = 0x1B59A4u;
    {
        const bool branch_taken_0x1b59a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B59A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B59A4u;
        // 0x1b59a8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b59a4) {
            ctx->pc = 0x1B59B0u;
            goto label_1b59b0;
        }
    }
    ctx->pc = 0x1B59ACu;
label_1b59ac:
    // 0x1b59ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b59acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b59b0:
    // 0x1b59b0: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1b59b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
label_1b59b4:
    // 0x1b59b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b59b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b59b8:
    // 0x1b59b8: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x1b59b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1b59bc:
    // 0x1b59bc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1b59bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_1b59c0:
    // 0x1b59c0: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1b59c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
label_1b59c4:
    // 0x1b59c4: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1b59c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_1b59c8:
    // 0x1b59c8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1b59cc:
    if (ctx->pc == 0x1B59CCu) {
        ctx->pc = 0x1B59CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B59C8u;
        // 0x1b59cc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B59D0u;
        goto label_1b59d0;
    }
    ctx->pc = 0x1B59C8u;
    {
        const bool branch_taken_0x1b59c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B59CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B59C8u;
        // 0x1b59cc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b59c8) {
            ctx->pc = 0x1B59D8u;
            goto label_1b59d8;
        }
    }
    ctx->pc = 0x1B59D0u;
label_1b59d0:
    // 0x1b59d0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1b59d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b59d4:
    // 0x1b59d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b59d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b59d8:
    // 0x1b59d8: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1b59d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1b59dc:
    // 0x1b59dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b59e0:
    if (ctx->pc == 0x1B59E0u) {
        ctx->pc = 0x1B59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B59DCu;
        // 0x1b59e0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B59E4u;
        goto label_1b59e4;
    }
    ctx->pc = 0x1B59DCu;
    {
        const bool branch_taken_0x1b59dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B59DCu;
        // 0x1b59e0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b59dc) {
            ctx->pc = 0x1B59F4u;
            goto label_1b59f4;
        }
    }
    ctx->pc = 0x1B59E4u;
label_1b59e4:
    // 0x1b59e4: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x1b59e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_1b59e8:
    // 0x1b59e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b59e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b59ec:
    // 0x1b59ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b59f0:
    if (ctx->pc == 0x1B59F0u) {
        ctx->pc = 0x1B59F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B59ECu;
        // 0x1b59f0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B59F4u;
        goto label_1b59f4;
    }
    ctx->pc = 0x1B59ECu;
    {
        const bool branch_taken_0x1b59ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B59F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B59ECu;
        // 0x1b59f0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b59ec) {
            ctx->pc = 0x1B59F8u;
            goto label_1b59f8;
        }
    }
    ctx->pc = 0x1B59F4u;
label_1b59f4:
    // 0x1b59f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b59f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b59f8:
    // 0x1b59f8: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1b59f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
label_1b59fc:
    // 0x1b59fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b59fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b5a00:
    // 0x1b5a00: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1b5a00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1b5a04:
    // 0x1b5a04: 0x28a30006  slti        $v1, $a1, 0x6
    ctx->pc = 0x1b5a04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
label_1b5a08:
    // 0x1b5a08: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1b5a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_1b5a0c:
    // 0x1b5a0c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1b5a10:
    if (ctx->pc == 0x1B5A10u) {
        ctx->pc = 0x1B5A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A0Cu;
        // 0x1b5a10: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5A14u;
        goto label_1b5a14;
    }
    ctx->pc = 0x1B5A0Cu;
    {
        const bool branch_taken_0x1b5a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A0Cu;
        // 0x1b5a10: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5a0c) {
            ctx->pc = 0x1B5A20u;
            goto label_1b5a20;
        }
    }
    ctx->pc = 0x1B5A14u;
label_1b5a14:
    // 0x1b5a14: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1b5a14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_1b5a18:
    // 0x1b5a18: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
label_1b5a1c:
    if (ctx->pc == 0x1B5A1Cu) {
        ctx->pc = 0x1B5A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A18u;
        // 0x1b5a1c: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5A20u;
        goto label_1b5a20;
    }
    ctx->pc = 0x1B5A18u;
    {
        const bool branch_taken_0x1b5a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1b5a18) {
            ctx->pc = 0x1B5A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5A18u;
            // 0x1b5a1c: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5978;
        }
    }
    ctx->pc = 0x1B5A20u;
label_1b5a20:
    // 0x1b5a20: 0x8e0305b8  lw          $v1, 0x5B8($s0)
    ctx->pc = 0x1b5a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
label_1b5a24:
    // 0x1b5a24: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x1b5a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1b5a28:
    // 0x1b5a28: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1b5a28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b5a2c:
    // 0x1b5a2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5a30:
    // 0x1b5a30: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1b5a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1b5a34:
    // 0x1b5a34: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1b5a34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b5a38:
    // 0x1b5a38: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1b5a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_1b5a3c:
    // 0x1b5a3c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b5a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b5a40:
    // 0x1b5a40: 0xae0305b8  sw          $v1, 0x5B8($s0)
    ctx->pc = 0x1b5a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 3));
label_1b5a44:
    // 0x1b5a44: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1b5a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b5a48:
    // 0x1b5a48: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1b5a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b5a4c:
    // 0x1b5a4c: 0x3e00008  jr          $ra
label_1b5a50:
    if (ctx->pc == 0x1B5A50u) {
        ctx->pc = 0x1B5A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A4Cu;
        // 0x1b5a50: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5A54u;
        goto label_1b5a54;
    }
    ctx->pc = 0x1B5A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A4Cu;
        // 0x1b5a50: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5A54u;
label_1b5a54:
    // 0x1b5a54: 0x0  nop
    ctx->pc = 0x1b5a54u;
    // NOP
    ctx->pc = 0x1b5a58u;
}
