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

// Function: func_002397C0
// Address: 0x2397c0 - 0x239b88
void func_002397C0_0x2397c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002397C0_0x2397c0");
#endif

    switch (ctx->pc) {
        case 0x2397c0u: goto label_2397c0;
        case 0x2397c4u: goto label_2397c4;
        case 0x2397c8u: goto label_2397c8;
        case 0x2397ccu: goto label_2397cc;
        case 0x2397d0u: goto label_2397d0;
        case 0x2397d4u: goto label_2397d4;
        case 0x2397d8u: goto label_2397d8;
        case 0x2397dcu: goto label_2397dc;
        case 0x2397e0u: goto label_2397e0;
        case 0x2397e4u: goto label_2397e4;
        case 0x2397e8u: goto label_2397e8;
        case 0x2397ecu: goto label_2397ec;
        case 0x2397f0u: goto label_2397f0;
        case 0x2397f4u: goto label_2397f4;
        case 0x2397f8u: goto label_2397f8;
        case 0x2397fcu: goto label_2397fc;
        case 0x239800u: goto label_239800;
        case 0x239804u: goto label_239804;
        case 0x239808u: goto label_239808;
        case 0x23980cu: goto label_23980c;
        case 0x239810u: goto label_239810;
        case 0x239814u: goto label_239814;
        case 0x239818u: goto label_239818;
        case 0x23981cu: goto label_23981c;
        case 0x239820u: goto label_239820;
        case 0x239824u: goto label_239824;
        case 0x239828u: goto label_239828;
        case 0x23982cu: goto label_23982c;
        case 0x239830u: goto label_239830;
        case 0x239834u: goto label_239834;
        case 0x239838u: goto label_239838;
        case 0x23983cu: goto label_23983c;
        case 0x239840u: goto label_239840;
        case 0x239844u: goto label_239844;
        case 0x239848u: goto label_239848;
        case 0x23984cu: goto label_23984c;
        case 0x239850u: goto label_239850;
        case 0x239854u: goto label_239854;
        case 0x239858u: goto label_239858;
        case 0x23985cu: goto label_23985c;
        case 0x239860u: goto label_239860;
        case 0x239864u: goto label_239864;
        case 0x239868u: goto label_239868;
        case 0x23986cu: goto label_23986c;
        case 0x239870u: goto label_239870;
        case 0x239874u: goto label_239874;
        case 0x239878u: goto label_239878;
        case 0x23987cu: goto label_23987c;
        case 0x239880u: goto label_239880;
        case 0x239884u: goto label_239884;
        case 0x239888u: goto label_239888;
        case 0x23988cu: goto label_23988c;
        case 0x239890u: goto label_239890;
        case 0x239894u: goto label_239894;
        case 0x239898u: goto label_239898;
        case 0x23989cu: goto label_23989c;
        case 0x2398a0u: goto label_2398a0;
        case 0x2398a4u: goto label_2398a4;
        case 0x2398a8u: goto label_2398a8;
        case 0x2398acu: goto label_2398ac;
        case 0x2398b0u: goto label_2398b0;
        case 0x2398b4u: goto label_2398b4;
        case 0x2398b8u: goto label_2398b8;
        case 0x2398bcu: goto label_2398bc;
        case 0x2398c0u: goto label_2398c0;
        case 0x2398c4u: goto label_2398c4;
        case 0x2398c8u: goto label_2398c8;
        case 0x2398ccu: goto label_2398cc;
        case 0x2398d0u: goto label_2398d0;
        case 0x2398d4u: goto label_2398d4;
        case 0x2398d8u: goto label_2398d8;
        case 0x2398dcu: goto label_2398dc;
        case 0x2398e0u: goto label_2398e0;
        case 0x2398e4u: goto label_2398e4;
        case 0x2398e8u: goto label_2398e8;
        case 0x2398ecu: goto label_2398ec;
        case 0x2398f0u: goto label_2398f0;
        case 0x2398f4u: goto label_2398f4;
        case 0x2398f8u: goto label_2398f8;
        case 0x2398fcu: goto label_2398fc;
        case 0x239900u: goto label_239900;
        case 0x239904u: goto label_239904;
        case 0x239908u: goto label_239908;
        case 0x23990cu: goto label_23990c;
        case 0x239910u: goto label_239910;
        case 0x239914u: goto label_239914;
        case 0x239918u: goto label_239918;
        case 0x23991cu: goto label_23991c;
        case 0x239920u: goto label_239920;
        case 0x239924u: goto label_239924;
        case 0x239928u: goto label_239928;
        case 0x23992cu: goto label_23992c;
        case 0x239930u: goto label_239930;
        case 0x239934u: goto label_239934;
        case 0x239938u: goto label_239938;
        case 0x23993cu: goto label_23993c;
        case 0x239940u: goto label_239940;
        case 0x239944u: goto label_239944;
        case 0x239948u: goto label_239948;
        case 0x23994cu: goto label_23994c;
        case 0x239950u: goto label_239950;
        case 0x239954u: goto label_239954;
        case 0x239958u: goto label_239958;
        case 0x23995cu: goto label_23995c;
        case 0x239960u: goto label_239960;
        case 0x239964u: goto label_239964;
        case 0x239968u: goto label_239968;
        case 0x23996cu: goto label_23996c;
        case 0x239970u: goto label_239970;
        case 0x239974u: goto label_239974;
        case 0x239978u: goto label_239978;
        case 0x23997cu: goto label_23997c;
        case 0x239980u: goto label_239980;
        case 0x239984u: goto label_239984;
        case 0x239988u: goto label_239988;
        case 0x23998cu: goto label_23998c;
        case 0x239990u: goto label_239990;
        case 0x239994u: goto label_239994;
        case 0x239998u: goto label_239998;
        case 0x23999cu: goto label_23999c;
        case 0x2399a0u: goto label_2399a0;
        case 0x2399a4u: goto label_2399a4;
        case 0x2399a8u: goto label_2399a8;
        case 0x2399acu: goto label_2399ac;
        case 0x2399b0u: goto label_2399b0;
        case 0x2399b4u: goto label_2399b4;
        case 0x2399b8u: goto label_2399b8;
        case 0x2399bcu: goto label_2399bc;
        case 0x2399c0u: goto label_2399c0;
        case 0x2399c4u: goto label_2399c4;
        case 0x2399c8u: goto label_2399c8;
        case 0x2399ccu: goto label_2399cc;
        case 0x2399d0u: goto label_2399d0;
        case 0x2399d4u: goto label_2399d4;
        case 0x2399d8u: goto label_2399d8;
        case 0x2399dcu: goto label_2399dc;
        case 0x2399e0u: goto label_2399e0;
        case 0x2399e4u: goto label_2399e4;
        case 0x2399e8u: goto label_2399e8;
        case 0x2399ecu: goto label_2399ec;
        case 0x2399f0u: goto label_2399f0;
        case 0x2399f4u: goto label_2399f4;
        case 0x2399f8u: goto label_2399f8;
        case 0x2399fcu: goto label_2399fc;
        case 0x239a00u: goto label_239a00;
        case 0x239a04u: goto label_239a04;
        case 0x239a08u: goto label_239a08;
        case 0x239a0cu: goto label_239a0c;
        case 0x239a10u: goto label_239a10;
        case 0x239a14u: goto label_239a14;
        case 0x239a18u: goto label_239a18;
        case 0x239a1cu: goto label_239a1c;
        case 0x239a20u: goto label_239a20;
        case 0x239a24u: goto label_239a24;
        case 0x239a28u: goto label_239a28;
        case 0x239a2cu: goto label_239a2c;
        case 0x239a30u: goto label_239a30;
        case 0x239a34u: goto label_239a34;
        case 0x239a38u: goto label_239a38;
        case 0x239a3cu: goto label_239a3c;
        case 0x239a40u: goto label_239a40;
        case 0x239a44u: goto label_239a44;
        case 0x239a48u: goto label_239a48;
        case 0x239a4cu: goto label_239a4c;
        case 0x239a50u: goto label_239a50;
        case 0x239a54u: goto label_239a54;
        case 0x239a58u: goto label_239a58;
        case 0x239a5cu: goto label_239a5c;
        case 0x239a60u: goto label_239a60;
        case 0x239a64u: goto label_239a64;
        case 0x239a68u: goto label_239a68;
        case 0x239a6cu: goto label_239a6c;
        case 0x239a70u: goto label_239a70;
        case 0x239a74u: goto label_239a74;
        case 0x239a78u: goto label_239a78;
        case 0x239a7cu: goto label_239a7c;
        case 0x239a80u: goto label_239a80;
        case 0x239a84u: goto label_239a84;
        case 0x239a88u: goto label_239a88;
        case 0x239a8cu: goto label_239a8c;
        case 0x239a90u: goto label_239a90;
        case 0x239a94u: goto label_239a94;
        case 0x239a98u: goto label_239a98;
        case 0x239a9cu: goto label_239a9c;
        case 0x239aa0u: goto label_239aa0;
        case 0x239aa4u: goto label_239aa4;
        case 0x239aa8u: goto label_239aa8;
        case 0x239aacu: goto label_239aac;
        case 0x239ab0u: goto label_239ab0;
        case 0x239ab4u: goto label_239ab4;
        case 0x239ab8u: goto label_239ab8;
        case 0x239abcu: goto label_239abc;
        case 0x239ac0u: goto label_239ac0;
        case 0x239ac4u: goto label_239ac4;
        case 0x239ac8u: goto label_239ac8;
        case 0x239accu: goto label_239acc;
        case 0x239ad0u: goto label_239ad0;
        case 0x239ad4u: goto label_239ad4;
        case 0x239ad8u: goto label_239ad8;
        case 0x239adcu: goto label_239adc;
        case 0x239ae0u: goto label_239ae0;
        case 0x239ae4u: goto label_239ae4;
        case 0x239ae8u: goto label_239ae8;
        case 0x239aecu: goto label_239aec;
        case 0x239af0u: goto label_239af0;
        case 0x239af4u: goto label_239af4;
        case 0x239af8u: goto label_239af8;
        case 0x239afcu: goto label_239afc;
        case 0x239b00u: goto label_239b00;
        case 0x239b04u: goto label_239b04;
        case 0x239b08u: goto label_239b08;
        case 0x239b0cu: goto label_239b0c;
        case 0x239b10u: goto label_239b10;
        case 0x239b14u: goto label_239b14;
        case 0x239b18u: goto label_239b18;
        case 0x239b1cu: goto label_239b1c;
        case 0x239b20u: goto label_239b20;
        case 0x239b24u: goto label_239b24;
        case 0x239b28u: goto label_239b28;
        case 0x239b2cu: goto label_239b2c;
        case 0x239b30u: goto label_239b30;
        case 0x239b34u: goto label_239b34;
        case 0x239b38u: goto label_239b38;
        case 0x239b3cu: goto label_239b3c;
        case 0x239b40u: goto label_239b40;
        case 0x239b44u: goto label_239b44;
        case 0x239b48u: goto label_239b48;
        case 0x239b4cu: goto label_239b4c;
        case 0x239b50u: goto label_239b50;
        case 0x239b54u: goto label_239b54;
        case 0x239b58u: goto label_239b58;
        case 0x239b5cu: goto label_239b5c;
        case 0x239b60u: goto label_239b60;
        case 0x239b64u: goto label_239b64;
        case 0x239b68u: goto label_239b68;
        case 0x239b6cu: goto label_239b6c;
        case 0x239b70u: goto label_239b70;
        case 0x239b74u: goto label_239b74;
        case 0x239b78u: goto label_239b78;
        case 0x239b7cu: goto label_239b7c;
        case 0x239b80u: goto label_239b80;
        case 0x239b84u: goto label_239b84;
        default: break;
    }

    ctx->pc = 0x2397c0u;

label_2397c0:
    // 0x2397c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2397c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2397c4:
    // 0x2397c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2397c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2397c8:
    // 0x2397c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2397c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2397cc:
    // 0x2397cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2397ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2397d0:
    // 0x2397d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2397d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2397d4:
    // 0x2397d4: 0xc0b6dac  jal         func_2DB6B0
label_2397d8:
    if (ctx->pc == 0x2397D8u) {
        ctx->pc = 0x2397D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2397D4u;
        // 0x2397d8: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2397DCu;
        goto label_2397dc;
    }
    ctx->pc = 0x2397D4u;
    SET_GPR_U32(ctx, 31, 0x2397DCu);
    ctx->pc = 0x2397D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2397D4u;
    // 0x2397d8: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2397D4u, 0x2397DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2397DCu;
label_2397dc:
    // 0x2397dc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2397dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_2397e0:
    // 0x2397e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2397e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2397e4:
    // 0x2397e4: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x2397e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
label_2397e8:
    // 0x2397e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2397e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2397ec:
    // 0x2397ec: 0xc04d476  jal         func_1351D8
label_2397f0:
    if (ctx->pc == 0x2397F0u) {
        ctx->pc = 0x2397F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2397ECu;
        // 0x2397f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2397F4u;
        goto label_2397f4;
    }
    ctx->pc = 0x2397ECu;
    SET_GPR_U32(ctx, 31, 0x2397F4u);
    ctx->pc = 0x2397F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2397ECu;
    // 0x2397f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2397ECu, 0x2397F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2397F4u;
label_2397f4:
    // 0x2397f4: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2397f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_2397f8:
    // 0x2397f8: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x2397f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2397fc:
    // 0x2397fc: 0x104000dc  beqz        $v0, . + 4 + (0xDC << 2)
label_239800:
    if (ctx->pc == 0x239800u) {
        ctx->pc = 0x239800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2397FCu;
        // 0x239800: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239804u;
        goto label_239804;
    }
    ctx->pc = 0x2397FCu;
    {
        const bool branch_taken_0x2397fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2397FCu;
        // 0x239800: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2397fc) {
            ctx->pc = 0x239B70u;
            goto label_239b70;
        }
    }
    ctx->pc = 0x239804u;
label_239804:
    // 0x239804: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x239804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_239808:
    // 0x239808: 0x2442a420  addiu       $v0, $v0, -0x5BE0
    ctx->pc = 0x239808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943776));
label_23980c:
    // 0x23980c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23980cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_239810:
    // 0x239810: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x239810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_239814:
    // 0x239814: 0x800008  jr          $a0
label_239818:
    if (ctx->pc == 0x239818u) {
        ctx->pc = 0x23981Cu;
        goto label_23981c;
    }
    ctx->pc = 0x239814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23981Cu: goto label_23981c;
            case 0x2398BCu: goto label_2398bc;
            case 0x239914u: goto label_239914;
            case 0x239950u: goto label_239950;
            case 0x239A08u: goto label_239a08;
            case 0x239A44u: goto label_239a44;
            case 0x239A98u: goto label_239a98;
            case 0x239AE4u: goto label_239ae4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239814u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23981Cu;
label_23981c:
    // 0x23981c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23981cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_239820:
    // 0x239820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_239824:
    // 0x239824: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x239824u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
label_239828:
    // 0x239828: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x239828u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23982c:
    // 0x23982c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23982cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_239830:
    // 0x239830: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x239830u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239834:
    // 0x239834: 0x8c453c44  lw          $a1, 0x3C44($v0)
    ctx->pc = 0x239834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15428)));
label_239838:
    // 0x239838: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x239838u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23983c:
    // 0x23983c: 0x8c463c48  lw          $a2, 0x3C48($v0)
    ctx->pc = 0x23983cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15432)));
label_239840:
    // 0x239840: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x239840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_239844:
    // 0x239844: 0xc0aa15e  jal         func_2A8578
label_239848:
    if (ctx->pc == 0x239848u) {
        ctx->pc = 0x239848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239844u;
        // 0x239848: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23984Cu;
        goto label_23984c;
    }
    ctx->pc = 0x239844u;
    SET_GPR_U32(ctx, 31, 0x23984Cu);
    ctx->pc = 0x239848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239844u;
    // 0x239848: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x239844u, 0x23984Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23984Cu;
label_23984c:
    // 0x23984c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x23984cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_239850:
    // 0x239850: 0xc07e804  jal         func_1FA010
label_239854:
    if (ctx->pc == 0x239854u) {
        ctx->pc = 0x239854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239850u;
        // 0x239854: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239858u;
        goto label_239858;
    }
    ctx->pc = 0x239850u;
    SET_GPR_U32(ctx, 31, 0x239858u);
    ctx->pc = 0x239854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239850u;
    // 0x239854: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x239850u, 0x239858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239858u;
label_239858:
    // 0x239858: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x239858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23985c:
    // 0x23985c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x23985cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_239860:
    // 0x239860: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_239864:
    if (ctx->pc == 0x239864u) {
        ctx->pc = 0x239864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239860u;
        // 0x239864: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239868u;
        goto label_239868;
    }
    ctx->pc = 0x239860u;
    {
        const bool branch_taken_0x239860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239860u;
        // 0x239864: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239860) {
            ctx->pc = 0x239880u;
            goto label_239880;
        }
    }
    ctx->pc = 0x239868u;
label_239868:
    // 0x239868: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x239868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23986c:
    // 0x23986c: 0x2442a440  addiu       $v0, $v0, -0x5BC0
    ctx->pc = 0x23986cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943808));
label_239870:
    // 0x239870: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x239870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_239874:
    // 0x239874: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x239874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_239878:
    // 0x239878: 0x800008  jr          $a0
label_23987c:
    if (ctx->pc == 0x23987Cu) {
        ctx->pc = 0x239880u;
        goto label_239880;
    }
    ctx->pc = 0x239878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239880u: goto label_239880;
            case 0x239888u: goto label_239888;
            case 0x239890u: goto label_239890;
            case 0x239898u: goto label_239898;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239878u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x239880u;
label_239880:
    // 0x239880: 0x10000006  b           . + 4 + (0x6 << 2)
label_239884:
    if (ctx->pc == 0x239884u) {
        ctx->pc = 0x239884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239880u;
        // 0x239884: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239888u;
        goto label_239888;
    }
    ctx->pc = 0x239880u;
    {
        const bool branch_taken_0x239880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239880u;
        // 0x239884: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239880) {
            ctx->pc = 0x23989Cu;
            goto label_23989c;
        }
    }
    ctx->pc = 0x239888u;
label_239888:
    // 0x239888: 0x10000004  b           . + 4 + (0x4 << 2)
label_23988c:
    if (ctx->pc == 0x23988Cu) {
        ctx->pc = 0x23988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239888u;
        // 0x23988c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239890u;
        goto label_239890;
    }
    ctx->pc = 0x239888u;
    {
        const bool branch_taken_0x239888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239888u;
        // 0x23988c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239888) {
            ctx->pc = 0x23989Cu;
            goto label_23989c;
        }
    }
    ctx->pc = 0x239890u;
label_239890:
    // 0x239890: 0x10000002  b           . + 4 + (0x2 << 2)
label_239894:
    if (ctx->pc == 0x239894u) {
        ctx->pc = 0x239894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239890u;
        // 0x239894: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239898u;
        goto label_239898;
    }
    ctx->pc = 0x239890u;
    {
        const bool branch_taken_0x239890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239890u;
        // 0x239894: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239890) {
            ctx->pc = 0x23989Cu;
            goto label_23989c;
        }
    }
    ctx->pc = 0x239898u;
label_239898:
    // 0x239898: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x239898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_23989c:
    // 0x23989c: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x23989cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
label_2398a0:
    // 0x2398a0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2398a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_2398a4:
    // 0x2398a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2398a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2398a8:
    // 0x2398a8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2398a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2398ac:
    // 0x2398ac: 0xa603056a  sh          $v1, 0x56A($s0)
    ctx->pc = 0x2398acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 3));
label_2398b0:
    // 0x2398b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2398b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2398b4:
    // 0x2398b4: 0xa604056e  sh          $a0, 0x56E($s0)
    ctx->pc = 0x2398b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 4));
label_2398b8:
    // 0x2398b8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2398b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2398bc:
    // 0x2398bc: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x2398bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
label_2398c0:
    // 0x2398c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2398c4:
    if (ctx->pc == 0x2398C4u) {
        ctx->pc = 0x2398C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2398C0u;
        // 0x2398c4: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2398C8u;
        goto label_2398c8;
    }
    ctx->pc = 0x2398C0u;
    {
        const bool branch_taken_0x2398c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2398C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2398C0u;
        // 0x2398c4: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2398c0) {
            ctx->pc = 0x2398E8u;
            goto label_2398e8;
        }
    }
    ctx->pc = 0x2398C8u;
label_2398c8:
    // 0x2398c8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2398c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2398cc:
    // 0x2398cc: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x2398ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_2398d0:
    // 0x2398d0: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x2398d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
label_2398d4:
    // 0x2398d4: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x2398d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2398d8:
    // 0x2398d8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2398d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2398dc:
    // 0x2398dc: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x2398dcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2398e0:
    // 0x2398e0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2398e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2398e4:
    // 0x2398e4: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2398e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_2398e8:
    // 0x2398e8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2398e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_2398ec:
    // 0x2398ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2398ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2398f0:
    // 0x2398f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2398f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2398f4:
    // 0x2398f4: 0xc055f06  jal         func_157C18
label_2398f8:
    if (ctx->pc == 0x2398F8u) {
        ctx->pc = 0x2398F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2398F4u;
        // 0x2398f8: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2398FCu;
        goto label_2398fc;
    }
    ctx->pc = 0x2398F4u;
    SET_GPR_U32(ctx, 31, 0x2398FCu);
    ctx->pc = 0x2398F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2398F4u;
    // 0x2398f8: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2398F4u, 0x2398FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2398FCu;
label_2398fc:
    // 0x2398fc: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
label_239900:
    if (ctx->pc == 0x239900u) {
        ctx->pc = 0x239904u;
        goto label_239904;
    }
    ctx->pc = 0x2398FCu;
    {
        const bool branch_taken_0x2398fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2398fc) {
            ctx->pc = 0x239A70u;
            goto label_239a70;
        }
    }
    ctx->pc = 0x239904u;
label_239904:
    // 0x239904: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x239904u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_239908:
    // 0x239908: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x239908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23990c:
    // 0x23990c: 0x10000058  b           . + 4 + (0x58 << 2)
label_239910:
    if (ctx->pc == 0x239910u) {
        ctx->pc = 0x239910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23990Cu;
        // 0x239910: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239914u;
        goto label_239914;
    }
    ctx->pc = 0x23990Cu;
    {
        const bool branch_taken_0x23990c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23990Cu;
        // 0x239910: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23990c) {
            ctx->pc = 0x239A70u;
            goto label_239a70;
        }
    }
    ctx->pc = 0x239914u;
label_239914:
    // 0x239914: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x239914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_239918:
    // 0x239918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23991c:
    // 0x23991c: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x23991cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
label_239920:
    // 0x239920: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x239920u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239924:
    // 0x239924: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x239924u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_239928:
    // 0x239928: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x239928u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23992c:
    // 0x23992c: 0x8c453c4c  lw          $a1, 0x3C4C($v0)
    ctx->pc = 0x23992cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15436)));
label_239930:
    // 0x239930: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x239930u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239934:
    // 0x239934: 0x8c463c50  lw          $a2, 0x3C50($v0)
    ctx->pc = 0x239934u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15440)));
label_239938:
    // 0x239938: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x239938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_23993c:
    // 0x23993c: 0xc0aa15e  jal         func_2A8578
label_239940:
    if (ctx->pc == 0x239940u) {
        ctx->pc = 0x239940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23993Cu;
        // 0x239940: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239944u;
        goto label_239944;
    }
    ctx->pc = 0x23993Cu;
    SET_GPR_U32(ctx, 31, 0x239944u);
    ctx->pc = 0x239940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23993Cu;
    // 0x239940: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23993Cu, 0x239944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239944u;
label_239944:
    // 0x239944: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x239944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_239948:
    // 0x239948: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x239948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23994c:
    // 0x23994c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23994cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_239950:
    // 0x239950: 0xc0b6ddc  jal         func_2DB770
label_239954:
    if (ctx->pc == 0x239954u) {
        ctx->pc = 0x239958u;
        goto label_239958;
    }
    ctx->pc = 0x239950u;
    SET_GPR_U32(ctx, 31, 0x239958u);
    ctx->pc = 0x2DB770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB770u, 0x239950u, 0x239958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239958u;
label_239958:
    // 0x239958: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x239958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_23995c:
    // 0x23995c: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x23995cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
label_239960:
    // 0x239960: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x239960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_239964:
    // 0x239964: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x239964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_239968:
    // 0x239968: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_23996c:
    if (ctx->pc == 0x23996Cu) {
        ctx->pc = 0x23996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239968u;
        // 0x23996c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239970u;
        goto label_239970;
    }
    ctx->pc = 0x239968u;
    {
        const bool branch_taken_0x239968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239968) {
            ctx->pc = 0x23996Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239968u;
            // 0x23996c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239980u;
            goto label_239980;
        }
    }
    ctx->pc = 0x239970u;
label_239970:
    // 0x239970: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x239970u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
label_239974:
    // 0x239974: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x239974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_239978:
    // 0x239978: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x239978u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
label_23997c:
    // 0x23997c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x23997cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_239980:
    // 0x239980: 0x3c0300f0  lui         $v1, 0xF0
    ctx->pc = 0x239980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)240 << 16));
label_239984:
    // 0x239984: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x239984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_239988:
    // 0x239988: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23998c:
    if (ctx->pc == 0x23998Cu) {
        ctx->pc = 0x239990u;
        goto label_239990;
    }
    ctx->pc = 0x239988u;
    {
        const bool branch_taken_0x239988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239988) {
            ctx->pc = 0x23999Cu;
            goto label_23999c;
        }
    }
    ctx->pc = 0x239990u;
label_239990:
    // 0x239990: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x239990u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
label_239994:
    // 0x239994: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x239994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_239998:
    // 0x239998: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x239998u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
label_23999c:
    // 0x23999c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x23999cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_2399a0:
    // 0x2399a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2399a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2399a4:
    // 0x2399a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2399a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2399a8:
    // 0x2399a8: 0xc055f06  jal         func_157C18
label_2399ac:
    if (ctx->pc == 0x2399ACu) {
        ctx->pc = 0x2399ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2399A8u;
        // 0x2399ac: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2399B0u;
        goto label_2399b0;
    }
    ctx->pc = 0x2399A8u;
    SET_GPR_U32(ctx, 31, 0x2399B0u);
    ctx->pc = 0x2399ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2399A8u;
    // 0x2399ac: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2399A8u, 0x2399B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2399B0u;
label_2399b0:
    // 0x2399b0: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_2399b4:
    if (ctx->pc == 0x2399B4u) {
        ctx->pc = 0x2399B8u;
        goto label_2399b8;
    }
    ctx->pc = 0x2399B0u;
    {
        const bool branch_taken_0x2399b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2399b0) {
            ctx->pc = 0x239A70u;
            goto label_239a70;
        }
    }
    ctx->pc = 0x2399B8u;
label_2399b8:
    // 0x2399b8: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x2399b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
label_2399bc:
    // 0x2399bc: 0x5c400005  bgtzl       $v0, . + 4 + (0x5 << 2)
label_2399c0:
    if (ctx->pc == 0x2399C0u) {
        ctx->pc = 0x2399C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2399BCu;
        // 0x2399c0: 0x9602056a  lhu         $v0, 0x56A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2399C4u;
        goto label_2399c4;
    }
    ctx->pc = 0x2399BCu;
    {
        const bool branch_taken_0x2399bc = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x2399bc) {
            ctx->pc = 0x2399C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2399BCu;
            // 0x2399c0: 0x9602056a  lhu         $v0, 0x56A($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2399D4u;
            goto label_2399d4;
        }
    }
    ctx->pc = 0x2399C4u;
label_2399c4:
    // 0x2399c4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2399c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2399c8:
    // 0x2399c8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2399c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2399cc:
    // 0x2399cc: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2399ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_2399d0:
    // 0x2399d0: 0x9602056a  lhu         $v0, 0x56A($s0)
    ctx->pc = 0x2399d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
label_2399d4:
    // 0x2399d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2399d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2399d8:
    // 0x2399d8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2399d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2399dc:
    // 0x2399dc: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
label_2399e0:
    if (ctx->pc == 0x2399E0u) {
        ctx->pc = 0x2399E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2399DCu;
        // 0x2399e0: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2399E4u;
        goto label_2399e4;
    }
    ctx->pc = 0x2399DCu;
    {
        const bool branch_taken_0x2399dc = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x2399E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2399DCu;
        // 0x2399e0: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2399dc) {
            ctx->pc = 0x2399F0u;
            goto label_2399f0;
        }
    }
    ctx->pc = 0x2399E4u;
label_2399e4:
    // 0x2399e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2399e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2399e8:
    // 0x2399e8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2399e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2399ec:
    // 0x2399ec: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2399ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_2399f0:
    // 0x2399f0: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x2399f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_2399f4:
    // 0x2399f4: 0x1c40001e  bgtz        $v0, . + 4 + (0x1E << 2)
label_2399f8:
    if (ctx->pc == 0x2399F8u) {
        ctx->pc = 0x2399F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2399F4u;
        // 0x2399f8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2399FCu;
        goto label_2399fc;
    }
    ctx->pc = 0x2399F4u;
    {
        const bool branch_taken_0x2399f4 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x2399F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2399F4u;
        // 0x2399f8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2399f4) {
            ctx->pc = 0x239A70u;
            goto label_239a70;
        }
    }
    ctx->pc = 0x2399FCu;
label_2399fc:
    // 0x2399fc: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2399fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_239a00:
    // 0x239a00: 0x1000001b  b           . + 4 + (0x1B << 2)
label_239a04:
    if (ctx->pc == 0x239A04u) {
        ctx->pc = 0x239A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A00u;
        // 0x239a04: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239A08u;
        goto label_239a08;
    }
    ctx->pc = 0x239A00u;
    {
        const bool branch_taken_0x239a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A00u;
        // 0x239a04: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a00) {
            ctx->pc = 0x239A70u;
            goto label_239a70;
        }
    }
    ctx->pc = 0x239A08u;
label_239a08:
    // 0x239a08: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x239a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_239a0c:
    // 0x239a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_239a10:
    // 0x239a10: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x239a10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
label_239a14:
    // 0x239a14: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x239a14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_239a18:
    // 0x239a18: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x239a18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_239a1c:
    // 0x239a1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x239a1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239a20:
    // 0x239a20: 0x8c453c54  lw          $a1, 0x3C54($v0)
    ctx->pc = 0x239a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15444)));
label_239a24:
    // 0x239a24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x239a24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239a28:
    // 0x239a28: 0x8c463c58  lw          $a2, 0x3C58($v0)
    ctx->pc = 0x239a28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15448)));
label_239a2c:
    // 0x239a2c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x239a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_239a30:
    // 0x239a30: 0xc0aa15e  jal         func_2A8578
label_239a34:
    if (ctx->pc == 0x239A34u) {
        ctx->pc = 0x239A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A30u;
        // 0x239a34: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239A38u;
        goto label_239a38;
    }
    ctx->pc = 0x239A30u;
    SET_GPR_U32(ctx, 31, 0x239A38u);
    ctx->pc = 0x239A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239A30u;
    // 0x239a34: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x239A30u, 0x239A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A38u;
label_239a38:
    // 0x239a38: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x239a38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_239a3c:
    // 0x239a3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x239a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_239a40:
    // 0x239a40: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x239a40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_239a44:
    // 0x239a44: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x239a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_239a48:
    // 0x239a48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x239a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_239a4c:
    // 0x239a4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_239a50:
    // 0x239a50: 0xc055f06  jal         func_157C18
label_239a54:
    if (ctx->pc == 0x239A54u) {
        ctx->pc = 0x239A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A50u;
        // 0x239a54: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x239A58u;
        goto label_239a58;
    }
    ctx->pc = 0x239A50u;
    SET_GPR_U32(ctx, 31, 0x239A58u);
    ctx->pc = 0x239A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239A50u;
    // 0x239a54: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x239A50u, 0x239A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A58u;
label_239a58:
    // 0x239a58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_239a5c:
    if (ctx->pc == 0x239A5Cu) {
        ctx->pc = 0x239A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A58u;
        // 0x239a5c: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239A60u;
        goto label_239a60;
    }
    ctx->pc = 0x239A58u;
    {
        const bool branch_taken_0x239a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A58u;
        // 0x239a5c: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a58) {
            ctx->pc = 0x239A70u;
            goto label_239a70;
        }
    }
    ctx->pc = 0x239A60u;
label_239a60:
    // 0x239a60: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x239a60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
label_239a64:
    // 0x239a64: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x239a64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
label_239a68:
    // 0x239a68: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x239a68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_239a6c:
    // 0x239a6c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x239a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_239a70:
    // 0x239a70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x239a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_239a74:
    // 0x239a74: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x239a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_239a78:
    // 0x239a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_239a7c:
    // 0x239a7c: 0xc053e7c  jal         func_14F9F0
label_239a80:
    if (ctx->pc == 0x239A80u) {
        ctx->pc = 0x239A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A7Cu;
        // 0x239a80: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x239A84u;
        goto label_239a84;
    }
    ctx->pc = 0x239A7Cu;
    SET_GPR_U32(ctx, 31, 0x239A84u);
    ctx->pc = 0x239A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239A7Cu;
    // 0x239a80: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x239A7Cu, 0x239A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A84u;
label_239a84:
    // 0x239a84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_239a88:
    // 0x239a88: 0xc053e4a  jal         func_14F928
label_239a8c:
    if (ctx->pc == 0x239A8Cu) {
        ctx->pc = 0x239A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A88u;
        // 0x239a8c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x239A90u;
        goto label_239a90;
    }
    ctx->pc = 0x239A88u;
    SET_GPR_U32(ctx, 31, 0x239A90u);
    ctx->pc = 0x239A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239A88u;
    // 0x239a8c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x239A88u, 0x239A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A90u;
label_239a90:
    // 0x239a90: 0x10000038  b           . + 4 + (0x38 << 2)
label_239a94:
    if (ctx->pc == 0x239A94u) {
        ctx->pc = 0x239A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A90u;
        // 0x239a94: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239A98u;
        goto label_239a98;
    }
    ctx->pc = 0x239A90u;
    {
        const bool branch_taken_0x239a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A90u;
        // 0x239a94: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a90) {
            ctx->pc = 0x239B74u;
            goto label_239b74;
        }
    }
    ctx->pc = 0x239A98u;
label_239a98:
    // 0x239a98: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x239a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_239a9c:
    // 0x239a9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_239aa0:
    // 0x239aa0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x239aa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_239aa4:
    // 0x239aa4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x239aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_239aa8:
    // 0x239aa8: 0x8c453c5c  lw          $a1, 0x3C5C($v0)
    ctx->pc = 0x239aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15452)));
label_239aac:
    // 0x239aac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x239aacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239ab0:
    // 0x239ab0: 0x8c463c60  lw          $a2, 0x3C60($v0)
    ctx->pc = 0x239ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15456)));
label_239ab4:
    // 0x239ab4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x239ab4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239ab8:
    // 0x239ab8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x239ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_239abc:
    // 0x239abc: 0xc0aa15e  jal         func_2A8578
label_239ac0:
    if (ctx->pc == 0x239AC0u) {
        ctx->pc = 0x239AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239ABCu;
        // 0x239ac0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239AC4u;
        goto label_239ac4;
    }
    ctx->pc = 0x239ABCu;
    SET_GPR_U32(ctx, 31, 0x239AC4u);
    ctx->pc = 0x239AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239ABCu;
    // 0x239ac0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x239ABCu, 0x239AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239AC4u;
label_239ac4:
    // 0x239ac4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x239ac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_239ac8:
    // 0x239ac8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x239ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_239acc:
    // 0x239acc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x239accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_239ad0:
    // 0x239ad0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x239ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_239ad4:
    // 0x239ad4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x239ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_239ad8:
    // 0x239ad8: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x239ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
label_239adc:
    // 0x239adc: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x239adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
label_239ae0:
    // 0x239ae0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x239ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_239ae4:
    // 0x239ae4: 0xc055f06  jal         func_157C18
label_239ae8:
    if (ctx->pc == 0x239AE8u) {
        ctx->pc = 0x239AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239AE4u;
        // 0x239ae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239AECu;
        goto label_239aec;
    }
    ctx->pc = 0x239AE4u;
    SET_GPR_U32(ctx, 31, 0x239AECu);
    ctx->pc = 0x239AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239AE4u;
    // 0x239ae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x239AE4u, 0x239AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239AECu;
label_239aec:
    // 0x239aec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_239af0:
    if (ctx->pc == 0x239AF0u) {
        ctx->pc = 0x239AF4u;
        goto label_239af4;
    }
    ctx->pc = 0x239AECu;
    {
        const bool branch_taken_0x239aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239aec) {
            ctx->pc = 0x239AFCu;
            goto label_239afc;
        }
    }
    ctx->pc = 0x239AF4u;
label_239af4:
    // 0x239af4: 0xc09c176  jal         func_2705D8
label_239af8:
    if (ctx->pc == 0x239AF8u) {
        ctx->pc = 0x239AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239AF4u;
        // 0x239af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239AFCu;
        goto label_239afc;
    }
    ctx->pc = 0x239AF4u;
    SET_GPR_U32(ctx, 31, 0x239AFCu);
    ctx->pc = 0x239AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239AF4u;
    // 0x239af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x239AF4u, 0x239AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239AFCu;
label_239afc:
    // 0x239afc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x239afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_239b00:
    // 0x239b00: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x239b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_239b04:
    // 0x239b04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_239b08:
    // 0x239b08: 0xc053e7c  jal         func_14F9F0
label_239b0c:
    if (ctx->pc == 0x239B0Cu) {
        ctx->pc = 0x239B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B08u;
        // 0x239b0c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x239B10u;
        goto label_239b10;
    }
    ctx->pc = 0x239B08u;
    SET_GPR_U32(ctx, 31, 0x239B10u);
    ctx->pc = 0x239B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239B08u;
    // 0x239b0c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x239B08u, 0x239B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B10u;
label_239b10:
    // 0x239b10: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x239b10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_239b14:
    // 0x239b14: 0xc053e4a  jal         func_14F928
label_239b18:
    if (ctx->pc == 0x239B18u) {
        ctx->pc = 0x239B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B14u;
        // 0x239b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239B1Cu;
        goto label_239b1c;
    }
    ctx->pc = 0x239B14u;
    SET_GPR_U32(ctx, 31, 0x239B1Cu);
    ctx->pc = 0x239B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239B14u;
    // 0x239b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x239B14u, 0x239B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B1Cu;
label_239b1c:
    // 0x239b1c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x239b1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_239b20:
    // 0x239b20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x239b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_239b24:
    // 0x239b24: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_239b28:
    if (ctx->pc == 0x239B28u) {
        ctx->pc = 0x239B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B24u;
        // 0x239b28: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239B2Cu;
        goto label_239b2c;
    }
    ctx->pc = 0x239B24u;
    {
        const bool branch_taken_0x239b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239b24) {
            ctx->pc = 0x239B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239B24u;
            // 0x239b28: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239B74u;
            goto label_239b74;
        }
    }
    ctx->pc = 0x239B2Cu;
label_239b2c:
    // 0x239b2c: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x239b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
label_239b30:
    // 0x239b30: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_239b34:
    if (ctx->pc == 0x239B34u) {
        ctx->pc = 0x239B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B30u;
        // 0x239b34: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239B38u;
        goto label_239b38;
    }
    ctx->pc = 0x239B30u;
    {
        const bool branch_taken_0x239b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B30u;
        // 0x239b34: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b30) {
            ctx->pc = 0x239B70u;
            goto label_239b70;
        }
    }
    ctx->pc = 0x239B38u;
label_239b38:
    // 0x239b38: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x239b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_239b3c:
    // 0x239b3c: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x239b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
label_239b40:
    // 0x239b40: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x239b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_239b44:
    // 0x239b44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x239b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_239b48:
    // 0x239b48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x239b48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239b4c:
    // 0x239b4c: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x239b4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_239b50:
    // 0x239b50: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x239b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_239b54:
    // 0x239b54: 0x40f809  jalr        $v0
label_239b58:
    if (ctx->pc == 0x239B58u) {
        ctx->pc = 0x239B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B54u;
        // 0x239b58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239B5Cu;
        goto label_239b5c;
    }
    ctx->pc = 0x239B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x239B5Cu);
        ctx->pc = 0x239B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B54u;
        // 0x239b58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239B54u, 0x239B5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x239B5Cu;
label_239b5c:
    // 0x239b5c: 0x8603054a  lh          $v1, 0x54A($s0)
    ctx->pc = 0x239b5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_239b60:
    // 0x239b60: 0x5c600004  bgtzl       $v1, . + 4 + (0x4 << 2)
label_239b64:
    if (ctx->pc == 0x239B64u) {
        ctx->pc = 0x239B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B60u;
        // 0x239b64: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239B68u;
        goto label_239b68;
    }
    ctx->pc = 0x239B60u;
    {
        const bool branch_taken_0x239b60 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x239b60) {
            ctx->pc = 0x239B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239B60u;
            // 0x239b64: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239B74u;
            goto label_239b74;
        }
    }
    ctx->pc = 0x239B68u;
label_239b68:
    // 0x239b68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_239b6c:
    // 0x239b6c: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x239b6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
label_239b70:
    // 0x239b70: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x239b70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_239b74:
    // 0x239b74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x239b74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_239b78:
    // 0x239b78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x239b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_239b7c:
    // 0x239b7c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x239b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_239b80:
    // 0x239b80: 0x3e00008  jr          $ra
label_239b84:
    if (ctx->pc == 0x239B84u) {
        ctx->pc = 0x239B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B80u;
        // 0x239b84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239B88u;
        goto label_fallthrough_0x239b80;
    }
    ctx->pc = 0x239B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B80u;
        // 0x239b84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x239b80:
    ctx->pc = 0x239B88u;
}
