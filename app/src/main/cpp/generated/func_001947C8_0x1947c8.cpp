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

// Function: func_001947C8
// Address: 0x1947c8 - 0x194cb0
void func_001947C8_0x1947c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001947C8_0x1947c8");
#endif

    switch (ctx->pc) {
        case 0x1947c8u: goto label_1947c8;
        case 0x1947ccu: goto label_1947cc;
        case 0x1947d0u: goto label_1947d0;
        case 0x1947d4u: goto label_1947d4;
        case 0x1947d8u: goto label_1947d8;
        case 0x1947dcu: goto label_1947dc;
        case 0x1947e0u: goto label_1947e0;
        case 0x1947e4u: goto label_1947e4;
        case 0x1947e8u: goto label_1947e8;
        case 0x1947ecu: goto label_1947ec;
        case 0x1947f0u: goto label_1947f0;
        case 0x1947f4u: goto label_1947f4;
        case 0x1947f8u: goto label_1947f8;
        case 0x1947fcu: goto label_1947fc;
        case 0x194800u: goto label_194800;
        case 0x194804u: goto label_194804;
        case 0x194808u: goto label_194808;
        case 0x19480cu: goto label_19480c;
        case 0x194810u: goto label_194810;
        case 0x194814u: goto label_194814;
        case 0x194818u: goto label_194818;
        case 0x19481cu: goto label_19481c;
        case 0x194820u: goto label_194820;
        case 0x194824u: goto label_194824;
        case 0x194828u: goto label_194828;
        case 0x19482cu: goto label_19482c;
        case 0x194830u: goto label_194830;
        case 0x194834u: goto label_194834;
        case 0x194838u: goto label_194838;
        case 0x19483cu: goto label_19483c;
        case 0x194840u: goto label_194840;
        case 0x194844u: goto label_194844;
        case 0x194848u: goto label_194848;
        case 0x19484cu: goto label_19484c;
        case 0x194850u: goto label_194850;
        case 0x194854u: goto label_194854;
        case 0x194858u: goto label_194858;
        case 0x19485cu: goto label_19485c;
        case 0x194860u: goto label_194860;
        case 0x194864u: goto label_194864;
        case 0x194868u: goto label_194868;
        case 0x19486cu: goto label_19486c;
        case 0x194870u: goto label_194870;
        case 0x194874u: goto label_194874;
        case 0x194878u: goto label_194878;
        case 0x19487cu: goto label_19487c;
        case 0x194880u: goto label_194880;
        case 0x194884u: goto label_194884;
        case 0x194888u: goto label_194888;
        case 0x19488cu: goto label_19488c;
        case 0x194890u: goto label_194890;
        case 0x194894u: goto label_194894;
        case 0x194898u: goto label_194898;
        case 0x19489cu: goto label_19489c;
        case 0x1948a0u: goto label_1948a0;
        case 0x1948a4u: goto label_1948a4;
        case 0x1948a8u: goto label_1948a8;
        case 0x1948acu: goto label_1948ac;
        case 0x1948b0u: goto label_1948b0;
        case 0x1948b4u: goto label_1948b4;
        case 0x1948b8u: goto label_1948b8;
        case 0x1948bcu: goto label_1948bc;
        case 0x1948c0u: goto label_1948c0;
        case 0x1948c4u: goto label_1948c4;
        case 0x1948c8u: goto label_1948c8;
        case 0x1948ccu: goto label_1948cc;
        case 0x1948d0u: goto label_1948d0;
        case 0x1948d4u: goto label_1948d4;
        case 0x1948d8u: goto label_1948d8;
        case 0x1948dcu: goto label_1948dc;
        case 0x1948e0u: goto label_1948e0;
        case 0x1948e4u: goto label_1948e4;
        case 0x1948e8u: goto label_1948e8;
        case 0x1948ecu: goto label_1948ec;
        case 0x1948f0u: goto label_1948f0;
        case 0x1948f4u: goto label_1948f4;
        case 0x1948f8u: goto label_1948f8;
        case 0x1948fcu: goto label_1948fc;
        case 0x194900u: goto label_194900;
        case 0x194904u: goto label_194904;
        case 0x194908u: goto label_194908;
        case 0x19490cu: goto label_19490c;
        case 0x194910u: goto label_194910;
        case 0x194914u: goto label_194914;
        case 0x194918u: goto label_194918;
        case 0x19491cu: goto label_19491c;
        case 0x194920u: goto label_194920;
        case 0x194924u: goto label_194924;
        case 0x194928u: goto label_194928;
        case 0x19492cu: goto label_19492c;
        case 0x194930u: goto label_194930;
        case 0x194934u: goto label_194934;
        case 0x194938u: goto label_194938;
        case 0x19493cu: goto label_19493c;
        case 0x194940u: goto label_194940;
        case 0x194944u: goto label_194944;
        case 0x194948u: goto label_194948;
        case 0x19494cu: goto label_19494c;
        case 0x194950u: goto label_194950;
        case 0x194954u: goto label_194954;
        case 0x194958u: goto label_194958;
        case 0x19495cu: goto label_19495c;
        case 0x194960u: goto label_194960;
        case 0x194964u: goto label_194964;
        case 0x194968u: goto label_194968;
        case 0x19496cu: goto label_19496c;
        case 0x194970u: goto label_194970;
        case 0x194974u: goto label_194974;
        case 0x194978u: goto label_194978;
        case 0x19497cu: goto label_19497c;
        case 0x194980u: goto label_194980;
        case 0x194984u: goto label_194984;
        case 0x194988u: goto label_194988;
        case 0x19498cu: goto label_19498c;
        case 0x194990u: goto label_194990;
        case 0x194994u: goto label_194994;
        case 0x194998u: goto label_194998;
        case 0x19499cu: goto label_19499c;
        case 0x1949a0u: goto label_1949a0;
        case 0x1949a4u: goto label_1949a4;
        case 0x1949a8u: goto label_1949a8;
        case 0x1949acu: goto label_1949ac;
        case 0x1949b0u: goto label_1949b0;
        case 0x1949b4u: goto label_1949b4;
        case 0x1949b8u: goto label_1949b8;
        case 0x1949bcu: goto label_1949bc;
        case 0x1949c0u: goto label_1949c0;
        case 0x1949c4u: goto label_1949c4;
        case 0x1949c8u: goto label_1949c8;
        case 0x1949ccu: goto label_1949cc;
        case 0x1949d0u: goto label_1949d0;
        case 0x1949d4u: goto label_1949d4;
        case 0x1949d8u: goto label_1949d8;
        case 0x1949dcu: goto label_1949dc;
        case 0x1949e0u: goto label_1949e0;
        case 0x1949e4u: goto label_1949e4;
        case 0x1949e8u: goto label_1949e8;
        case 0x1949ecu: goto label_1949ec;
        case 0x1949f0u: goto label_1949f0;
        case 0x1949f4u: goto label_1949f4;
        case 0x1949f8u: goto label_1949f8;
        case 0x1949fcu: goto label_1949fc;
        case 0x194a00u: goto label_194a00;
        case 0x194a04u: goto label_194a04;
        case 0x194a08u: goto label_194a08;
        case 0x194a0cu: goto label_194a0c;
        case 0x194a10u: goto label_194a10;
        case 0x194a14u: goto label_194a14;
        case 0x194a18u: goto label_194a18;
        case 0x194a1cu: goto label_194a1c;
        case 0x194a20u: goto label_194a20;
        case 0x194a24u: goto label_194a24;
        case 0x194a28u: goto label_194a28;
        case 0x194a2cu: goto label_194a2c;
        case 0x194a30u: goto label_194a30;
        case 0x194a34u: goto label_194a34;
        case 0x194a38u: goto label_194a38;
        case 0x194a3cu: goto label_194a3c;
        case 0x194a40u: goto label_194a40;
        case 0x194a44u: goto label_194a44;
        case 0x194a48u: goto label_194a48;
        case 0x194a4cu: goto label_194a4c;
        case 0x194a50u: goto label_194a50;
        case 0x194a54u: goto label_194a54;
        case 0x194a58u: goto label_194a58;
        case 0x194a5cu: goto label_194a5c;
        case 0x194a60u: goto label_194a60;
        case 0x194a64u: goto label_194a64;
        case 0x194a68u: goto label_194a68;
        case 0x194a6cu: goto label_194a6c;
        case 0x194a70u: goto label_194a70;
        case 0x194a74u: goto label_194a74;
        case 0x194a78u: goto label_194a78;
        case 0x194a7cu: goto label_194a7c;
        case 0x194a80u: goto label_194a80;
        case 0x194a84u: goto label_194a84;
        case 0x194a88u: goto label_194a88;
        case 0x194a8cu: goto label_194a8c;
        case 0x194a90u: goto label_194a90;
        case 0x194a94u: goto label_194a94;
        case 0x194a98u: goto label_194a98;
        case 0x194a9cu: goto label_194a9c;
        case 0x194aa0u: goto label_194aa0;
        case 0x194aa4u: goto label_194aa4;
        case 0x194aa8u: goto label_194aa8;
        case 0x194aacu: goto label_194aac;
        case 0x194ab0u: goto label_194ab0;
        case 0x194ab4u: goto label_194ab4;
        case 0x194ab8u: goto label_194ab8;
        case 0x194abcu: goto label_194abc;
        case 0x194ac0u: goto label_194ac0;
        case 0x194ac4u: goto label_194ac4;
        case 0x194ac8u: goto label_194ac8;
        case 0x194accu: goto label_194acc;
        case 0x194ad0u: goto label_194ad0;
        case 0x194ad4u: goto label_194ad4;
        case 0x194ad8u: goto label_194ad8;
        case 0x194adcu: goto label_194adc;
        case 0x194ae0u: goto label_194ae0;
        case 0x194ae4u: goto label_194ae4;
        case 0x194ae8u: goto label_194ae8;
        case 0x194aecu: goto label_194aec;
        case 0x194af0u: goto label_194af0;
        case 0x194af4u: goto label_194af4;
        case 0x194af8u: goto label_194af8;
        case 0x194afcu: goto label_194afc;
        case 0x194b00u: goto label_194b00;
        case 0x194b04u: goto label_194b04;
        case 0x194b08u: goto label_194b08;
        case 0x194b0cu: goto label_194b0c;
        case 0x194b10u: goto label_194b10;
        case 0x194b14u: goto label_194b14;
        case 0x194b18u: goto label_194b18;
        case 0x194b1cu: goto label_194b1c;
        case 0x194b20u: goto label_194b20;
        case 0x194b24u: goto label_194b24;
        case 0x194b28u: goto label_194b28;
        case 0x194b2cu: goto label_194b2c;
        case 0x194b30u: goto label_194b30;
        case 0x194b34u: goto label_194b34;
        case 0x194b38u: goto label_194b38;
        case 0x194b3cu: goto label_194b3c;
        case 0x194b40u: goto label_194b40;
        case 0x194b44u: goto label_194b44;
        case 0x194b48u: goto label_194b48;
        case 0x194b4cu: goto label_194b4c;
        case 0x194b50u: goto label_194b50;
        case 0x194b54u: goto label_194b54;
        case 0x194b58u: goto label_194b58;
        case 0x194b5cu: goto label_194b5c;
        case 0x194b60u: goto label_194b60;
        case 0x194b64u: goto label_194b64;
        case 0x194b68u: goto label_194b68;
        case 0x194b6cu: goto label_194b6c;
        case 0x194b70u: goto label_194b70;
        case 0x194b74u: goto label_194b74;
        case 0x194b78u: goto label_194b78;
        case 0x194b7cu: goto label_194b7c;
        case 0x194b80u: goto label_194b80;
        case 0x194b84u: goto label_194b84;
        case 0x194b88u: goto label_194b88;
        case 0x194b8cu: goto label_194b8c;
        case 0x194b90u: goto label_194b90;
        case 0x194b94u: goto label_194b94;
        case 0x194b98u: goto label_194b98;
        case 0x194b9cu: goto label_194b9c;
        case 0x194ba0u: goto label_194ba0;
        case 0x194ba4u: goto label_194ba4;
        case 0x194ba8u: goto label_194ba8;
        case 0x194bacu: goto label_194bac;
        case 0x194bb0u: goto label_194bb0;
        case 0x194bb4u: goto label_194bb4;
        case 0x194bb8u: goto label_194bb8;
        case 0x194bbcu: goto label_194bbc;
        case 0x194bc0u: goto label_194bc0;
        case 0x194bc4u: goto label_194bc4;
        case 0x194bc8u: goto label_194bc8;
        case 0x194bccu: goto label_194bcc;
        case 0x194bd0u: goto label_194bd0;
        case 0x194bd4u: goto label_194bd4;
        case 0x194bd8u: goto label_194bd8;
        case 0x194bdcu: goto label_194bdc;
        case 0x194be0u: goto label_194be0;
        case 0x194be4u: goto label_194be4;
        case 0x194be8u: goto label_194be8;
        case 0x194becu: goto label_194bec;
        case 0x194bf0u: goto label_194bf0;
        case 0x194bf4u: goto label_194bf4;
        case 0x194bf8u: goto label_194bf8;
        case 0x194bfcu: goto label_194bfc;
        case 0x194c00u: goto label_194c00;
        case 0x194c04u: goto label_194c04;
        case 0x194c08u: goto label_194c08;
        case 0x194c0cu: goto label_194c0c;
        case 0x194c10u: goto label_194c10;
        case 0x194c14u: goto label_194c14;
        case 0x194c18u: goto label_194c18;
        case 0x194c1cu: goto label_194c1c;
        case 0x194c20u: goto label_194c20;
        case 0x194c24u: goto label_194c24;
        case 0x194c28u: goto label_194c28;
        case 0x194c2cu: goto label_194c2c;
        case 0x194c30u: goto label_194c30;
        case 0x194c34u: goto label_194c34;
        case 0x194c38u: goto label_194c38;
        case 0x194c3cu: goto label_194c3c;
        case 0x194c40u: goto label_194c40;
        case 0x194c44u: goto label_194c44;
        case 0x194c48u: goto label_194c48;
        case 0x194c4cu: goto label_194c4c;
        case 0x194c50u: goto label_194c50;
        case 0x194c54u: goto label_194c54;
        case 0x194c58u: goto label_194c58;
        case 0x194c5cu: goto label_194c5c;
        case 0x194c60u: goto label_194c60;
        case 0x194c64u: goto label_194c64;
        case 0x194c68u: goto label_194c68;
        case 0x194c6cu: goto label_194c6c;
        case 0x194c70u: goto label_194c70;
        case 0x194c74u: goto label_194c74;
        case 0x194c78u: goto label_194c78;
        case 0x194c7cu: goto label_194c7c;
        case 0x194c80u: goto label_194c80;
        case 0x194c84u: goto label_194c84;
        case 0x194c88u: goto label_194c88;
        case 0x194c8cu: goto label_194c8c;
        case 0x194c90u: goto label_194c90;
        case 0x194c94u: goto label_194c94;
        case 0x194c98u: goto label_194c98;
        case 0x194c9cu: goto label_194c9c;
        case 0x194ca0u: goto label_194ca0;
        case 0x194ca4u: goto label_194ca4;
        case 0x194ca8u: goto label_194ca8;
        case 0x194cacu: goto label_194cac;
        default: break;
    }

    ctx->pc = 0x1947c8u;

label_1947c8:
    // 0x1947c8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1947c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1947cc:
    // 0x1947cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1947ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1947d0:
    // 0x1947d0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1947d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1947d4:
    // 0x1947d4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1947d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1947d8:
    // 0x1947d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1947d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1947dc:
    // 0x1947dc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1947dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1947e0:
    // 0x1947e0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1947e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1947e4:
    // 0x1947e4: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1947e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1947e8:
    // 0x1947e8: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1947e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_1947ec:
    // 0x1947ec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1947ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1947f0:
    // 0x1947f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1947f4:
    if (ctx->pc == 0x1947F4u) {
        ctx->pc = 0x1947F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947F0u;
        // 0x1947f4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1947F8u;
        goto label_1947f8;
    }
    ctx->pc = 0x1947F0u;
    {
        const bool branch_taken_0x1947f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1947F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947F0u;
        // 0x1947f4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1947f0) {
            ctx->pc = 0x194804u;
            goto label_194804;
        }
    }
    ctx->pc = 0x1947F8u;
label_1947f8:
    // 0x1947f8: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1947f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_1947fc:
    // 0x1947fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_194800:
    if (ctx->pc == 0x194800u) {
        ctx->pc = 0x194800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947FCu;
        // 0x194800: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194804u;
        goto label_194804;
    }
    ctx->pc = 0x1947FCu;
    {
        const bool branch_taken_0x1947fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947FCu;
        // 0x194800: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1947fc) {
            ctx->pc = 0x194808u;
            goto label_194808;
        }
    }
    ctx->pc = 0x194804u;
label_194804:
    // 0x194804: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x194804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194808:
    // 0x194808: 0x10400121  beqz        $v0, . + 4 + (0x121 << 2)
label_19480c:
    if (ctx->pc == 0x19480Cu) {
        ctx->pc = 0x19480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194808u;
        // 0x19480c: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194810u;
        goto label_194810;
    }
    ctx->pc = 0x194808u;
    {
        const bool branch_taken_0x194808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194808u;
        // 0x19480c: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194808) {
            ctx->pc = 0x194C90u;
            goto label_194c90;
        }
    }
    ctx->pc = 0x194810u;
label_194810:
    // 0x194810: 0xc0a4bd4  jal         func_292F50
label_194814:
    if (ctx->pc == 0x194814u) {
        ctx->pc = 0x194814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194810u;
        // 0x194814: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194818u;
        goto label_194818;
    }
    ctx->pc = 0x194810u;
    SET_GPR_U32(ctx, 31, 0x194818u);
    ctx->pc = 0x194814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194810u;
    // 0x194814: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x194810u, 0x194818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194818u;
label_194818:
    // 0x194818: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x194818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_19481c:
    // 0x19481c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19481cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194820:
    // 0x194820: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x194820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
label_194824:
    // 0x194824: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x194824u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_194828:
    // 0x194828: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x194828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19482c:
    // 0x19482c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x19482cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_194830:
    // 0x194830: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x194830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_194834:
    // 0x194834: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_194838:
    if (ctx->pc == 0x194838u) {
        ctx->pc = 0x194838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194834u;
        // 0x194838: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19483Cu;
        goto label_19483c;
    }
    ctx->pc = 0x194834u;
    {
        const bool branch_taken_0x194834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194834u;
        // 0x194838: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194834) {
            ctx->pc = 0x194848u;
            goto label_194848;
        }
    }
    ctx->pc = 0x19483Cu;
label_19483c:
    // 0x19483c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x19483cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_194840:
    // 0x194840: 0x10000002  b           . + 4 + (0x2 << 2)
label_194844:
    if (ctx->pc == 0x194844u) {
        ctx->pc = 0x194844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194840u;
        // 0x194844: 0x8c520004  lw          $s2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194848u;
        goto label_194848;
    }
    ctx->pc = 0x194840u;
    {
        const bool branch_taken_0x194840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194840u;
        // 0x194844: 0x8c520004  lw          $s2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194840) {
            ctx->pc = 0x19484Cu;
            goto label_19484c;
        }
    }
    ctx->pc = 0x194848u;
label_194848:
    // 0x194848: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x194848u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19484c:
    // 0x19484c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x19484cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_194850:
    // 0x194850: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x194850u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_194854:
    // 0x194854: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x194854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_194858:
    // 0x194858: 0xc0b6dac  jal         func_2DB6B0
label_19485c:
    if (ctx->pc == 0x19485Cu) {
        ctx->pc = 0x194860u;
        goto label_194860;
    }
    ctx->pc = 0x194858u;
    SET_GPR_U32(ctx, 31, 0x194860u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x194858u, 0x194860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194860u;
label_194860:
    // 0x194860: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x194860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_194864:
    // 0x194864: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x194864u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_194868:
    // 0x194868: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x194868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_19486c:
    // 0x19486c: 0xa0f809  jalr        $a1
label_194870:
    if (ctx->pc == 0x194870u) {
        ctx->pc = 0x194870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19486Cu;
        // 0x194870: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194874u;
        goto label_194874;
    }
    ctx->pc = 0x19486Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x194874u);
        ctx->pc = 0x194870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19486Cu;
        // 0x194870: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19486Cu, 0x194874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194874u;
label_194874:
    // 0x194874: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x194874u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_194878:
    // 0x194878: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x194878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_19487c:
    // 0x19487c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19487cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_194880:
    // 0x194880: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x194880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_194884:
    // 0x194884: 0xc6200af8  lwc1        $f0, 0xAF8($s1)
    ctx->pc = 0x194884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_194888:
    // 0x194888: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x194888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19488c:
    // 0x19488c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x19488cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_194890:
    // 0x194890: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x194890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_194894:
    // 0x194894: 0x0  nop
    ctx->pc = 0x194894u;
    // NOP
label_194898:
    // 0x194898: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_19489c:
    if (ctx->pc == 0x19489Cu) {
        ctx->pc = 0x19489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194898u;
        // 0x19489c: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1948A0u;
        goto label_1948a0;
    }
    ctx->pc = 0x194898u;
    {
        const bool branch_taken_0x194898 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194898u;
        // 0x19489c: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194898) {
            ctx->pc = 0x1948ECu;
            goto label_1948ec;
        }
    }
    ctx->pc = 0x1948A0u;
label_1948a0:
    // 0x1948a0: 0xc6200afc  lwc1        $f0, 0xAFC($s1)
    ctx->pc = 0x1948a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1948a4:
    // 0x1948a4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1948a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1948a8:
    // 0x1948a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1948a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1948ac:
    // 0x1948ac: 0x0  nop
    ctx->pc = 0x1948acu;
    // NOP
label_1948b0:
    // 0x1948b0: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_1948b4:
    if (ctx->pc == 0x1948B4u) {
        ctx->pc = 0x1948B8u;
        goto label_1948b8;
    }
    ctx->pc = 0x1948B0u;
    {
        const bool branch_taken_0x1948b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1948b0) {
            ctx->pc = 0x1948ECu;
            goto label_1948ec;
        }
    }
    ctx->pc = 0x1948B8u;
label_1948b8:
    // 0x1948b8: 0xc6200b00  lwc1        $f0, 0xB00($s1)
    ctx->pc = 0x1948b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1948bc:
    // 0x1948bc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1948bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1948c0:
    // 0x1948c0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1948c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1948c4:
    // 0x1948c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1948c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1948c8:
    // 0x1948c8: 0x0  nop
    ctx->pc = 0x1948c8u;
    // NOP
label_1948cc:
    // 0x1948cc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_1948d0:
    if (ctx->pc == 0x1948D0u) {
        ctx->pc = 0x1948D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948CCu;
        // 0x1948d0: 0x26230b10  addiu       $v1, $s1, 0xB10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1948D4u;
        goto label_1948d4;
    }
    ctx->pc = 0x1948CCu;
    {
        const bool branch_taken_0x1948cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1948D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948CCu;
        // 0x1948d0: 0x26230b10  addiu       $v1, $s1, 0xB10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1948cc) {
            ctx->pc = 0x1948F0u;
            goto label_1948f0;
        }
    }
    ctx->pc = 0x1948D4u;
label_1948d4:
    // 0x1948d4: 0xc6200b04  lwc1        $f0, 0xB04($s1)
    ctx->pc = 0x1948d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1948d8:
    // 0x1948d8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1948d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1948dc:
    // 0x1948dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1948dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1948e0:
    // 0x1948e0: 0x0  nop
    ctx->pc = 0x1948e0u;
    // NOP
label_1948e4:
    // 0x1948e4: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_1948e8:
    if (ctx->pc == 0x1948E8u) {
        ctx->pc = 0x1948E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948E4u;
        // 0x1948e8: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1948ECu;
        goto label_1948ec;
    }
    ctx->pc = 0x1948E4u;
    {
        const bool branch_taken_0x1948e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1948e4) {
            ctx->pc = 0x1948E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1948E4u;
            // 0x1948e8: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194914u;
            goto label_194914;
        }
    }
    ctx->pc = 0x1948ECu;
label_1948ec:
    // 0x1948ec: 0x26230b10  addiu       $v1, $s1, 0xB10
    ctx->pc = 0x1948ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2832));
label_1948f0:
    // 0x1948f0: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
label_1948f4:
    if (ctx->pc == 0x1948F4u) {
        ctx->pc = 0x1948F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948F0u;
        // 0x1948f4: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1948F8u;
        goto label_1948f8;
    }
    ctx->pc = 0x1948F0u;
    {
        const bool branch_taken_0x1948f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1948f0) {
            ctx->pc = 0x1948F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1948F0u;
            // 0x1948f4: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194914u;
            goto label_194914;
        }
    }
    ctx->pc = 0x1948F8u;
label_1948f8:
    // 0x1948f8: 0xc6200b10  lwc1        $f0, 0xB10($s1)
    ctx->pc = 0x1948f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1948fc:
    // 0x1948fc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1948fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_194900:
    // 0x194900: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x194900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_194904:
    // 0x194904: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x194904u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_194908:
    // 0x194908: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x194908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19490c:
    // 0x19490c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x19490cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_194910:
    // 0x194910: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x194910u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_194914:
    // 0x194914: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194918:
    // 0x194918: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
label_19491c:
    if (ctx->pc == 0x19491Cu) {
        ctx->pc = 0x19491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194918u;
        // 0x19491c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x194920u;
        goto label_194920;
    }
    ctx->pc = 0x194918u;
    {
        const bool branch_taken_0x194918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194918u;
        // 0x19491c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194918) {
            ctx->pc = 0x1949B4u;
            goto label_1949b4;
        }
    }
    ctx->pc = 0x194920u;
label_194920:
    // 0x194920: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_194924:
    if (ctx->pc == 0x194924u) {
        ctx->pc = 0x194924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194920u;
        // 0x194924: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194928u;
        goto label_194928;
    }
    ctx->pc = 0x194920u;
    {
        const bool branch_taken_0x194920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194920) {
            ctx->pc = 0x194924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194920u;
            // 0x194924: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194938u;
            goto label_194938;
        }
    }
    ctx->pc = 0x194928u;
label_194928:
    // 0x194928: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_19492c:
    if (ctx->pc == 0x19492Cu) {
        ctx->pc = 0x19492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194928u;
        // 0x19492c: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194930u;
        goto label_194930;
    }
    ctx->pc = 0x194928u;
    {
        const bool branch_taken_0x194928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194928u;
        // 0x19492c: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194928) {
            ctx->pc = 0x194948u;
            goto label_194948;
        }
    }
    ctx->pc = 0x194930u;
label_194930:
    // 0x194930: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_194934:
    if (ctx->pc == 0x194934u) {
        ctx->pc = 0x194934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194930u;
        // 0x194934: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x194938u;
        goto label_194938;
    }
    ctx->pc = 0x194930u;
    {
        const bool branch_taken_0x194930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194930u;
        // 0x194934: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194930) {
            ctx->pc = 0x194C04u;
            goto label_194c04;
        }
    }
    ctx->pc = 0x194938u;
label_194938:
    // 0x194938: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
label_19493c:
    if (ctx->pc == 0x19493Cu) {
        ctx->pc = 0x19493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194938u;
        // 0x19493c: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194940u;
        goto label_194940;
    }
    ctx->pc = 0x194938u;
    {
        const bool branch_taken_0x194938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194938u;
        // 0x19493c: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194938) {
            ctx->pc = 0x1949E0u;
            goto label_1949e0;
        }
    }
    ctx->pc = 0x194940u;
label_194940:
    // 0x194940: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_194944:
    if (ctx->pc == 0x194944u) {
        ctx->pc = 0x194944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194940u;
        // 0x194944: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x194948u;
        goto label_194948;
    }
    ctx->pc = 0x194940u;
    {
        const bool branch_taken_0x194940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194940u;
        // 0x194944: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194940) {
            ctx->pc = 0x194C04u;
            goto label_194c04;
        }
    }
    ctx->pc = 0x194948u;
label_194948:
    // 0x194948: 0x8e220b20  lw          $v0, 0xB20($s1)
    ctx->pc = 0x194948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2848)));
label_19494c:
    // 0x19494c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_194950:
    if (ctx->pc == 0x194950u) {
        ctx->pc = 0x194950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19494Cu;
        // 0x194950: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194954u;
        goto label_194954;
    }
    ctx->pc = 0x19494Cu;
    {
        const bool branch_taken_0x19494c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19494Cu;
        // 0x194950: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19494c) {
            ctx->pc = 0x1949A4u;
            goto label_1949a4;
        }
    }
    ctx->pc = 0x194954u;
label_194954:
    // 0x194954: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x194954u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_194958:
    // 0x194958: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19495c:
    // 0x19495c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x19495cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_194960:
    // 0x194960: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_194964:
    if (ctx->pc == 0x194964u) {
        ctx->pc = 0x194964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194960u;
        // 0x194964: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194968u;
        goto label_194968;
    }
    ctx->pc = 0x194960u;
    {
        const bool branch_taken_0x194960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194960u;
        // 0x194964: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194960) {
            ctx->pc = 0x194974u;
            goto label_194974;
        }
    }
    ctx->pc = 0x194968u;
label_194968:
    // 0x194968: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x194968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_19496c:
    // 0x19496c: 0x10000002  b           . + 4 + (0x2 << 2)
label_194970:
    if (ctx->pc == 0x194970u) {
        ctx->pc = 0x194970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19496Cu;
        // 0x194970: 0x8c490004  lw          $t1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194974u;
        goto label_194974;
    }
    ctx->pc = 0x19496Cu;
    {
        const bool branch_taken_0x19496c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19496Cu;
        // 0x194970: 0x8c490004  lw          $t1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19496c) {
            ctx->pc = 0x194978u;
            goto label_194978;
        }
    }
    ctx->pc = 0x194974u;
label_194974:
    // 0x194974: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x194974u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194978:
    // 0x194978: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x194978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_19497c:
    // 0x19497c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19497cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_194980:
    // 0x194980: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x194980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_194984:
    // 0x194984: 0x240600b5  addiu       $a2, $zero, 0xB5
    ctx->pc = 0x194984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
label_194988:
    // 0x194988: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x194988u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19498c:
    // 0x19498c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19498cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194990:
    // 0x194990: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x194990u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194994:
    // 0x194994: 0xc0b2e92  jal         func_2CBA48
label_194998:
    if (ctx->pc == 0x194998u) {
        ctx->pc = 0x194998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194994u;
        // 0x194998: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19499Cu;
        goto label_19499c;
    }
    ctx->pc = 0x194994u;
    SET_GPR_U32(ctx, 31, 0x19499Cu);
    ctx->pc = 0x194998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194994u;
    // 0x194998: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x194994u, 0x19499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19499Cu;
label_19499c:
    // 0x19499c: 0xae220b20  sw          $v0, 0xB20($s1)
    ctx->pc = 0x19499cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2848), GPR_U32(ctx, 2));
label_1949a0:
    // 0x1949a0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1949a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1949a4:
    // 0x1949a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1949a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1949a8:
    // 0x1949a8: 0xa6220af0  sh          $v0, 0xAF0($s1)
    ctx->pc = 0x1949a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2800), (uint16_t)GPR_U32(ctx, 2));
label_1949ac:
    // 0x1949ac: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x1949acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_1949b0:
    // 0x1949b0: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1949b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1949b4:
    // 0x1949b4: 0x96220af0  lhu         $v0, 0xAF0($s1)
    ctx->pc = 0x1949b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2800)));
label_1949b8:
    // 0x1949b8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1949b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1949bc:
    // 0x1949bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1949bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1949c0:
    // 0x1949c0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1949c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1949c4:
    // 0x1949c4: 0x461008e  bgez        $v1, . + 4 + (0x8E << 2)
label_1949c8:
    if (ctx->pc == 0x1949C8u) {
        ctx->pc = 0x1949C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949C4u;
        // 0x1949c8: 0xa6220af0  sh          $v0, 0xAF0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2800), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1949CCu;
        goto label_1949cc;
    }
    ctx->pc = 0x1949C4u;
    {
        const bool branch_taken_0x1949c4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1949C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949C4u;
        // 0x1949c8: 0xa6220af0  sh          $v0, 0xAF0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2800), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1949c4) {
            ctx->pc = 0x194C00u;
            goto label_194c00;
        }
    }
    ctx->pc = 0x1949CCu;
label_1949cc:
    // 0x1949cc: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1949ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1949d0:
    // 0x1949d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1949d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1949d4:
    // 0x1949d4: 0xa6220af0  sh          $v0, 0xAF0($s1)
    ctx->pc = 0x1949d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2800), (uint16_t)GPR_U32(ctx, 2));
label_1949d8:
    // 0x1949d8: 0x10000088  b           . + 4 + (0x88 << 2)
label_1949dc:
    if (ctx->pc == 0x1949DCu) {
        ctx->pc = 0x1949DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949D8u;
        // 0x1949dc: 0xa22302f6  sb          $v1, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1949E0u;
        goto label_1949e0;
    }
    ctx->pc = 0x1949D8u;
    {
        const bool branch_taken_0x1949d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1949DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949D8u;
        // 0x1949dc: 0xa22302f6  sb          $v1, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1949d8) {
            ctx->pc = 0x194BFCu;
            goto label_194bfc;
        }
    }
    ctx->pc = 0x1949E0u;
label_1949e0:
    // 0x1949e0: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1949e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1949e4:
    // 0x1949e4: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x1949e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1949e8:
    // 0x1949e8: 0x3c013efa  lui         $at, 0x3EFA
    ctx->pc = 0x1949e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16122 << 16));
label_1949ec:
    // 0x1949ec: 0x3421e147  ori         $at, $at, 0xE147
    ctx->pc = 0x1949ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57671);
label_1949f0:
    // 0x1949f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1949f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1949f4:
    // 0x1949f4: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x1949f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1949f8:
    // 0x1949f8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1949f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1949fc:
    // 0x1949fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1949fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_194a00:
    // 0x194a00: 0x0  nop
    ctx->pc = 0x194a00u;
    // NOP
label_194a04:
    // 0x194a04: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_194a08:
    if (ctx->pc == 0x194A08u) {
        ctx->pc = 0x194A0Cu;
        goto label_194a0c;
    }
    ctx->pc = 0x194A04u;
    {
        const bool branch_taken_0x194a04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x194a04) {
            ctx->pc = 0x194A44u;
            goto label_194a44;
        }
    }
    ctx->pc = 0x194A0Cu;
label_194a0c:
    // 0x194a0c: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x194a0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_194a10:
    // 0x194a10: 0x0  nop
    ctx->pc = 0x194a10u;
    // NOP
label_194a14:
    // 0x194a14: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_194a18:
    if (ctx->pc == 0x194A18u) {
        ctx->pc = 0x194A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A14u;
        // 0x194a18: 0xc7a10010  lwc1        $f1, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A1Cu;
        goto label_194a1c;
    }
    ctx->pc = 0x194A14u;
    {
        const bool branch_taken_0x194a14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x194A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A14u;
        // 0x194a18: 0xc7a10010  lwc1        $f1, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a14) {
            ctx->pc = 0x194A28u;
            goto label_194a28;
        }
    }
    ctx->pc = 0x194A1Cu;
label_194a1c:
    // 0x194a1c: 0x46141801  sub.s       $f0, $f3, $f20
    ctx->pc = 0x194a1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[20]);
label_194a20:
    // 0x194a20: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x194a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_194a24:
    // 0x194a24: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x194a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_194a28:
    // 0x194a28: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x194a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_194a2c:
    // 0x194a2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x194a2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_194a30:
    // 0x194a30: 0x0  nop
    ctx->pc = 0x194a30u;
    // NOP
label_194a34:
    // 0x194a34: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_194a38:
    if (ctx->pc == 0x194A38u) {
        ctx->pc = 0x194A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A34u;
        // 0x194a38: 0xc7a30018  lwc1        $f3, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A3Cu;
        goto label_194a3c;
    }
    ctx->pc = 0x194A34u;
    {
        const bool branch_taken_0x194a34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x194A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A34u;
        // 0x194a38: 0xc7a30018  lwc1        $f3, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a34) {
            ctx->pc = 0x194AA4u;
            goto label_194aa4;
        }
    }
    ctx->pc = 0x194A3Cu;
label_194a3c:
    // 0x194a3c: 0x10000017  b           . + 4 + (0x17 << 2)
label_194a40:
    if (ctx->pc == 0x194A40u) {
        ctx->pc = 0x194A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A3Cu;
        // 0x194a40: 0x46140800  add.s       $f0, $f1, $f20 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A44u;
        goto label_194a44;
    }
    ctx->pc = 0x194A3Cu;
    {
        const bool branch_taken_0x194a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A3Cu;
        // 0x194a40: 0x46140800  add.s       $f0, $f1, $f20 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a3c) {
            ctx->pc = 0x194A9Cu;
            goto label_194a9c;
        }
    }
    ctx->pc = 0x194A44u;
label_194a44:
    // 0x194a44: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x194a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_194a48:
    // 0x194a48: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x194a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_194a4c:
    // 0x194a4c: 0x0  nop
    ctx->pc = 0x194a4cu;
    // NOP
label_194a50:
    // 0x194a50: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x194a50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_194a54:
    // 0x194a54: 0x0  nop
    ctx->pc = 0x194a54u;
    // NOP
label_194a58:
    // 0x194a58: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
label_194a5c:
    if (ctx->pc == 0x194A5Cu) {
        ctx->pc = 0x194A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A58u;
        // 0x194a5c: 0xc7a30018  lwc1        $f3, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A60u;
        goto label_194a60;
    }
    ctx->pc = 0x194A58u;
    {
        const bool branch_taken_0x194a58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x194a58) {
            ctx->pc = 0x194A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194A58u;
            // 0x194a5c: 0xc7a30018  lwc1        $f3, 0x18($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x194AA4u;
            goto label_194aa4;
        }
    }
    ctx->pc = 0x194A60u;
label_194a60:
    // 0x194a60: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x194a60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_194a64:
    // 0x194a64: 0x0  nop
    ctx->pc = 0x194a64u;
    // NOP
label_194a68:
    // 0x194a68: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_194a6c:
    if (ctx->pc == 0x194A6Cu) {
        ctx->pc = 0x194A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A68u;
        // 0x194a6c: 0xc7a10010  lwc1        $f1, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A70u;
        goto label_194a70;
    }
    ctx->pc = 0x194A68u;
    {
        const bool branch_taken_0x194a68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x194A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A68u;
        // 0x194a6c: 0xc7a10010  lwc1        $f1, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a68) {
            ctx->pc = 0x194A80u;
            goto label_194a80;
        }
    }
    ctx->pc = 0x194A70u;
label_194a70:
    // 0x194a70: 0x4604a002  mul.s       $f0, $f20, $f4
    ctx->pc = 0x194a70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
label_194a74:
    // 0x194a74: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x194a74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_194a78:
    // 0x194a78: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x194a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_194a7c:
    // 0x194a7c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x194a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_194a80:
    // 0x194a80: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x194a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_194a84:
    // 0x194a84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x194a84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_194a88:
    // 0x194a88: 0x0  nop
    ctx->pc = 0x194a88u;
    // NOP
label_194a8c:
    // 0x194a8c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_194a90:
    if (ctx->pc == 0x194A90u) {
        ctx->pc = 0x194A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A8Cu;
        // 0x194a90: 0xc7a30018  lwc1        $f3, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A94u;
        goto label_194a94;
    }
    ctx->pc = 0x194A8Cu;
    {
        const bool branch_taken_0x194a8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x194A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A8Cu;
        // 0x194a90: 0xc7a30018  lwc1        $f3, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a8c) {
            ctx->pc = 0x194AA4u;
            goto label_194aa4;
        }
    }
    ctx->pc = 0x194A94u;
label_194a94:
    // 0x194a94: 0x4604a002  mul.s       $f0, $f20, $f4
    ctx->pc = 0x194a94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
label_194a98:
    // 0x194a98: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x194a98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_194a9c:
    // 0x194a9c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x194a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_194aa0:
    // 0x194aa0: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x194aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_194aa4:
    // 0x194aa4: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x194aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_194aa8:
    // 0x194aa8: 0x3c013efa  lui         $at, 0x3EFA
    ctx->pc = 0x194aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16122 << 16));
label_194aac:
    // 0x194aac: 0x3421e147  ori         $at, $at, 0xE147
    ctx->pc = 0x194aacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57671);
label_194ab0:
    // 0x194ab0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x194ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_194ab4:
    // 0x194ab4: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x194ab4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_194ab8:
    // 0x194ab8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x194ab8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_194abc:
    // 0x194abc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x194abcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_194ac0:
    // 0x194ac0: 0x0  nop
    ctx->pc = 0x194ac0u;
    // NOP
label_194ac4:
    // 0x194ac4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_194ac8:
    if (ctx->pc == 0x194AC8u) {
        ctx->pc = 0x194ACCu;
        goto label_194acc;
    }
    ctx->pc = 0x194AC4u;
    {
        const bool branch_taken_0x194ac4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x194ac4) {
            ctx->pc = 0x194B04u;
            goto label_194b04;
        }
    }
    ctx->pc = 0x194ACCu;
label_194acc:
    // 0x194acc: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x194accu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_194ad0:
    // 0x194ad0: 0x0  nop
    ctx->pc = 0x194ad0u;
    // NOP
label_194ad4:
    // 0x194ad4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_194ad8:
    if (ctx->pc == 0x194AD8u) {
        ctx->pc = 0x194AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AD4u;
        // 0x194ad8: 0xc7a10018  lwc1        $f1, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x194ADCu;
        goto label_194adc;
    }
    ctx->pc = 0x194AD4u;
    {
        const bool branch_taken_0x194ad4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x194AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AD4u;
        // 0x194ad8: 0xc7a10018  lwc1        $f1, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ad4) {
            ctx->pc = 0x194AE8u;
            goto label_194ae8;
        }
    }
    ctx->pc = 0x194ADCu;
label_194adc:
    // 0x194adc: 0x46141801  sub.s       $f0, $f3, $f20
    ctx->pc = 0x194adcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[20]);
label_194ae0:
    // 0x194ae0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x194ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_194ae4:
    // 0x194ae4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x194ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_194ae8:
    // 0x194ae8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x194ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_194aec:
    // 0x194aec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x194aecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_194af0:
    // 0x194af0: 0x0  nop
    ctx->pc = 0x194af0u;
    // NOP
label_194af4:
    // 0x194af4: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_194af8:
    if (ctx->pc == 0x194AF8u) {
        ctx->pc = 0x194AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AF4u;
        // 0x194af8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194AFCu;
        goto label_194afc;
    }
    ctx->pc = 0x194AF4u;
    {
        const bool branch_taken_0x194af4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x194AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AF4u;
        // 0x194af8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194af4) {
            ctx->pc = 0x194B64u;
            goto label_194b64;
        }
    }
    ctx->pc = 0x194AFCu;
label_194afc:
    // 0x194afc: 0x10000017  b           . + 4 + (0x17 << 2)
label_194b00:
    if (ctx->pc == 0x194B00u) {
        ctx->pc = 0x194B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AFCu;
        // 0x194b00: 0x46140800  add.s       $f0, $f1, $f20 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B04u;
        goto label_194b04;
    }
    ctx->pc = 0x194AFCu;
    {
        const bool branch_taken_0x194afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AFCu;
        // 0x194b00: 0x46140800  add.s       $f0, $f1, $f20 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194afc) {
            ctx->pc = 0x194B5Cu;
            goto label_194b5c;
        }
    }
    ctx->pc = 0x194B04u;
label_194b04:
    // 0x194b04: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x194b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_194b08:
    // 0x194b08: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x194b08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_194b0c:
    // 0x194b0c: 0x0  nop
    ctx->pc = 0x194b0cu;
    // NOP
label_194b10:
    // 0x194b10: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x194b10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_194b14:
    // 0x194b14: 0x0  nop
    ctx->pc = 0x194b14u;
    // NOP
label_194b18:
    // 0x194b18: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_194b1c:
    if (ctx->pc == 0x194B1Cu) {
        ctx->pc = 0x194B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B18u;
        // 0x194b1c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B20u;
        goto label_194b20;
    }
    ctx->pc = 0x194B18u;
    {
        const bool branch_taken_0x194b18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x194B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B18u;
        // 0x194b1c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b18) {
            ctx->pc = 0x194B64u;
            goto label_194b64;
        }
    }
    ctx->pc = 0x194B20u;
label_194b20:
    // 0x194b20: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x194b20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_194b24:
    // 0x194b24: 0x0  nop
    ctx->pc = 0x194b24u;
    // NOP
label_194b28:
    // 0x194b28: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_194b2c:
    if (ctx->pc == 0x194B2Cu) {
        ctx->pc = 0x194B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B28u;
        // 0x194b2c: 0xc7a10018  lwc1        $f1, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B30u;
        goto label_194b30;
    }
    ctx->pc = 0x194B28u;
    {
        const bool branch_taken_0x194b28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x194B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B28u;
        // 0x194b2c: 0xc7a10018  lwc1        $f1, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b28) {
            ctx->pc = 0x194B40u;
            goto label_194b40;
        }
    }
    ctx->pc = 0x194B30u;
label_194b30:
    // 0x194b30: 0x4604a002  mul.s       $f0, $f20, $f4
    ctx->pc = 0x194b30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
label_194b34:
    // 0x194b34: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x194b34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_194b38:
    // 0x194b38: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x194b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_194b3c:
    // 0x194b3c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x194b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_194b40:
    // 0x194b40: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x194b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_194b44:
    // 0x194b44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x194b44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_194b48:
    // 0x194b48: 0x0  nop
    ctx->pc = 0x194b48u;
    // NOP
label_194b4c:
    // 0x194b4c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_194b50:
    if (ctx->pc == 0x194B50u) {
        ctx->pc = 0x194B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B4Cu;
        // 0x194b50: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B54u;
        goto label_194b54;
    }
    ctx->pc = 0x194B4Cu;
    {
        const bool branch_taken_0x194b4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x194B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B4Cu;
        // 0x194b50: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b4c) {
            ctx->pc = 0x194B64u;
            goto label_194b64;
        }
    }
    ctx->pc = 0x194B54u;
label_194b54:
    // 0x194b54: 0x4604a002  mul.s       $f0, $f20, $f4
    ctx->pc = 0x194b54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
label_194b58:
    // 0x194b58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x194b58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_194b5c:
    // 0x194b5c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x194b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_194b60:
    // 0x194b60: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x194b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_194b64:
    // 0x194b64: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x194b64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_194b68:
    // 0x194b68: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x194b68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_194b6c:
    // 0x194b6c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x194b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_194b70:
    // 0x194b70: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x194b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_194b74:
    // 0x194b74: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x194b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_194b78:
    // 0x194b78: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x194b78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_194b7c:
    // 0x194b7c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x194b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_194b80:
    // 0x194b80: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x194b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_194b84:
    // 0x194b84: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x194b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_194b88:
    // 0x194b88: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x194b88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_194b8c:
    // 0x194b8c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x194b8cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_194b90:
    // 0x194b90: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x194b90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_194b94:
    // 0x194b94: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x194b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_194b98:
    // 0x194b98: 0xc07df8a  jal         func_1F7E28
label_194b9c:
    if (ctx->pc == 0x194B9Cu) {
        ctx->pc = 0x194BA0u;
        goto label_194ba0;
    }
    ctx->pc = 0x194B98u;
    SET_GPR_U32(ctx, 31, 0x194BA0u);
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x194B98u, 0x194BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194BA0u;
label_194ba0:
    // 0x194ba0: 0x3c013efa  lui         $at, 0x3EFA
    ctx->pc = 0x194ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16122 << 16));
label_194ba4:
    // 0x194ba4: 0x3421e147  ori         $at, $at, 0xE147
    ctx->pc = 0x194ba4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57671);
label_194ba8:
    // 0x194ba8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x194ba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_194bac:
    // 0x194bac: 0x0  nop
    ctx->pc = 0x194bacu;
    // NOP
label_194bb0:
    // 0x194bb0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x194bb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_194bb4:
    // 0x194bb4: 0x0  nop
    ctx->pc = 0x194bb4u;
    // NOP
label_194bb8:
    // 0x194bb8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_194bbc:
    if (ctx->pc == 0x194BBCu) {
        ctx->pc = 0x194BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BB8u;
        // 0x194bbc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194BC0u;
        goto label_194bc0;
    }
    ctx->pc = 0x194BB8u;
    {
        const bool branch_taken_0x194bb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x194BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BB8u;
        // 0x194bbc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194bb8) {
            ctx->pc = 0x194BD4u;
            goto label_194bd4;
        }
    }
    ctx->pc = 0x194BC0u;
label_194bc0:
    // 0x194bc0: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x194bc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_194bc4:
    // 0x194bc4: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x194bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_194bc8:
    // 0x194bc8: 0xa2230af2  sb          $v1, 0xAF2($s1)
    ctx->pc = 0x194bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2802), (uint8_t)GPR_U32(ctx, 3));
label_194bcc:
    // 0x194bcc: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x194bccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_194bd0:
    // 0x194bd0: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x194bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_194bd4:
    // 0x194bd4: 0x96220af0  lhu         $v0, 0xAF0($s1)
    ctx->pc = 0x194bd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2800)));
label_194bd8:
    // 0x194bd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x194bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_194bdc:
    // 0x194bdc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x194bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_194be0:
    // 0x194be0: 0x4610007  bgez        $v1, . + 4 + (0x7 << 2)
label_194be4:
    if (ctx->pc == 0x194BE4u) {
        ctx->pc = 0x194BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BE0u;
        // 0x194be4: 0xa6220af0  sh          $v0, 0xAF0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2800), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194BE8u;
        goto label_194be8;
    }
    ctx->pc = 0x194BE0u;
    {
        const bool branch_taken_0x194be0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x194BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BE0u;
        // 0x194be4: 0xa6220af0  sh          $v0, 0xAF0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2800), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194be0) {
            ctx->pc = 0x194C00u;
            goto label_194c00;
        }
    }
    ctx->pc = 0x194BE8u;
label_194be8:
    // 0x194be8: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x194be8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_194bec:
    // 0x194bec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x194becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_194bf0:
    // 0x194bf0: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x194bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_194bf4:
    // 0x194bf4: 0xa2230af2  sb          $v1, 0xAF2($s1)
    ctx->pc = 0x194bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2802), (uint8_t)GPR_U32(ctx, 3));
label_194bf8:
    // 0x194bf8: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x194bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_194bfc:
    // 0x194bfc: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x194bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_194c00:
    // 0x194c00: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x194c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_194c04:
    // 0x194c04: 0xc6210af8  lwc1        $f1, 0xAF8($s1)
    ctx->pc = 0x194c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_194c08:
    // 0x194c08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x194c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_194c0c:
    // 0x194c0c: 0x0  nop
    ctx->pc = 0x194c0cu;
    // NOP
label_194c10:
    // 0x194c10: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_194c14:
    if (ctx->pc == 0x194C14u) {
        ctx->pc = 0x194C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C10u;
        // 0x194c14: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x194C18u;
        goto label_194c18;
    }
    ctx->pc = 0x194C10u;
    {
        const bool branch_taken_0x194c10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x194C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C10u;
        // 0x194c14: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c10) {
            ctx->pc = 0x194C30u;
            goto label_194c30;
        }
    }
    ctx->pc = 0x194C18u;
label_194c18:
    // 0x194c18: 0xc6210afc  lwc1        $f1, 0xAFC($s1)
    ctx->pc = 0x194c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_194c1c:
    // 0x194c1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x194c1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_194c20:
    // 0x194c20: 0x0  nop
    ctx->pc = 0x194c20u;
    // NOP
label_194c24:
    // 0x194c24: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_194c28:
    if (ctx->pc == 0x194C28u) {
        ctx->pc = 0x194C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C24u;
        // 0x194c28: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x194C2Cu;
        goto label_194c2c;
    }
    ctx->pc = 0x194C24u;
    {
        const bool branch_taken_0x194c24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x194C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C24u;
        // 0x194c28: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c24) {
            ctx->pc = 0x194C30u;
            goto label_194c30;
        }
    }
    ctx->pc = 0x194C2Cu;
label_194c2c:
    // 0x194c2c: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x194c2cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_194c30:
    // 0x194c30: 0xc6200b00  lwc1        $f0, 0xB00($s1)
    ctx->pc = 0x194c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_194c34:
    // 0x194c34: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x194c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_194c38:
    // 0x194c38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x194c38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_194c3c:
    // 0x194c3c: 0x0  nop
    ctx->pc = 0x194c3cu;
    // NOP
label_194c40:
    // 0x194c40: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_194c44:
    if (ctx->pc == 0x194C44u) {
        ctx->pc = 0x194C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C40u;
        // 0x194c44: 0xe7a20010  swc1        $f2, 0x10($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x194C48u;
        goto label_194c48;
    }
    ctx->pc = 0x194C40u;
    {
        const bool branch_taken_0x194c40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x194C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C40u;
        // 0x194c44: 0xe7a20010  swc1        $f2, 0x10($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c40) {
            ctx->pc = 0x194C60u;
            goto label_194c60;
        }
    }
    ctx->pc = 0x194C48u;
label_194c48:
    // 0x194c48: 0xc6220b04  lwc1        $f2, 0xB04($s1)
    ctx->pc = 0x194c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_194c4c:
    // 0x194c4c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x194c4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_194c50:
    // 0x194c50: 0x0  nop
    ctx->pc = 0x194c50u;
    // NOP
label_194c54:
    // 0x194c54: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_194c58:
    if (ctx->pc == 0x194C58u) {
        ctx->pc = 0x194C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C54u;
        // 0x194c58: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x194C5Cu;
        goto label_194c5c;
    }
    ctx->pc = 0x194C54u;
    {
        const bool branch_taken_0x194c54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x194C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C54u;
        // 0x194c58: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c54) {
            ctx->pc = 0x194C60u;
            goto label_194c60;
        }
    }
    ctx->pc = 0x194C5Cu;
label_194c5c:
    // 0x194c5c: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x194c5cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_194c60:
    // 0x194c60: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x194c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_194c64:
    // 0x194c64: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x194c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_194c68:
    // 0x194c68: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
label_194c6c:
    if (ctx->pc == 0x194C6Cu) {
        ctx->pc = 0x194C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C68u;
        // 0x194c6c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x194C70u;
        goto label_194c70;
    }
    ctx->pc = 0x194C68u;
    {
        const bool branch_taken_0x194c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x194C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C68u;
        // 0x194c6c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c68) {
            ctx->pc = 0x194C84u;
            goto label_194c84;
        }
    }
    ctx->pc = 0x194C70u;
label_194c70:
    // 0x194c70: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x194c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_194c74:
    // 0x194c74: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x194c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_194c78:
    // 0x194c78: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x194c78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_194c7c:
    // 0x194c7c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x194c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_194c80:
    // 0x194c80: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x194c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_194c84:
    // 0x194c84: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x194c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_194c88:
    // 0x194c88: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x194c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_194c8c:
    // 0x194c8c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x194c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_194c90:
    // 0x194c90: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x194c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_194c94:
    // 0x194c94: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x194c94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_194c98:
    // 0x194c98: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x194c98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_194c9c:
    // 0x194c9c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x194c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_194ca0:
    // 0x194ca0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x194ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_194ca4:
    // 0x194ca4: 0x3e00008  jr          $ra
label_194ca8:
    if (ctx->pc == 0x194CA8u) {
        ctx->pc = 0x194CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CA4u;
        // 0x194ca8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194CACu;
        goto label_194cac;
    }
    ctx->pc = 0x194CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CA4u;
        // 0x194ca8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194CACu;
label_194cac:
    // 0x194cac: 0x0  nop
    ctx->pc = 0x194cacu;
    // NOP
    ctx->pc = 0x194cb0u;
}
