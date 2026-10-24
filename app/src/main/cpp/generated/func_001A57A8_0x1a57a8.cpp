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

// Function: func_001A57A8
// Address: 0x1a57a8 - 0x1a5b08
void func_001A57A8_0x1a57a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A57A8_0x1a57a8");
#endif

    switch (ctx->pc) {
        case 0x1a57a8u: goto label_1a57a8;
        case 0x1a57acu: goto label_1a57ac;
        case 0x1a57b0u: goto label_1a57b0;
        case 0x1a57b4u: goto label_1a57b4;
        case 0x1a57b8u: goto label_1a57b8;
        case 0x1a57bcu: goto label_1a57bc;
        case 0x1a57c0u: goto label_1a57c0;
        case 0x1a57c4u: goto label_1a57c4;
        case 0x1a57c8u: goto label_1a57c8;
        case 0x1a57ccu: goto label_1a57cc;
        case 0x1a57d0u: goto label_1a57d0;
        case 0x1a57d4u: goto label_1a57d4;
        case 0x1a57d8u: goto label_1a57d8;
        case 0x1a57dcu: goto label_1a57dc;
        case 0x1a57e0u: goto label_1a57e0;
        case 0x1a57e4u: goto label_1a57e4;
        case 0x1a57e8u: goto label_1a57e8;
        case 0x1a57ecu: goto label_1a57ec;
        case 0x1a57f0u: goto label_1a57f0;
        case 0x1a57f4u: goto label_1a57f4;
        case 0x1a57f8u: goto label_1a57f8;
        case 0x1a57fcu: goto label_1a57fc;
        case 0x1a5800u: goto label_1a5800;
        case 0x1a5804u: goto label_1a5804;
        case 0x1a5808u: goto label_1a5808;
        case 0x1a580cu: goto label_1a580c;
        case 0x1a5810u: goto label_1a5810;
        case 0x1a5814u: goto label_1a5814;
        case 0x1a5818u: goto label_1a5818;
        case 0x1a581cu: goto label_1a581c;
        case 0x1a5820u: goto label_1a5820;
        case 0x1a5824u: goto label_1a5824;
        case 0x1a5828u: goto label_1a5828;
        case 0x1a582cu: goto label_1a582c;
        case 0x1a5830u: goto label_1a5830;
        case 0x1a5834u: goto label_1a5834;
        case 0x1a5838u: goto label_1a5838;
        case 0x1a583cu: goto label_1a583c;
        case 0x1a5840u: goto label_1a5840;
        case 0x1a5844u: goto label_1a5844;
        case 0x1a5848u: goto label_1a5848;
        case 0x1a584cu: goto label_1a584c;
        case 0x1a5850u: goto label_1a5850;
        case 0x1a5854u: goto label_1a5854;
        case 0x1a5858u: goto label_1a5858;
        case 0x1a585cu: goto label_1a585c;
        case 0x1a5860u: goto label_1a5860;
        case 0x1a5864u: goto label_1a5864;
        case 0x1a5868u: goto label_1a5868;
        case 0x1a586cu: goto label_1a586c;
        case 0x1a5870u: goto label_1a5870;
        case 0x1a5874u: goto label_1a5874;
        case 0x1a5878u: goto label_1a5878;
        case 0x1a587cu: goto label_1a587c;
        case 0x1a5880u: goto label_1a5880;
        case 0x1a5884u: goto label_1a5884;
        case 0x1a5888u: goto label_1a5888;
        case 0x1a588cu: goto label_1a588c;
        case 0x1a5890u: goto label_1a5890;
        case 0x1a5894u: goto label_1a5894;
        case 0x1a5898u: goto label_1a5898;
        case 0x1a589cu: goto label_1a589c;
        case 0x1a58a0u: goto label_1a58a0;
        case 0x1a58a4u: goto label_1a58a4;
        case 0x1a58a8u: goto label_1a58a8;
        case 0x1a58acu: goto label_1a58ac;
        case 0x1a58b0u: goto label_1a58b0;
        case 0x1a58b4u: goto label_1a58b4;
        case 0x1a58b8u: goto label_1a58b8;
        case 0x1a58bcu: goto label_1a58bc;
        case 0x1a58c0u: goto label_1a58c0;
        case 0x1a58c4u: goto label_1a58c4;
        case 0x1a58c8u: goto label_1a58c8;
        case 0x1a58ccu: goto label_1a58cc;
        case 0x1a58d0u: goto label_1a58d0;
        case 0x1a58d4u: goto label_1a58d4;
        case 0x1a58d8u: goto label_1a58d8;
        case 0x1a58dcu: goto label_1a58dc;
        case 0x1a58e0u: goto label_1a58e0;
        case 0x1a58e4u: goto label_1a58e4;
        case 0x1a58e8u: goto label_1a58e8;
        case 0x1a58ecu: goto label_1a58ec;
        case 0x1a58f0u: goto label_1a58f0;
        case 0x1a58f4u: goto label_1a58f4;
        case 0x1a58f8u: goto label_1a58f8;
        case 0x1a58fcu: goto label_1a58fc;
        case 0x1a5900u: goto label_1a5900;
        case 0x1a5904u: goto label_1a5904;
        case 0x1a5908u: goto label_1a5908;
        case 0x1a590cu: goto label_1a590c;
        case 0x1a5910u: goto label_1a5910;
        case 0x1a5914u: goto label_1a5914;
        case 0x1a5918u: goto label_1a5918;
        case 0x1a591cu: goto label_1a591c;
        case 0x1a5920u: goto label_1a5920;
        case 0x1a5924u: goto label_1a5924;
        case 0x1a5928u: goto label_1a5928;
        case 0x1a592cu: goto label_1a592c;
        case 0x1a5930u: goto label_1a5930;
        case 0x1a5934u: goto label_1a5934;
        case 0x1a5938u: goto label_1a5938;
        case 0x1a593cu: goto label_1a593c;
        case 0x1a5940u: goto label_1a5940;
        case 0x1a5944u: goto label_1a5944;
        case 0x1a5948u: goto label_1a5948;
        case 0x1a594cu: goto label_1a594c;
        case 0x1a5950u: goto label_1a5950;
        case 0x1a5954u: goto label_1a5954;
        case 0x1a5958u: goto label_1a5958;
        case 0x1a595cu: goto label_1a595c;
        case 0x1a5960u: goto label_1a5960;
        case 0x1a5964u: goto label_1a5964;
        case 0x1a5968u: goto label_1a5968;
        case 0x1a596cu: goto label_1a596c;
        case 0x1a5970u: goto label_1a5970;
        case 0x1a5974u: goto label_1a5974;
        case 0x1a5978u: goto label_1a5978;
        case 0x1a597cu: goto label_1a597c;
        case 0x1a5980u: goto label_1a5980;
        case 0x1a5984u: goto label_1a5984;
        case 0x1a5988u: goto label_1a5988;
        case 0x1a598cu: goto label_1a598c;
        case 0x1a5990u: goto label_1a5990;
        case 0x1a5994u: goto label_1a5994;
        case 0x1a5998u: goto label_1a5998;
        case 0x1a599cu: goto label_1a599c;
        case 0x1a59a0u: goto label_1a59a0;
        case 0x1a59a4u: goto label_1a59a4;
        case 0x1a59a8u: goto label_1a59a8;
        case 0x1a59acu: goto label_1a59ac;
        case 0x1a59b0u: goto label_1a59b0;
        case 0x1a59b4u: goto label_1a59b4;
        case 0x1a59b8u: goto label_1a59b8;
        case 0x1a59bcu: goto label_1a59bc;
        case 0x1a59c0u: goto label_1a59c0;
        case 0x1a59c4u: goto label_1a59c4;
        case 0x1a59c8u: goto label_1a59c8;
        case 0x1a59ccu: goto label_1a59cc;
        case 0x1a59d0u: goto label_1a59d0;
        case 0x1a59d4u: goto label_1a59d4;
        case 0x1a59d8u: goto label_1a59d8;
        case 0x1a59dcu: goto label_1a59dc;
        case 0x1a59e0u: goto label_1a59e0;
        case 0x1a59e4u: goto label_1a59e4;
        case 0x1a59e8u: goto label_1a59e8;
        case 0x1a59ecu: goto label_1a59ec;
        case 0x1a59f0u: goto label_1a59f0;
        case 0x1a59f4u: goto label_1a59f4;
        case 0x1a59f8u: goto label_1a59f8;
        case 0x1a59fcu: goto label_1a59fc;
        case 0x1a5a00u: goto label_1a5a00;
        case 0x1a5a04u: goto label_1a5a04;
        case 0x1a5a08u: goto label_1a5a08;
        case 0x1a5a0cu: goto label_1a5a0c;
        case 0x1a5a10u: goto label_1a5a10;
        case 0x1a5a14u: goto label_1a5a14;
        case 0x1a5a18u: goto label_1a5a18;
        case 0x1a5a1cu: goto label_1a5a1c;
        case 0x1a5a20u: goto label_1a5a20;
        case 0x1a5a24u: goto label_1a5a24;
        case 0x1a5a28u: goto label_1a5a28;
        case 0x1a5a2cu: goto label_1a5a2c;
        case 0x1a5a30u: goto label_1a5a30;
        case 0x1a5a34u: goto label_1a5a34;
        case 0x1a5a38u: goto label_1a5a38;
        case 0x1a5a3cu: goto label_1a5a3c;
        case 0x1a5a40u: goto label_1a5a40;
        case 0x1a5a44u: goto label_1a5a44;
        case 0x1a5a48u: goto label_1a5a48;
        case 0x1a5a4cu: goto label_1a5a4c;
        case 0x1a5a50u: goto label_1a5a50;
        case 0x1a5a54u: goto label_1a5a54;
        case 0x1a5a58u: goto label_1a5a58;
        case 0x1a5a5cu: goto label_1a5a5c;
        case 0x1a5a60u: goto label_1a5a60;
        case 0x1a5a64u: goto label_1a5a64;
        case 0x1a5a68u: goto label_1a5a68;
        case 0x1a5a6cu: goto label_1a5a6c;
        case 0x1a5a70u: goto label_1a5a70;
        case 0x1a5a74u: goto label_1a5a74;
        case 0x1a5a78u: goto label_1a5a78;
        case 0x1a5a7cu: goto label_1a5a7c;
        case 0x1a5a80u: goto label_1a5a80;
        case 0x1a5a84u: goto label_1a5a84;
        case 0x1a5a88u: goto label_1a5a88;
        case 0x1a5a8cu: goto label_1a5a8c;
        case 0x1a5a90u: goto label_1a5a90;
        case 0x1a5a94u: goto label_1a5a94;
        case 0x1a5a98u: goto label_1a5a98;
        case 0x1a5a9cu: goto label_1a5a9c;
        case 0x1a5aa0u: goto label_1a5aa0;
        case 0x1a5aa4u: goto label_1a5aa4;
        case 0x1a5aa8u: goto label_1a5aa8;
        case 0x1a5aacu: goto label_1a5aac;
        case 0x1a5ab0u: goto label_1a5ab0;
        case 0x1a5ab4u: goto label_1a5ab4;
        case 0x1a5ab8u: goto label_1a5ab8;
        case 0x1a5abcu: goto label_1a5abc;
        case 0x1a5ac0u: goto label_1a5ac0;
        case 0x1a5ac4u: goto label_1a5ac4;
        case 0x1a5ac8u: goto label_1a5ac8;
        case 0x1a5accu: goto label_1a5acc;
        case 0x1a5ad0u: goto label_1a5ad0;
        case 0x1a5ad4u: goto label_1a5ad4;
        case 0x1a5ad8u: goto label_1a5ad8;
        case 0x1a5adcu: goto label_1a5adc;
        case 0x1a5ae0u: goto label_1a5ae0;
        case 0x1a5ae4u: goto label_1a5ae4;
        case 0x1a5ae8u: goto label_1a5ae8;
        case 0x1a5aecu: goto label_1a5aec;
        case 0x1a5af0u: goto label_1a5af0;
        case 0x1a5af4u: goto label_1a5af4;
        case 0x1a5af8u: goto label_1a5af8;
        case 0x1a5afcu: goto label_1a5afc;
        case 0x1a5b00u: goto label_1a5b00;
        case 0x1a5b04u: goto label_1a5b04;
        default: break;
    }

    ctx->pc = 0x1a57a8u;

label_1a57a8:
    // 0x1a57a8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1a57a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1a57ac:
    // 0x1a57ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a57acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a57b0:
    // 0x1a57b0: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x1a57b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_1a57b4:
    // 0x1a57b4: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1a57b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_1a57b8:
    // 0x1a57b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a57b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a57bc:
    // 0x1a57bc: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1a57bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_1a57c0:
    // 0x1a57c0: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x1a57c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_1a57c4:
    // 0x1a57c4: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x1a57c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_1a57c8:
    // 0x1a57c8: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x1a57c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_1a57cc:
    // 0x1a57cc: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x1a57ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_1a57d0:
    // 0x1a57d0: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1a57d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_1a57d4:
    // 0x1a57d4: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1a57d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1a57d8:
    // 0x1a57d8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1a57d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1a57dc:
    // 0x1a57dc: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x1a57dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1a57e0:
    // 0x1a57e0: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x1a57e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1a57e4:
    // 0x1a57e4: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x1a57e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_1a57e8:
    // 0x1a57e8: 0x10620044  beq         $v1, $v0, . + 4 + (0x44 << 2)
label_1a57ec:
    if (ctx->pc == 0x1A57ECu) {
        ctx->pc = 0x1A57ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A57E8u;
        // 0x1a57ec: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A57F0u;
        goto label_1a57f0;
    }
    ctx->pc = 0x1A57E8u;
    {
        const bool branch_taken_0x1a57e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A57ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A57E8u;
        // 0x1a57ec: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a57e8) {
            ctx->pc = 0x1A58FCu;
            goto label_1a58fc;
        }
    }
    ctx->pc = 0x1A57F0u;
label_1a57f0:
    // 0x1a57f0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1a57f4:
    if (ctx->pc == 0x1A57F4u) {
        ctx->pc = 0x1A57F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A57F0u;
        // 0x1a57f4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A57F8u;
        goto label_1a57f8;
    }
    ctx->pc = 0x1A57F0u;
    {
        const bool branch_taken_0x1a57f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a57f0) {
            ctx->pc = 0x1A57F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A57F0u;
            // 0x1a57f4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5808u;
            goto label_1a5808;
        }
    }
    ctx->pc = 0x1A57F8u;
label_1a57f8:
    // 0x1a57f8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1a57fc:
    if (ctx->pc == 0x1A57FCu) {
        ctx->pc = 0x1A5800u;
        goto label_1a5800;
    }
    ctx->pc = 0x1A57F8u;
    {
        const bool branch_taken_0x1a57f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a57f8) {
            ctx->pc = 0x1A5820u;
            goto label_1a5820;
        }
    }
    ctx->pc = 0x1A5800u;
label_1a5800:
    // 0x1a5800: 0x1000005d  b           . + 4 + (0x5D << 2)
label_1a5804:
    if (ctx->pc == 0x1A5804u) {
        ctx->pc = 0x1A5804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5800u;
        // 0x1a5804: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5808u;
        goto label_1a5808;
    }
    ctx->pc = 0x1A5800u;
    {
        const bool branch_taken_0x1a5800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5800u;
        // 0x1a5804: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5800) {
            ctx->pc = 0x1A5978u;
            goto label_1a5978;
        }
    }
    ctx->pc = 0x1A5808u;
label_1a5808:
    // 0x1a5808: 0x10640046  beq         $v1, $a0, . + 4 + (0x46 << 2)
label_1a580c:
    if (ctx->pc == 0x1A580Cu) {
        ctx->pc = 0x1A580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5808u;
        // 0x1a580c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5810u;
        goto label_1a5810;
    }
    ctx->pc = 0x1A5808u;
    {
        const bool branch_taken_0x1a5808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1A580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5808u;
        // 0x1a580c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5808) {
            ctx->pc = 0x1A5924u;
            goto label_1a5924;
        }
    }
    ctx->pc = 0x1A5810u;
label_1a5810:
    // 0x1a5810: 0x50620055  beql        $v1, $v0, . + 4 + (0x55 << 2)
label_1a5814:
    if (ctx->pc == 0x1A5814u) {
        ctx->pc = 0x1A5814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5810u;
        // 0x1a5814: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5818u;
        goto label_1a5818;
    }
    ctx->pc = 0x1A5810u;
    {
        const bool branch_taken_0x1a5810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a5810) {
            ctx->pc = 0x1A5814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5810u;
            // 0x1a5814: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5968u;
            goto label_1a5968;
        }
    }
    ctx->pc = 0x1A5818u;
label_1a5818:
    // 0x1a5818: 0x10000057  b           . + 4 + (0x57 << 2)
label_1a581c:
    if (ctx->pc == 0x1A581Cu) {
        ctx->pc = 0x1A581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5818u;
        // 0x1a581c: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5820u;
        goto label_1a5820;
    }
    ctx->pc = 0x1A5818u;
    {
        const bool branch_taken_0x1a5818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5818u;
        // 0x1a581c: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5818) {
            ctx->pc = 0x1A5978u;
            goto label_1a5978;
        }
    }
    ctx->pc = 0x1A5820u;
label_1a5820:
    // 0x1a5820: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1a5820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1a5824:
    // 0x1a5824: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x1a5824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_1a5828:
    // 0x1a5828: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1a5828u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1a582c:
    // 0x1a582c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1a582cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1a5830:
    // 0x1a5830: 0x40f809  jalr        $v0
label_1a5834:
    if (ctx->pc == 0x1A5834u) {
        ctx->pc = 0x1A5834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5830u;
        // 0x1a5834: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5838u;
        goto label_1a5838;
    }
    ctx->pc = 0x1A5830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5838u);
        ctx->pc = 0x1A5834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5830u;
        // 0x1a5834: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5830u, 0x1A5838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5838u;
label_1a5838:
    // 0x1a5838: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
label_1a583c:
    if (ctx->pc == 0x1A583Cu) {
        ctx->pc = 0x1A5840u;
        goto label_1a5840;
    }
    ctx->pc = 0x1A5838u;
    {
        const bool branch_taken_0x1a5838 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a5838) {
            ctx->pc = 0x1A5858u;
            goto label_1a5858;
        }
    }
    ctx->pc = 0x1A5840u;
label_1a5840:
    // 0x1a5840: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1a5840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5844:
    // 0x1a5844: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1a5844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a5848:
    // 0x1a5848: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a5848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a584c:
    // 0x1a584c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1a584cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1a5850:
    // 0x1a5850: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a5850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5854:
    // 0x1a5854: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1a5854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1a5858:
    // 0x1a5858: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1a5858u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_1a585c:
    // 0x1a585c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a585cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a5860:
    // 0x1a5860: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a5860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a5864:
    // 0x1a5864: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a5864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a5868:
    // 0x1a5868: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a5868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a586c:
    // 0x1a586c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1a586cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a5870:
    // 0x1a5870: 0xc0c194a  jal         func_306528
label_1a5874:
    if (ctx->pc == 0x1A5874u) {
        ctx->pc = 0x1A5874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5870u;
        // 0x1a5874: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5878u;
        goto label_1a5878;
    }
    ctx->pc = 0x1A5870u;
    SET_GPR_U32(ctx, 31, 0x1A5878u);
    ctx->pc = 0x1A5874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5870u;
    // 0x1a5874: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1A5870u, 0x1A5878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5878u;
label_1a5878:
    // 0x1a5878: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1a5878u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_1a587c:
    // 0x1a587c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a587cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a5880:
    // 0x1a5880: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a5880u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a5884:
    // 0x1a5884: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a5888:
    if (ctx->pc == 0x1A5888u) {
        ctx->pc = 0x1A5888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5884u;
        // 0x1a5888: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A588Cu;
        goto label_1a588c;
    }
    ctx->pc = 0x1A5884u;
    {
        const bool branch_taken_0x1a5884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5884u;
        // 0x1a5888: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5884) {
            ctx->pc = 0x1A5898u;
            goto label_1a5898;
        }
    }
    ctx->pc = 0x1A588Cu;
label_1a588c:
    // 0x1a588c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1a588cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_1a5890:
    // 0x1a5890: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a5894:
    if (ctx->pc == 0x1A5894u) {
        ctx->pc = 0x1A5894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5890u;
        // 0x1a5894: 0x8c490004  lw          $t1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5898u;
        goto label_1a5898;
    }
    ctx->pc = 0x1A5890u;
    {
        const bool branch_taken_0x1a5890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5890u;
        // 0x1a5894: 0x8c490004  lw          $t1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5890) {
            ctx->pc = 0x1A589Cu;
            goto label_1a589c;
        }
    }
    ctx->pc = 0x1A5898u;
label_1a5898:
    // 0x1a5898: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a5898u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a589c:
    // 0x1a589c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1a589cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1a58a0:
    // 0x1a58a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a58a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a58a4:
    // 0x1a58a4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1a58a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1a58a8:
    // 0x1a58a8: 0x24060095  addiu       $a2, $zero, 0x95
    ctx->pc = 0x1a58a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
label_1a58ac:
    // 0x1a58ac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1a58acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a58b0:
    // 0x1a58b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a58b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a58b4:
    // 0x1a58b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a58b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a58b8:
    // 0x1a58b8: 0xc0b2e92  jal         func_2CBA48
label_1a58bc:
    if (ctx->pc == 0x1A58BCu) {
        ctx->pc = 0x1A58BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58B8u;
        // 0x1a58bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A58C0u;
        goto label_1a58c0;
    }
    ctx->pc = 0x1A58B8u;
    SET_GPR_U32(ctx, 31, 0x1A58C0u);
    ctx->pc = 0x1A58BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A58B8u;
    // 0x1a58bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1A58B8u, 0x1A58C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A58C0u;
label_1a58c0:
    // 0x1a58c0: 0x8e240620  lw          $a0, 0x620($s1)
    ctx->pc = 0x1a58c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
label_1a58c4:
    // 0x1a58c4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1a58c8:
    if (ctx->pc == 0x1A58C8u) {
        ctx->pc = 0x1A58CCu;
        goto label_1a58cc;
    }
    ctx->pc = 0x1A58C4u;
    {
        const bool branch_taken_0x1a58c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a58c4) {
            ctx->pc = 0x1A58D4u;
            goto label_1a58d4;
        }
    }
    ctx->pc = 0x1A58CCu;
label_1a58cc:
    // 0x1a58cc: 0xc07f59a  jal         func_1FD668
label_1a58d0:
    if (ctx->pc == 0x1A58D0u) {
        ctx->pc = 0x1A58D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58CCu;
        // 0x1a58d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A58D4u;
        goto label_1a58d4;
    }
    ctx->pc = 0x1A58CCu;
    SET_GPR_U32(ctx, 31, 0x1A58D4u);
    ctx->pc = 0x1A58D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A58CCu;
    // 0x1a58d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1A58CCu, 0x1A58D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A58D4u;
label_1a58d4:
    // 0x1a58d4: 0xc06975a  jal         func_1A5D68
label_1a58d8:
    if (ctx->pc == 0x1A58D8u) {
        ctx->pc = 0x1A58D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58D4u;
        // 0x1a58d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A58DCu;
        goto label_1a58dc;
    }
    ctx->pc = 0x1A58D4u;
    SET_GPR_U32(ctx, 31, 0x1A58DCu);
    ctx->pc = 0x1A58D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A58D4u;
    // 0x1a58d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D68u, 0x1A58D4u, 0x1A58DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A58DCu;
label_1a58dc:
    // 0x1a58dc: 0xc06de42  jal         func_1B7908
label_1a58e0:
    if (ctx->pc == 0x1A58E0u) {
        ctx->pc = 0x1A58E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58DCu;
        // 0x1a58e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A58E4u;
        goto label_1a58e4;
    }
    ctx->pc = 0x1A58DCu;
    SET_GPR_U32(ctx, 31, 0x1A58E4u);
    ctx->pc = 0x1A58E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A58DCu;
    // 0x1a58e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x1A58DCu, 0x1A58E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A58E4u;
label_1a58e4:
    // 0x1a58e4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1a58e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1a58e8:
    // 0x1a58e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a58e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a58ec:
    // 0x1a58ec: 0xa6220628  sh          $v0, 0x628($s1)
    ctx->pc = 0x1a58ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1576), (uint16_t)GPR_U32(ctx, 2));
label_1a58f0:
    // 0x1a58f0: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x1a58f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
label_1a58f4:
    // 0x1a58f4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1a58f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1a58f8:
    // 0x1a58f8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1a58f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1a58fc:
    // 0x1a58fc: 0x96220628  lhu         $v0, 0x628($s1)
    ctx->pc = 0x1a58fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1576)));
label_1a5900:
    // 0x1a5900: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a5900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a5904:
    // 0x1a5904: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a5904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a5908:
    // 0x1a5908: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
label_1a590c:
    if (ctx->pc == 0x1A590Cu) {
        ctx->pc = 0x1A590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5908u;
        // 0x1a590c: 0xa6220628  sh          $v0, 0x628($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1576), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5910u;
        goto label_1a5910;
    }
    ctx->pc = 0x1A5908u;
    {
        const bool branch_taken_0x1a5908 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1A590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5908u;
        // 0x1a590c: 0xa6220628  sh          $v0, 0x628($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1576), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5908) {
            ctx->pc = 0x1A5974u;
            goto label_1a5974;
        }
    }
    ctx->pc = 0x1A5910u;
label_1a5910:
    // 0x1a5910: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1a5910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1a5914:
    // 0x1a5914: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a5914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a5918:
    // 0x1a5918: 0xa6220628  sh          $v0, 0x628($s1)
    ctx->pc = 0x1a5918u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1576), (uint16_t)GPR_U32(ctx, 2));
label_1a591c:
    // 0x1a591c: 0x10000013  b           . + 4 + (0x13 << 2)
label_1a5920:
    if (ctx->pc == 0x1A5920u) {
        ctx->pc = 0x1A5920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A591Cu;
        // 0x1a5920: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5924u;
        goto label_1a5924;
    }
    ctx->pc = 0x1A591Cu;
    {
        const bool branch_taken_0x1a591c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A591Cu;
        // 0x1a5920: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a591c) {
            ctx->pc = 0x1A596Cu;
            goto label_1a596c;
        }
    }
    ctx->pc = 0x1A5924u;
label_1a5924:
    // 0x1a5924: 0x96220628  lhu         $v0, 0x628($s1)
    ctx->pc = 0x1a5924u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1576)));
label_1a5928:
    // 0x1a5928: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1a5928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_1a592c:
    // 0x1a592c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a592cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a5930:
    // 0x1a5930: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a5930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a5934:
    // 0x1a5934: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a5934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a5938:
    // 0x1a5938: 0xa6220628  sh          $v0, 0x628($s1)
    ctx->pc = 0x1a5938u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1576), (uint16_t)GPR_U32(ctx, 2));
label_1a593c:
    // 0x1a593c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1a593cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_1a5940:
    // 0x1a5940: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a5940u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5944:
    // 0x1a5944: 0x0  nop
    ctx->pc = 0x1a5944u;
    // NOP
label_1a5948:
    // 0x1a5948: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a5948u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a594c:
    // 0x1a594c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1a594cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_1a5950:
    // 0x1a5950: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_1a5954:
    if (ctx->pc == 0x1A5954u) {
        ctx->pc = 0x1A5954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5950u;
        // 0x1a5954: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5958u;
        goto label_1a5958;
    }
    ctx->pc = 0x1A5950u;
    {
        const bool branch_taken_0x1a5950 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1A5954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5950u;
        // 0x1a5954: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5950) {
            ctx->pc = 0x1A5974u;
            goto label_1a5974;
        }
    }
    ctx->pc = 0x1A5958u;
label_1a5958:
    // 0x1a5958: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a5958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a595c:
    // 0x1a595c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1a595cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1a5960:
    // 0x1a5960: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a5964:
    if (ctx->pc == 0x1A5964u) {
        ctx->pc = 0x1A5964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5960u;
        // 0x1a5964: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5968u;
        goto label_1a5968;
    }
    ctx->pc = 0x1A5960u;
    {
        const bool branch_taken_0x1a5960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5960u;
        // 0x1a5964: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5960) {
            ctx->pc = 0x1A5970u;
            goto label_1a5970;
        }
    }
    ctx->pc = 0x1A5968u;
label_1a5968:
    // 0x1a5968: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1a5968u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_1a596c:
    // 0x1a596c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1a596cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1a5970:
    // 0x1a5970: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1a5970u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1a5974:
    // 0x1a5974: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1a5974u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_1a5978:
    // 0x1a5978: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1a5978u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a597c:
    // 0x1a597c: 0x10560053  beq         $v0, $s6, . + 4 + (0x53 << 2)
label_1a5980:
    if (ctx->pc == 0x1A5980u) {
        ctx->pc = 0x1A5980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A597Cu;
        // 0x1a5980: 0x27be0030  addiu       $fp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5984u;
        goto label_1a5984;
    }
    ctx->pc = 0x1A597Cu;
    {
        const bool branch_taken_0x1a597c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x1A5980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A597Cu;
        // 0x1a5980: 0x27be0030  addiu       $fp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a597c) {
            ctx->pc = 0x1A5ACCu;
            goto label_1a5acc;
        }
    }
    ctx->pc = 0x1A5984u;
label_1a5984:
    // 0x1a5984: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x1a5984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_1a5988:
    // 0x1a5988: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1a5988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1a598c:
    // 0x1a598c: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x1a598cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a5990:
    // 0x1a5990: 0x263506d0  addiu       $s5, $s1, 0x6D0
    ctx->pc = 0x1a5990u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
label_1a5994:
    // 0x1a5994: 0x263006a0  addiu       $s0, $s1, 0x6A0
    ctx->pc = 0x1a5994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1696));
label_1a5998:
    // 0x1a5998: 0x263406c0  addiu       $s4, $s1, 0x6C0
    ctx->pc = 0x1a5998u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1728));
label_1a599c:
    // 0x1a599c: 0x263306b0  addiu       $s3, $s1, 0x6B0
    ctx->pc = 0x1a599cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1712));
label_1a59a0:
    // 0x1a59a0: 0x26320690  addiu       $s2, $s1, 0x690
    ctx->pc = 0x1a59a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1680));
label_1a59a4:
    // 0x1a59a4: 0x0  nop
    ctx->pc = 0x1a59a4u;
    // NOP
label_1a59a8:
    // 0x1a59a8: 0xc05ce40  jal         func_173900
label_1a59ac:
    if (ctx->pc == 0x1A59ACu) {
        ctx->pc = 0x1A59ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A59A8u;
        // 0x1a59ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A59B0u;
        goto label_1a59b0;
    }
    ctx->pc = 0x1A59A8u;
    SET_GPR_U32(ctx, 31, 0x1A59B0u);
    ctx->pc = 0x1A59ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A59A8u;
    // 0x1a59ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x1A59A8u, 0x1A59B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A59B0u;
label_1a59b0:
    // 0x1a59b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a59b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a59b4:
    // 0x1a59b4: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_1a59b8:
    if (ctx->pc == 0x1A59B8u) {
        ctx->pc = 0x1A59B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A59B4u;
        // 0x1a59b8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A59BCu;
        goto label_1a59bc;
    }
    ctx->pc = 0x1A59B4u;
    {
        const bool branch_taken_0x1a59b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a59b4) {
            ctx->pc = 0x1A59B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A59B4u;
            // 0x1a59b8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5AA4u;
            goto label_1a5aa4;
        }
    }
    ctx->pc = 0x1A59BCu;
label_1a59bc:
    // 0x1a59bc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x1a59bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_1a59c0:
    // 0x1a59c0: 0xc0a4bd4  jal         func_292F50
label_1a59c4:
    if (ctx->pc == 0x1A59C4u) {
        ctx->pc = 0x1A59C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A59C0u;
        // 0x1a59c4: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A59C8u;
        goto label_1a59c8;
    }
    ctx->pc = 0x1A59C0u;
    SET_GPR_U32(ctx, 31, 0x1A59C8u);
    ctx->pc = 0x1A59C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A59C0u;
    // 0x1a59c4: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1A59C0u, 0x1A59C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A59C8u;
label_1a59c8:
    // 0x1a59c8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1a59c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1a59cc:
    // 0x1a59cc: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1a59ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1a59d0:
    // 0x1a59d0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a59d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a59d4:
    // 0x1a59d4: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a59d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a59d8:
    // 0x1a59d8: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1a59d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1a59dc:
    // 0x1a59dc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1a59dcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1a59e0:
    // 0x1a59e0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1a59e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1a59e4:
    // 0x1a59e4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a59e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a59e8:
    // 0x1a59e8: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1a59e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1a59ec:
    // 0x1a59ec: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1a59ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a59f0:
    // 0x1a59f0: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x1a59f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_1a59f4:
    // 0x1a59f4: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1a59f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1a59f8:
    // 0x1a59f8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1a59f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1a59fc:
    // 0x1a59fc: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x1a59fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a5a00:
    // 0x1a5a00: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1a5a00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1a5a04:
    // 0x1a5a04: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a5a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a5a08:
    // 0x1a5a08: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a5a08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a5a0c:
    // 0x1a5a0c: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1a5a0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1a5a10:
    // 0x1a5a10: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1a5a10u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1a5a14:
    // 0x1a5a14: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1a5a14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1a5a18:
    // 0x1a5a18: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a5a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a5a1c:
    // 0x1a5a1c: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1a5a1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1a5a20:
    // 0x1a5a20: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1a5a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a5a24:
    // 0x1a5a24: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1a5a24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5a28:
    // 0x1a5a28: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1a5a28u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1a5a2c:
    // 0x1a5a2c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1a5a2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1a5a30:
    // 0x1a5a30: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1a5a30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a5a34:
    // 0x1a5a34: 0xc07df68  jal         func_1F7DA0
label_1a5a38:
    if (ctx->pc == 0x1A5A38u) {
        ctx->pc = 0x1A5A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A34u;
        // 0x1a5a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5A3Cu;
        goto label_1a5a3c;
    }
    ctx->pc = 0x1A5A34u;
    SET_GPR_U32(ctx, 31, 0x1A5A3Cu);
    ctx->pc = 0x1A5A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5A34u;
    // 0x1a5a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x1A5A34u, 0x1A5A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5A3Cu;
label_1a5a3c:
    // 0x1a5a3c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a5a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a5a40:
    // 0x1a5a40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a5a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5a44:
    // 0x1a5a44: 0xc051dca  jal         func_147728
label_1a5a48:
    if (ctx->pc == 0x1A5A48u) {
        ctx->pc = 0x1A5A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A44u;
        // 0x1a5a48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5A4Cu;
        goto label_1a5a4c;
    }
    ctx->pc = 0x1A5A44u;
    SET_GPR_U32(ctx, 31, 0x1A5A4Cu);
    ctx->pc = 0x1A5A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5A44u;
    // 0x1a5a48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x1A5A44u, 0x1A5A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5A4Cu;
label_1a5a4c:
    // 0x1a5a4c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a5a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a5a50:
    // 0x1a5a50: 0xc051f10  jal         func_147C40
label_1a5a54:
    if (ctx->pc == 0x1A5A54u) {
        ctx->pc = 0x1A5A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A50u;
        // 0x1a5a54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5A58u;
        goto label_1a5a58;
    }
    ctx->pc = 0x1A5A50u;
    SET_GPR_U32(ctx, 31, 0x1A5A58u);
    ctx->pc = 0x1A5A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5A50u;
    // 0x1a5a54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x1A5A50u, 0x1A5A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5A58u;
label_1a5a58:
    // 0x1a5a58: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a5a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a5a5c:
    // 0x1a5a5c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1a5a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a5a60:
    // 0x1a5a60: 0xc051efe  jal         func_147BF8
label_1a5a64:
    if (ctx->pc == 0x1A5A64u) {
        ctx->pc = 0x1A5A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A60u;
        // 0x1a5a64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5A68u;
        goto label_1a5a68;
    }
    ctx->pc = 0x1A5A60u;
    SET_GPR_U32(ctx, 31, 0x1A5A68u);
    ctx->pc = 0x1A5A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5A60u;
    // 0x1a5a64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x1A5A60u, 0x1A5A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5A68u;
label_1a5a68:
    // 0x1a5a68: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1a5a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1a5a6c:
    // 0x1a5a6c: 0xc051d4a  jal         func_147528
label_1a5a70:
    if (ctx->pc == 0x1A5A70u) {
        ctx->pc = 0x1A5A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A6Cu;
        // 0x1a5a70: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5A74u;
        goto label_1a5a74;
    }
    ctx->pc = 0x1A5A6Cu;
    SET_GPR_U32(ctx, 31, 0x1A5A74u);
    ctx->pc = 0x1A5A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5A6Cu;
    // 0x1a5a70: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x1A5A6Cu, 0x1A5A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5A74u;
label_1a5a74:
    // 0x1a5a74: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x1a5a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5a78:
    // 0x1a5a78: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1a5a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5a7c:
    // 0x1a5a7c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a5a7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1a5a80:
    // 0x1a5a80: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a5a80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a5a84:
    // 0x1a5a84: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x1a5a84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a5a88:
    // 0x1a5a88: 0x0  nop
    ctx->pc = 0x1a5a88u;
    // NOP
label_1a5a8c:
    // 0x1a5a8c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1a5a90:
    if (ctx->pc == 0x1A5A90u) {
        ctx->pc = 0x1A5A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A8Cu;
        // 0x1a5a90: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5A94u;
        goto label_1a5a94;
    }
    ctx->pc = 0x1A5A8Cu;
    {
        const bool branch_taken_0x1a5a8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A5A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A8Cu;
        // 0x1a5a90: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a8c) {
            ctx->pc = 0x1A5AA0u;
            goto label_1a5aa0;
        }
    }
    ctx->pc = 0x1A5A94u;
label_1a5a94:
    // 0x1a5a94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a5a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a5a98:
    // 0x1a5a98: 0xc05bd90  jal         func_16F640
label_1a5a9c:
    if (ctx->pc == 0x1A5A9Cu) {
        ctx->pc = 0x1A5A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A98u;
        // 0x1a5a9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5AA0u;
        goto label_1a5aa0;
    }
    ctx->pc = 0x1A5A98u;
    SET_GPR_U32(ctx, 31, 0x1A5AA0u);
    ctx->pc = 0x1A5A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5A98u;
    // 0x1a5a9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1A5A98u, 0x1A5AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5AA0u;
label_1a5aa0:
    // 0x1a5aa0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1a5aa0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1a5aa4:
    // 0x1a5aa4: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x1a5aa4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_1a5aa8:
    // 0x1a5aa8: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x1a5aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1a5aac:
    // 0x1a5aac: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x1a5aacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_1a5ab0:
    // 0x1a5ab0: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x1a5ab0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_1a5ab4:
    // 0x1a5ab4: 0x2ac20007  slti        $v0, $s6, 0x7
    ctx->pc = 0x1a5ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)7) ? 1 : 0);
label_1a5ab8:
    // 0x1a5ab8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a5abc:
    if (ctx->pc == 0x1A5ABCu) {
        ctx->pc = 0x1A5ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AB8u;
        // 0x1a5abc: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5AC0u;
        goto label_1a5ac0;
    }
    ctx->pc = 0x1A5AB8u;
    {
        const bool branch_taken_0x1a5ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AB8u;
        // 0x1a5abc: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ab8) {
            ctx->pc = 0x1A5ACCu;
            goto label_1a5acc;
        }
    }
    ctx->pc = 0x1A5AC0u;
label_1a5ac0:
    // 0x1a5ac0: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1a5ac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_1a5ac4:
    // 0x1a5ac4: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_1a5ac8:
    if (ctx->pc == 0x1A5AC8u) {
        ctx->pc = 0x1A5ACCu;
        goto label_1a5acc;
    }
    ctx->pc = 0x1A5AC4u;
    {
        const bool branch_taken_0x1a5ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x1a5ac4) {
            ctx->pc = 0x1A59A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a59a8;
        }
    }
    ctx->pc = 0x1A5ACCu;
label_1a5acc:
    // 0x1a5acc: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x1a5accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1a5ad0:
    // 0x1a5ad0: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x1a5ad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1a5ad4:
    // 0x1a5ad4: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x1a5ad4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1a5ad8:
    // 0x1a5ad8: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x1a5ad8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1a5adc:
    // 0x1a5adc: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x1a5adcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1a5ae0:
    // 0x1a5ae0: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x1a5ae0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1a5ae4:
    // 0x1a5ae4: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x1a5ae4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1a5ae8:
    // 0x1a5ae8: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1a5ae8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1a5aec:
    // 0x1a5aec: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1a5aecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1a5af0:
    // 0x1a5af0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1a5af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a5af4:
    // 0x1a5af4: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x1a5af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a5af8:
    // 0x1a5af8: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x1a5af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a5afc:
    // 0x1a5afc: 0x3e00008  jr          $ra
label_1a5b00:
    if (ctx->pc == 0x1A5B00u) {
        ctx->pc = 0x1A5B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AFCu;
        // 0x1a5b00: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B04u;
        goto label_1a5b04;
    }
    ctx->pc = 0x1A5AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AFCu;
        // 0x1a5b00: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5B04u;
label_1a5b04:
    // 0x1a5b04: 0x0  nop
    ctx->pc = 0x1a5b04u;
    // NOP
    ctx->pc = 0x1a5b08u;
}
