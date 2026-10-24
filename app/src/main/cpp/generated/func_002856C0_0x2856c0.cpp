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

// Function: func_002856C0
// Address: 0x2856c0 - 0x285c58
void func_002856C0_0x2856c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002856C0_0x2856c0");
#endif

    switch (ctx->pc) {
        case 0x2856c0u: goto label_2856c0;
        case 0x2856c4u: goto label_2856c4;
        case 0x2856c8u: goto label_2856c8;
        case 0x2856ccu: goto label_2856cc;
        case 0x2856d0u: goto label_2856d0;
        case 0x2856d4u: goto label_2856d4;
        case 0x2856d8u: goto label_2856d8;
        case 0x2856dcu: goto label_2856dc;
        case 0x2856e0u: goto label_2856e0;
        case 0x2856e4u: goto label_2856e4;
        case 0x2856e8u: goto label_2856e8;
        case 0x2856ecu: goto label_2856ec;
        case 0x2856f0u: goto label_2856f0;
        case 0x2856f4u: goto label_2856f4;
        case 0x2856f8u: goto label_2856f8;
        case 0x2856fcu: goto label_2856fc;
        case 0x285700u: goto label_285700;
        case 0x285704u: goto label_285704;
        case 0x285708u: goto label_285708;
        case 0x28570cu: goto label_28570c;
        case 0x285710u: goto label_285710;
        case 0x285714u: goto label_285714;
        case 0x285718u: goto label_285718;
        case 0x28571cu: goto label_28571c;
        case 0x285720u: goto label_285720;
        case 0x285724u: goto label_285724;
        case 0x285728u: goto label_285728;
        case 0x28572cu: goto label_28572c;
        case 0x285730u: goto label_285730;
        case 0x285734u: goto label_285734;
        case 0x285738u: goto label_285738;
        case 0x28573cu: goto label_28573c;
        case 0x285740u: goto label_285740;
        case 0x285744u: goto label_285744;
        case 0x285748u: goto label_285748;
        case 0x28574cu: goto label_28574c;
        case 0x285750u: goto label_285750;
        case 0x285754u: goto label_285754;
        case 0x285758u: goto label_285758;
        case 0x28575cu: goto label_28575c;
        case 0x285760u: goto label_285760;
        case 0x285764u: goto label_285764;
        case 0x285768u: goto label_285768;
        case 0x28576cu: goto label_28576c;
        case 0x285770u: goto label_285770;
        case 0x285774u: goto label_285774;
        case 0x285778u: goto label_285778;
        case 0x28577cu: goto label_28577c;
        case 0x285780u: goto label_285780;
        case 0x285784u: goto label_285784;
        case 0x285788u: goto label_285788;
        case 0x28578cu: goto label_28578c;
        case 0x285790u: goto label_285790;
        case 0x285794u: goto label_285794;
        case 0x285798u: goto label_285798;
        case 0x28579cu: goto label_28579c;
        case 0x2857a0u: goto label_2857a0;
        case 0x2857a4u: goto label_2857a4;
        case 0x2857a8u: goto label_2857a8;
        case 0x2857acu: goto label_2857ac;
        case 0x2857b0u: goto label_2857b0;
        case 0x2857b4u: goto label_2857b4;
        case 0x2857b8u: goto label_2857b8;
        case 0x2857bcu: goto label_2857bc;
        case 0x2857c0u: goto label_2857c0;
        case 0x2857c4u: goto label_2857c4;
        case 0x2857c8u: goto label_2857c8;
        case 0x2857ccu: goto label_2857cc;
        case 0x2857d0u: goto label_2857d0;
        case 0x2857d4u: goto label_2857d4;
        case 0x2857d8u: goto label_2857d8;
        case 0x2857dcu: goto label_2857dc;
        case 0x2857e0u: goto label_2857e0;
        case 0x2857e4u: goto label_2857e4;
        case 0x2857e8u: goto label_2857e8;
        case 0x2857ecu: goto label_2857ec;
        case 0x2857f0u: goto label_2857f0;
        case 0x2857f4u: goto label_2857f4;
        case 0x2857f8u: goto label_2857f8;
        case 0x2857fcu: goto label_2857fc;
        case 0x285800u: goto label_285800;
        case 0x285804u: goto label_285804;
        case 0x285808u: goto label_285808;
        case 0x28580cu: goto label_28580c;
        case 0x285810u: goto label_285810;
        case 0x285814u: goto label_285814;
        case 0x285818u: goto label_285818;
        case 0x28581cu: goto label_28581c;
        case 0x285820u: goto label_285820;
        case 0x285824u: goto label_285824;
        case 0x285828u: goto label_285828;
        case 0x28582cu: goto label_28582c;
        case 0x285830u: goto label_285830;
        case 0x285834u: goto label_285834;
        case 0x285838u: goto label_285838;
        case 0x28583cu: goto label_28583c;
        case 0x285840u: goto label_285840;
        case 0x285844u: goto label_285844;
        case 0x285848u: goto label_285848;
        case 0x28584cu: goto label_28584c;
        case 0x285850u: goto label_285850;
        case 0x285854u: goto label_285854;
        case 0x285858u: goto label_285858;
        case 0x28585cu: goto label_28585c;
        case 0x285860u: goto label_285860;
        case 0x285864u: goto label_285864;
        case 0x285868u: goto label_285868;
        case 0x28586cu: goto label_28586c;
        case 0x285870u: goto label_285870;
        case 0x285874u: goto label_285874;
        case 0x285878u: goto label_285878;
        case 0x28587cu: goto label_28587c;
        case 0x285880u: goto label_285880;
        case 0x285884u: goto label_285884;
        case 0x285888u: goto label_285888;
        case 0x28588cu: goto label_28588c;
        case 0x285890u: goto label_285890;
        case 0x285894u: goto label_285894;
        case 0x285898u: goto label_285898;
        case 0x28589cu: goto label_28589c;
        case 0x2858a0u: goto label_2858a0;
        case 0x2858a4u: goto label_2858a4;
        case 0x2858a8u: goto label_2858a8;
        case 0x2858acu: goto label_2858ac;
        case 0x2858b0u: goto label_2858b0;
        case 0x2858b4u: goto label_2858b4;
        case 0x2858b8u: goto label_2858b8;
        case 0x2858bcu: goto label_2858bc;
        case 0x2858c0u: goto label_2858c0;
        case 0x2858c4u: goto label_2858c4;
        case 0x2858c8u: goto label_2858c8;
        case 0x2858ccu: goto label_2858cc;
        case 0x2858d0u: goto label_2858d0;
        case 0x2858d4u: goto label_2858d4;
        case 0x2858d8u: goto label_2858d8;
        case 0x2858dcu: goto label_2858dc;
        case 0x2858e0u: goto label_2858e0;
        case 0x2858e4u: goto label_2858e4;
        case 0x2858e8u: goto label_2858e8;
        case 0x2858ecu: goto label_2858ec;
        case 0x2858f0u: goto label_2858f0;
        case 0x2858f4u: goto label_2858f4;
        case 0x2858f8u: goto label_2858f8;
        case 0x2858fcu: goto label_2858fc;
        case 0x285900u: goto label_285900;
        case 0x285904u: goto label_285904;
        case 0x285908u: goto label_285908;
        case 0x28590cu: goto label_28590c;
        case 0x285910u: goto label_285910;
        case 0x285914u: goto label_285914;
        case 0x285918u: goto label_285918;
        case 0x28591cu: goto label_28591c;
        case 0x285920u: goto label_285920;
        case 0x285924u: goto label_285924;
        case 0x285928u: goto label_285928;
        case 0x28592cu: goto label_28592c;
        case 0x285930u: goto label_285930;
        case 0x285934u: goto label_285934;
        case 0x285938u: goto label_285938;
        case 0x28593cu: goto label_28593c;
        case 0x285940u: goto label_285940;
        case 0x285944u: goto label_285944;
        case 0x285948u: goto label_285948;
        case 0x28594cu: goto label_28594c;
        case 0x285950u: goto label_285950;
        case 0x285954u: goto label_285954;
        case 0x285958u: goto label_285958;
        case 0x28595cu: goto label_28595c;
        case 0x285960u: goto label_285960;
        case 0x285964u: goto label_285964;
        case 0x285968u: goto label_285968;
        case 0x28596cu: goto label_28596c;
        case 0x285970u: goto label_285970;
        case 0x285974u: goto label_285974;
        case 0x285978u: goto label_285978;
        case 0x28597cu: goto label_28597c;
        case 0x285980u: goto label_285980;
        case 0x285984u: goto label_285984;
        case 0x285988u: goto label_285988;
        case 0x28598cu: goto label_28598c;
        case 0x285990u: goto label_285990;
        case 0x285994u: goto label_285994;
        case 0x285998u: goto label_285998;
        case 0x28599cu: goto label_28599c;
        case 0x2859a0u: goto label_2859a0;
        case 0x2859a4u: goto label_2859a4;
        case 0x2859a8u: goto label_2859a8;
        case 0x2859acu: goto label_2859ac;
        case 0x2859b0u: goto label_2859b0;
        case 0x2859b4u: goto label_2859b4;
        case 0x2859b8u: goto label_2859b8;
        case 0x2859bcu: goto label_2859bc;
        case 0x2859c0u: goto label_2859c0;
        case 0x2859c4u: goto label_2859c4;
        case 0x2859c8u: goto label_2859c8;
        case 0x2859ccu: goto label_2859cc;
        case 0x2859d0u: goto label_2859d0;
        case 0x2859d4u: goto label_2859d4;
        case 0x2859d8u: goto label_2859d8;
        case 0x2859dcu: goto label_2859dc;
        case 0x2859e0u: goto label_2859e0;
        case 0x2859e4u: goto label_2859e4;
        case 0x2859e8u: goto label_2859e8;
        case 0x2859ecu: goto label_2859ec;
        case 0x2859f0u: goto label_2859f0;
        case 0x2859f4u: goto label_2859f4;
        case 0x2859f8u: goto label_2859f8;
        case 0x2859fcu: goto label_2859fc;
        case 0x285a00u: goto label_285a00;
        case 0x285a04u: goto label_285a04;
        case 0x285a08u: goto label_285a08;
        case 0x285a0cu: goto label_285a0c;
        case 0x285a10u: goto label_285a10;
        case 0x285a14u: goto label_285a14;
        case 0x285a18u: goto label_285a18;
        case 0x285a1cu: goto label_285a1c;
        case 0x285a20u: goto label_285a20;
        case 0x285a24u: goto label_285a24;
        case 0x285a28u: goto label_285a28;
        case 0x285a2cu: goto label_285a2c;
        case 0x285a30u: goto label_285a30;
        case 0x285a34u: goto label_285a34;
        case 0x285a38u: goto label_285a38;
        case 0x285a3cu: goto label_285a3c;
        case 0x285a40u: goto label_285a40;
        case 0x285a44u: goto label_285a44;
        case 0x285a48u: goto label_285a48;
        case 0x285a4cu: goto label_285a4c;
        case 0x285a50u: goto label_285a50;
        case 0x285a54u: goto label_285a54;
        case 0x285a58u: goto label_285a58;
        case 0x285a5cu: goto label_285a5c;
        case 0x285a60u: goto label_285a60;
        case 0x285a64u: goto label_285a64;
        case 0x285a68u: goto label_285a68;
        case 0x285a6cu: goto label_285a6c;
        case 0x285a70u: goto label_285a70;
        case 0x285a74u: goto label_285a74;
        case 0x285a78u: goto label_285a78;
        case 0x285a7cu: goto label_285a7c;
        case 0x285a80u: goto label_285a80;
        case 0x285a84u: goto label_285a84;
        case 0x285a88u: goto label_285a88;
        case 0x285a8cu: goto label_285a8c;
        case 0x285a90u: goto label_285a90;
        case 0x285a94u: goto label_285a94;
        case 0x285a98u: goto label_285a98;
        case 0x285a9cu: goto label_285a9c;
        case 0x285aa0u: goto label_285aa0;
        case 0x285aa4u: goto label_285aa4;
        case 0x285aa8u: goto label_285aa8;
        case 0x285aacu: goto label_285aac;
        case 0x285ab0u: goto label_285ab0;
        case 0x285ab4u: goto label_285ab4;
        case 0x285ab8u: goto label_285ab8;
        case 0x285abcu: goto label_285abc;
        case 0x285ac0u: goto label_285ac0;
        case 0x285ac4u: goto label_285ac4;
        case 0x285ac8u: goto label_285ac8;
        case 0x285accu: goto label_285acc;
        case 0x285ad0u: goto label_285ad0;
        case 0x285ad4u: goto label_285ad4;
        case 0x285ad8u: goto label_285ad8;
        case 0x285adcu: goto label_285adc;
        case 0x285ae0u: goto label_285ae0;
        case 0x285ae4u: goto label_285ae4;
        case 0x285ae8u: goto label_285ae8;
        case 0x285aecu: goto label_285aec;
        case 0x285af0u: goto label_285af0;
        case 0x285af4u: goto label_285af4;
        case 0x285af8u: goto label_285af8;
        case 0x285afcu: goto label_285afc;
        case 0x285b00u: goto label_285b00;
        case 0x285b04u: goto label_285b04;
        case 0x285b08u: goto label_285b08;
        case 0x285b0cu: goto label_285b0c;
        case 0x285b10u: goto label_285b10;
        case 0x285b14u: goto label_285b14;
        case 0x285b18u: goto label_285b18;
        case 0x285b1cu: goto label_285b1c;
        case 0x285b20u: goto label_285b20;
        case 0x285b24u: goto label_285b24;
        case 0x285b28u: goto label_285b28;
        case 0x285b2cu: goto label_285b2c;
        case 0x285b30u: goto label_285b30;
        case 0x285b34u: goto label_285b34;
        case 0x285b38u: goto label_285b38;
        case 0x285b3cu: goto label_285b3c;
        case 0x285b40u: goto label_285b40;
        case 0x285b44u: goto label_285b44;
        case 0x285b48u: goto label_285b48;
        case 0x285b4cu: goto label_285b4c;
        case 0x285b50u: goto label_285b50;
        case 0x285b54u: goto label_285b54;
        case 0x285b58u: goto label_285b58;
        case 0x285b5cu: goto label_285b5c;
        case 0x285b60u: goto label_285b60;
        case 0x285b64u: goto label_285b64;
        case 0x285b68u: goto label_285b68;
        case 0x285b6cu: goto label_285b6c;
        case 0x285b70u: goto label_285b70;
        case 0x285b74u: goto label_285b74;
        case 0x285b78u: goto label_285b78;
        case 0x285b7cu: goto label_285b7c;
        case 0x285b80u: goto label_285b80;
        case 0x285b84u: goto label_285b84;
        case 0x285b88u: goto label_285b88;
        case 0x285b8cu: goto label_285b8c;
        case 0x285b90u: goto label_285b90;
        case 0x285b94u: goto label_285b94;
        case 0x285b98u: goto label_285b98;
        case 0x285b9cu: goto label_285b9c;
        case 0x285ba0u: goto label_285ba0;
        case 0x285ba4u: goto label_285ba4;
        case 0x285ba8u: goto label_285ba8;
        case 0x285bacu: goto label_285bac;
        case 0x285bb0u: goto label_285bb0;
        case 0x285bb4u: goto label_285bb4;
        case 0x285bb8u: goto label_285bb8;
        case 0x285bbcu: goto label_285bbc;
        case 0x285bc0u: goto label_285bc0;
        case 0x285bc4u: goto label_285bc4;
        case 0x285bc8u: goto label_285bc8;
        case 0x285bccu: goto label_285bcc;
        case 0x285bd0u: goto label_285bd0;
        case 0x285bd4u: goto label_285bd4;
        case 0x285bd8u: goto label_285bd8;
        case 0x285bdcu: goto label_285bdc;
        case 0x285be0u: goto label_285be0;
        case 0x285be4u: goto label_285be4;
        case 0x285be8u: goto label_285be8;
        case 0x285becu: goto label_285bec;
        case 0x285bf0u: goto label_285bf0;
        case 0x285bf4u: goto label_285bf4;
        case 0x285bf8u: goto label_285bf8;
        case 0x285bfcu: goto label_285bfc;
        case 0x285c00u: goto label_285c00;
        case 0x285c04u: goto label_285c04;
        case 0x285c08u: goto label_285c08;
        case 0x285c0cu: goto label_285c0c;
        case 0x285c10u: goto label_285c10;
        case 0x285c14u: goto label_285c14;
        case 0x285c18u: goto label_285c18;
        case 0x285c1cu: goto label_285c1c;
        case 0x285c20u: goto label_285c20;
        case 0x285c24u: goto label_285c24;
        case 0x285c28u: goto label_285c28;
        case 0x285c2cu: goto label_285c2c;
        case 0x285c30u: goto label_285c30;
        case 0x285c34u: goto label_285c34;
        case 0x285c38u: goto label_285c38;
        case 0x285c3cu: goto label_285c3c;
        case 0x285c40u: goto label_285c40;
        case 0x285c44u: goto label_285c44;
        case 0x285c48u: goto label_285c48;
        case 0x285c4cu: goto label_285c4c;
        case 0x285c50u: goto label_285c50;
        case 0x285c54u: goto label_285c54;
        default: break;
    }

    ctx->pc = 0x2856c0u;

label_2856c0:
    // 0x2856c0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2856c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_2856c4:
    // 0x2856c4: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2856c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2856c8:
    // 0x2856c8: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x2856c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31352)));
label_2856cc:
    // 0x2856cc: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x2856ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_2856d0:
    // 0x2856d0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2856d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2856d4:
    // 0x2856d4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2856d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2856d8:
    // 0x2856d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2856d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2856dc:
    // 0x2856dc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2856dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2856e0:
    // 0x2856e0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2856e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_2856e4:
    // 0x2856e4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2856e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_2856e8:
    // 0x2856e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2856e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2856ec:
    // 0x2856ec: 0x14600152  bnez        $v1, . + 4 + (0x152 << 2)
label_2856f0:
    if (ctx->pc == 0x2856F0u) {
        ctx->pc = 0x2856F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2856ECu;
        // 0x2856f0: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2856F4u;
        goto label_2856f4;
    }
    ctx->pc = 0x2856ECu;
    {
        const bool branch_taken_0x2856ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2856F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2856ECu;
        // 0x2856f0: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2856ec) {
            ctx->pc = 0x285C38u;
            goto label_285c38;
        }
    }
    ctx->pc = 0x2856F4u;
label_2856f4:
    // 0x2856f4: 0xc0b6dac  jal         func_2DB6B0
label_2856f8:
    if (ctx->pc == 0x2856F8u) {
        ctx->pc = 0x2856F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2856F4u;
        // 0x2856f8: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2856FCu;
        goto label_2856fc;
    }
    ctx->pc = 0x2856F4u;
    SET_GPR_U32(ctx, 31, 0x2856FCu);
    ctx->pc = 0x2856F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2856F4u;
    // 0x2856f8: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2856F4u, 0x2856FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2856FCu;
label_2856fc:
    // 0x2856fc: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x2856fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_285700:
    // 0x285700: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x285700u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_285704:
    // 0x285704: 0xc07dfac  jal         func_1F7EB0
label_285708:
    if (ctx->pc == 0x285708u) {
        ctx->pc = 0x285708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285704u;
        // 0x285708: 0x8e2500f0  lw          $a1, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28570Cu;
        goto label_28570c;
    }
    ctx->pc = 0x285704u;
    SET_GPR_U32(ctx, 31, 0x28570Cu);
    ctx->pc = 0x285708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285704u;
    // 0x285708: 0x8e2500f0  lw          $a1, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x285704u, 0x28570Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28570Cu;
label_28570c:
    // 0x28570c: 0xe6200618  swc1        $f0, 0x618($s1)
    ctx->pc = 0x28570cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1560), bits); }
label_285710:
    // 0x285710: 0xc0a1716  jal         func_285C58
label_285714:
    if (ctx->pc == 0x285714u) {
        ctx->pc = 0x285714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285710u;
        // 0x285714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285718u;
        goto label_285718;
    }
    ctx->pc = 0x285710u;
    SET_GPR_U32(ctx, 31, 0x285718u);
    ctx->pc = 0x285714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285710u;
    // 0x285714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285C58u, 0x285710u, 0x285718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285718u;
label_285718:
    // 0x285718: 0x8e2315b0  lw          $v1, 0x15B0($s1)
    ctx->pc = 0x285718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_28571c:
    // 0x28571c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x28571cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_285720:
    // 0x285720: 0x3442ffdd  ori         $v0, $v0, 0xFFDD
    ctx->pc = 0x285720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65501);
label_285724:
    // 0x285724: 0x26042fc0  addiu       $a0, $s0, 0x2FC0
    ctx->pc = 0x285724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12224));
label_285728:
    // 0x285728: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x285728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_28572c:
    // 0x28572c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28572cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285730:
    // 0x285730: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x285730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
label_285734:
    // 0x285734: 0xc04d476  jal         func_1351D8
label_285738:
    if (ctx->pc == 0x285738u) {
        ctx->pc = 0x285738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285734u;
        // 0x285738: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28573Cu;
        goto label_28573c;
    }
    ctx->pc = 0x285734u;
    SET_GPR_U32(ctx, 31, 0x28573Cu);
    ctx->pc = 0x285738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285734u;
    // 0x285738: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x285734u, 0x28573Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28573Cu;
label_28573c:
    // 0x28573c: 0xc62115bc  lwc1        $f1, 0x15BC($s1)
    ctx->pc = 0x28573cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_285740:
    // 0x285740: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x285740u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_285744:
    // 0x285744: 0x0  nop
    ctx->pc = 0x285744u;
    // NOP
label_285748:
    // 0x285748: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x285748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28574c:
    // 0x28574c: 0x0  nop
    ctx->pc = 0x28574cu;
    // NOP
label_285750:
    // 0x285750: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_285754:
    if (ctx->pc == 0x285754u) {
        ctx->pc = 0x285754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285750u;
        // 0x285754: 0xc62115c0  lwc1        $f1, 0x15C0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x285758u;
        goto label_285758;
    }
    ctx->pc = 0x285750u;
    {
        const bool branch_taken_0x285750 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x285750) {
            ctx->pc = 0x285754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285750u;
            // 0x285754: 0xc62115c0  lwc1        $f1, 0x15C0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x285768u;
            goto label_285768;
        }
    }
    ctx->pc = 0x285758u;
label_285758:
    // 0x285758: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x285758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28575c:
    // 0x28575c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28575cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_285760:
    // 0x285760: 0xe62015bc  swc1        $f0, 0x15BC($s1)
    ctx->pc = 0x285760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5564), bits); }
label_285764:
    // 0x285764: 0xc62115c0  lwc1        $f1, 0x15C0($s1)
    ctx->pc = 0x285764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_285768:
    // 0x285768: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x285768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28576c:
    // 0x28576c: 0x0  nop
    ctx->pc = 0x28576cu;
    // NOP
label_285770:
    // 0x285770: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_285774:
    if (ctx->pc == 0x285774u) {
        ctx->pc = 0x285774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285770u;
        // 0x285774: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285778u;
        goto label_285778;
    }
    ctx->pc = 0x285770u;
    {
        const bool branch_taken_0x285770 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x285770) {
            ctx->pc = 0x285774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285770u;
            // 0x285774: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285788u;
            goto label_285788;
        }
    }
    ctx->pc = 0x285778u;
label_285778:
    // 0x285778: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x285778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28577c:
    // 0x28577c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28577cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_285780:
    // 0x285780: 0xe62015c0  swc1        $f0, 0x15C0($s1)
    ctx->pc = 0x285780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
label_285784:
    // 0x285784: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x285784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_285788:
    // 0x285788: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x285788u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_28578c:
    // 0x28578c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x28578cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_285790:
    // 0x285790: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x285790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_285794:
    // 0x285794: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x285794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_285798:
    // 0x285798: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x285798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_28579c:
    // 0x28579c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x28579cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2857a0:
    // 0x2857a0: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x2857a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
label_2857a4:
    // 0x2857a4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2857a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_2857a8:
    // 0x2857a8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2857a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2857ac:
    // 0x2857ac: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2857acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2857b0:
    // 0x2857b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2857b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2857b4:
    // 0x2857b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2857b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2857b8:
    // 0x2857b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2857b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2857bc:
    // 0x2857bc: 0xc0a4404  jal         func_291010
label_2857c0:
    if (ctx->pc == 0x2857C0u) {
        ctx->pc = 0x2857C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857BCu;
        // 0x2857c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2857C4u;
        goto label_2857c4;
    }
    ctx->pc = 0x2857BCu;
    SET_GPR_U32(ctx, 31, 0x2857C4u);
    ctx->pc = 0x2857C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2857BCu;
    // 0x2857c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x2857BCu, 0x2857C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2857C4u;
label_2857c4:
    // 0x2857c4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2857c8:
    if (ctx->pc == 0x2857C8u) {
        ctx->pc = 0x2857C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857C4u;
        // 0x2857c8: 0x8e240258  lw          $a0, 0x258($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2857CCu;
        goto label_2857cc;
    }
    ctx->pc = 0x2857C4u;
    {
        const bool branch_taken_0x2857c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2857c4) {
            ctx->pc = 0x2857C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2857C4u;
            // 0x2857c8: 0x8e240258  lw          $a0, 0x258($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2857E0u;
            goto label_2857e0;
        }
    }
    ctx->pc = 0x2857CCu;
label_2857cc:
    // 0x2857cc: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x2857ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
label_2857d0:
    // 0x2857d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2857d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2857d4:
    // 0x2857d4: 0x0  nop
    ctx->pc = 0x2857d4u;
    // NOP
label_2857d8:
    // 0x2857d8: 0xe62015c0  swc1        $f0, 0x15C0($s1)
    ctx->pc = 0x2857d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
label_2857dc:
    // 0x2857dc: 0x8e240258  lw          $a0, 0x258($s1)
    ctx->pc = 0x2857dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_2857e0:
    // 0x2857e0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2857e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_2857e4:
    // 0x2857e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2857e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2857e8:
    // 0x2857e8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2857e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2857ec:
    // 0x2857ec: 0x922502f4  lbu         $a1, 0x2F4($s1)
    ctx->pc = 0x2857ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
label_2857f0:
    // 0x2857f0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2857f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_2857f4:
    // 0x2857f4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2857f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2857f8:
    // 0x2857f8: 0xae240258  sw          $a0, 0x258($s1)
    ctx->pc = 0x2857f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 4));
label_2857fc:
    // 0x2857fc: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2857fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_285800:
    // 0x285800: 0x246303e0  addiu       $v1, $v1, 0x3E0
    ctx->pc = 0x285800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 992));
label_285804:
    // 0x285804: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x285804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_285808:
    // 0x285808: 0x84860002  lh          $a2, 0x2($a0)
    ctx->pc = 0x285808u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_28580c:
    // 0x28580c: 0x4c0000a  bltz        $a2, . + 4 + (0xA << 2)
label_285810:
    if (ctx->pc == 0x285810u) {
        ctx->pc = 0x285810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28580Cu;
        // 0x285810: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285814u;
        goto label_285814;
    }
    ctx->pc = 0x28580Cu;
    {
        const bool branch_taken_0x28580c = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x285810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28580Cu;
        // 0x285810: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28580c) {
            ctx->pc = 0x285838u;
            goto label_285838;
        }
    }
    ctx->pc = 0x285814u;
label_285814:
    // 0x285814: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x285814u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_285818:
    // 0x285818: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x285818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_28581c:
    // 0x28581c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28581cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_285820:
    // 0x285820: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x285820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_285824:
    // 0x285824: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x285824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_285828:
    // 0x285828: 0xdc72fff8  ld          $s2, -0x8($v1)
    ctx->pc = 0x285828u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_28582c:
    // 0x28582c: 0x12283f  dsra32      $a1, $s2, 0
    ctx->pc = 0x28582cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 18) >> (32 + 0));
label_285830:
    // 0x285830: 0x10000003  b           . + 4 + (0x3 << 2)
label_285834:
    if (ctx->pc == 0x285834u) {
        ctx->pc = 0x285834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285830u;
        // 0x285834: 0x922202f4  lbu         $v0, 0x2F4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285838u;
        goto label_285838;
    }
    ctx->pc = 0x285830u;
    {
        const bool branch_taken_0x285830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285830u;
        // 0x285834: 0x922202f4  lbu         $v0, 0x2F4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285830) {
            ctx->pc = 0x285840u;
            goto label_285840;
        }
    }
    ctx->pc = 0x285838u;
label_285838:
    // 0x285838: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x285838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_28583c:
    // 0x28583c: 0x922202f4  lbu         $v0, 0x2F4($s1)
    ctx->pc = 0x28583cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
label_285840:
    // 0x285840: 0x24e303e0  addiu       $v1, $a3, 0x3E0
    ctx->pc = 0x285840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 992));
label_285844:
    // 0x285844: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x285844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_285848:
    // 0x285848: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x285848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28584c:
    // 0x28584c: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
label_285850:
    if (ctx->pc == 0x285850u) {
        ctx->pc = 0x285850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28584Cu;
        // 0x285850: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285854u;
        goto label_285854;
    }
    ctx->pc = 0x28584Cu;
    {
        const bool branch_taken_0x28584c = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x285850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28584Cu;
        // 0x285850: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28584c) {
            ctx->pc = 0x285868u;
            goto label_285868;
        }
    }
    ctx->pc = 0x285854u;
label_285854:
    // 0x285854: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x285854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_285858:
    // 0x285858: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x285858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_28585c:
    // 0x28585c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x28585cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_285860:
    // 0x285860: 0x10000002  b           . + 4 + (0x2 << 2)
label_285864:
    if (ctx->pc == 0x285864u) {
        ctx->pc = 0x285864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285860u;
        // 0x285864: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285868u;
        goto label_285868;
    }
    ctx->pc = 0x285860u;
    {
        const bool branch_taken_0x285860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285860u;
        // 0x285864: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285860) {
            ctx->pc = 0x28586Cu;
            goto label_28586c;
        }
    }
    ctx->pc = 0x285868u;
label_285868:
    // 0x285868: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x285868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28586c:
    // 0x28586c: 0xa0f809  jalr        $a1
label_285870:
    if (ctx->pc == 0x285870u) {
        ctx->pc = 0x285870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28586Cu;
        // 0x285870: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285874u;
        goto label_285874;
    }
    ctx->pc = 0x28586Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x285874u);
        ctx->pc = 0x285870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28586Cu;
        // 0x285870: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28586Cu, 0x285874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285874u;
label_285874:
    // 0x285874: 0x8e250250  lw          $a1, 0x250($s1)
    ctx->pc = 0x285874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_285878:
    // 0x285878: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x285878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_28587c:
    // 0x28587c: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x28587cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_285880:
    // 0x285880: 0xde2402f0  ld          $a0, 0x2F0($s1)
    ctx->pc = 0x285880u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 752)));
label_285884:
    // 0x285884: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x285884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_285888:
    // 0x285888: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x285888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_28588c:
    // 0x28588c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x28588cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_285890:
    // 0x285890: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x285890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_285894:
    // 0x285894: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x285894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
label_285898:
    // 0x285898: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x285898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
label_28589c:
    // 0x28589c: 0x10820060  beq         $a0, $v0, . + 4 + (0x60 << 2)
label_2858a0:
    if (ctx->pc == 0x2858A0u) {
        ctx->pc = 0x2858A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28589Cu;
        // 0x2858a0: 0xae250250  sw          $a1, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2858A4u;
        goto label_2858a4;
    }
    ctx->pc = 0x28589Cu;
    {
        const bool branch_taken_0x28589c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2858A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28589Cu;
        // 0x2858a0: 0xae250250  sw          $a1, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28589c) {
            ctx->pc = 0x285A20u;
            goto label_285a20;
        }
    }
    ctx->pc = 0x2858A4u;
label_2858a4:
    // 0x2858a4: 0xc6200618  lwc1        $f0, 0x618($s1)
    ctx->pc = 0x2858a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2858a8:
    // 0x2858a8: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x2858a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
label_2858ac:
    // 0x2858ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2858acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2858b0:
    // 0x2858b0: 0x0  nop
    ctx->pc = 0x2858b0u;
    // NOP
label_2858b4:
    // 0x2858b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2858b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2858b8:
    // 0x2858b8: 0x0  nop
    ctx->pc = 0x2858b8u;
    // NOP
label_2858bc:
    // 0x2858bc: 0x45020038  bc1fl       . + 4 + (0x38 << 2)
label_2858c0:
    if (ctx->pc == 0x2858C0u) {
        ctx->pc = 0x2858C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858BCu;
        // 0x2858c0: 0xc620024c  lwc1        $f0, 0x24C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2858C4u;
        goto label_2858c4;
    }
    ctx->pc = 0x2858BCu;
    {
        const bool branch_taken_0x2858bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2858bc) {
            ctx->pc = 0x2858C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2858BCu;
            // 0x2858c0: 0xc620024c  lwc1        $f0, 0x24C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2859A0u;
            goto label_2859a0;
        }
    }
    ctx->pc = 0x2858C4u;
label_2858c4:
    // 0x2858c4: 0x8e2315b0  lw          $v1, 0x15B0($s1)
    ctx->pc = 0x2858c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_2858c8:
    // 0x2858c8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2858c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2858cc:
    // 0x2858cc: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
label_2858d0:
    if (ctx->pc == 0x2858D0u) {
        ctx->pc = 0x2858D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858CCu;
        // 0x2858d0: 0xc620024c  lwc1        $f0, 0x24C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2858D4u;
        goto label_2858d4;
    }
    ctx->pc = 0x2858CCu;
    {
        const bool branch_taken_0x2858cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2858cc) {
            ctx->pc = 0x2858D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2858CCu;
            // 0x2858d0: 0xc620024c  lwc1        $f0, 0x24C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2859A0u;
            goto label_2859a0;
        }
    }
    ctx->pc = 0x2858D4u;
label_2858d4:
    // 0x2858d4: 0x92221604  lbu         $v0, 0x1604($s1)
    ctx->pc = 0x2858d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5636)));
label_2858d8:
    // 0x2858d8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_2858dc:
    if (ctx->pc == 0x2858DCu) {
        ctx->pc = 0x2858DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858D8u;
        // 0x2858dc: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2858E0u;
        goto label_2858e0;
    }
    ctx->pc = 0x2858D8u;
    {
        const bool branch_taken_0x2858d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2858DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858D8u;
        // 0x2858dc: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2858d8) {
            ctx->pc = 0x28599Cu;
            goto label_28599c;
        }
    }
    ctx->pc = 0x2858E0u;
label_2858e0:
    // 0x2858e0: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_2858e4:
    if (ctx->pc == 0x2858E4u) {
        ctx->pc = 0x2858E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858E0u;
        // 0x2858e4: 0xc620024c  lwc1        $f0, 0x24C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2858E8u;
        goto label_2858e8;
    }
    ctx->pc = 0x2858E0u;
    {
        const bool branch_taken_0x2858e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2858E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858E0u;
        // 0x2858e4: 0xc620024c  lwc1        $f0, 0x24C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2858e0) {
            ctx->pc = 0x2859A0u;
            goto label_2859a0;
        }
    }
    ctx->pc = 0x2858E8u;
label_2858e8:
    // 0x2858e8: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_2858ec:
    if (ctx->pc == 0x2858ECu) {
        ctx->pc = 0x2858F0u;
        goto label_2858f0;
    }
    ctx->pc = 0x2858E8u;
    {
        const bool branch_taken_0x2858e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2858e8) {
            ctx->pc = 0x285958u;
            goto label_285958;
        }
    }
    ctx->pc = 0x2858F0u;
label_2858f0:
    // 0x2858f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2858f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2858f4:
    // 0x2858f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2858f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2858f8:
    // 0x2858f8: 0x0  nop
    ctx->pc = 0x2858f8u;
    // NOP
label_2858fc:
    // 0x2858fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2858fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_285900:
    // 0x285900: 0x0  nop
    ctx->pc = 0x285900u;
    // NOP
label_285904:
    // 0x285904: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_285908:
    if (ctx->pc == 0x285908u) {
        ctx->pc = 0x285908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285904u;
        // 0x285908: 0xe621024c  swc1        $f1, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28590Cu;
        goto label_28590c;
    }
    ctx->pc = 0x285904u;
    {
        const bool branch_taken_0x285904 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x285904) {
            ctx->pc = 0x285908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285904u;
            // 0x285908: 0xe621024c  swc1        $f1, 0x24C($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28590Cu;
            goto label_28590c;
        }
    }
    ctx->pc = 0x28590Cu;
label_28590c:
    // 0x28590c: 0xc620024c  lwc1        $f0, 0x24C($s1)
    ctx->pc = 0x28590cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_285910:
    // 0x285910: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x285910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_285914:
    // 0x285914: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x285914u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_285918:
    // 0x285918: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x285918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28591c:
    // 0x28591c: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x28591cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_285920:
    // 0x285920: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x285920u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_285924:
    // 0x285924: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x285924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_285928:
    // 0x285928: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x285928u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_28592c:
    // 0x28592c: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x28592cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_285930:
    // 0x285930: 0x34620010  ori         $v0, $v1, 0x10
    ctx->pc = 0x285930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_285934:
    // 0x285934: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x285934u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_285938:
    // 0x285938: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x285938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
label_28593c:
    // 0x28593c: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
label_285940:
    if (ctx->pc == 0x285940u) {
        ctx->pc = 0x285940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28593Cu;
        // 0x285940: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x285944u;
        goto label_285944;
    }
    ctx->pc = 0x28593Cu;
    {
        const bool branch_taken_0x28593c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x285940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28593Cu;
        // 0x285940: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28593c) {
            ctx->pc = 0x2859F0u;
            goto label_2859f0;
        }
    }
    ctx->pc = 0x285944u;
label_285944:
    // 0x285944: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x285944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_285948:
    // 0x285948: 0x34630012  ori         $v1, $v1, 0x12
    ctx->pc = 0x285948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18);
label_28594c:
    // 0x28594c: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x28594cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
label_285950:
    // 0x285950: 0x10000021  b           . + 4 + (0x21 << 2)
label_285954:
    if (ctx->pc == 0x285954u) {
        ctx->pc = 0x285954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285950u;
        // 0x285954: 0xae20024c  sw          $zero, 0x24C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285958u;
        goto label_285958;
    }
    ctx->pc = 0x285950u;
    {
        const bool branch_taken_0x285950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285950u;
        // 0x285954: 0xae20024c  sw          $zero, 0x24C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285950) {
            ctx->pc = 0x2859D8u;
            goto label_2859d8;
        }
    }
    ctx->pc = 0x285958u;
label_285958:
    // 0x285958: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x285958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_28595c:
    // 0x28595c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28595cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_285960:
    // 0x285960: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x285960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_285964:
    // 0x285964: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x285964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_285968:
    // 0x285968: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x285968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_28596c:
    // 0x28596c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28596cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_285970:
    // 0x285970: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x285970u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_285974:
    // 0x285974: 0x0  nop
    ctx->pc = 0x285974u;
    // NOP
label_285978:
    // 0x285978: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_28597c:
    if (ctx->pc == 0x28597Cu) {
        ctx->pc = 0x28597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285978u;
        // 0x28597c: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x285980u;
        goto label_285980;
    }
    ctx->pc = 0x285978u;
    {
        const bool branch_taken_0x285978 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285978u;
        // 0x28597c: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x285978) {
            ctx->pc = 0x285994u;
            goto label_285994;
        }
    }
    ctx->pc = 0x285980u;
label_285980:
    // 0x285980: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x285980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_285984:
    // 0x285984: 0xe622024c  swc1        $f2, 0x24C($s1)
    ctx->pc = 0x285984u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
label_285988:
    // 0x285988: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x285988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
label_28598c:
    // 0x28598c: 0x10000017  b           . + 4 + (0x17 << 2)
label_285990:
    if (ctx->pc == 0x285990u) {
        ctx->pc = 0x285990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28598Cu;
        // 0x285990: 0xa21024  and         $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285994u;
        goto label_285994;
    }
    ctx->pc = 0x28598Cu;
    {
        const bool branch_taken_0x28598c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28598Cu;
        // 0x285990: 0xa21024  and         $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28598c) {
            ctx->pc = 0x2859ECu;
            goto label_2859ec;
        }
    }
    ctx->pc = 0x285994u;
label_285994:
    // 0x285994: 0x10000015  b           . + 4 + (0x15 << 2)
label_285998:
    if (ctx->pc == 0x285998u) {
        ctx->pc = 0x285998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285994u;
        // 0x285998: 0x34a20010  ori         $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28599Cu;
        goto label_28599c;
    }
    ctx->pc = 0x285994u;
    {
        const bool branch_taken_0x285994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285994u;
        // 0x285998: 0x34a20010  ori         $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285994) {
            ctx->pc = 0x2859ECu;
            goto label_2859ec;
        }
    }
    ctx->pc = 0x28599Cu;
label_28599c:
    // 0x28599c: 0xc620024c  lwc1        $f0, 0x24C($s1)
    ctx->pc = 0x28599cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2859a0:
    // 0x2859a0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2859a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2859a4:
    // 0x2859a4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2859a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2859a8:
    // 0x2859a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2859a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2859ac:
    // 0x2859ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2859acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2859b0:
    // 0x2859b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2859b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2859b4:
    // 0x2859b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2859b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2859b8:
    // 0x2859b8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2859b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2859bc:
    // 0x2859bc: 0x0  nop
    ctx->pc = 0x2859bcu;
    // NOP
label_2859c0:
    // 0x2859c0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_2859c4:
    if (ctx->pc == 0x2859C4u) {
        ctx->pc = 0x2859C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859C0u;
        // 0x2859c4: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2859C8u;
        goto label_2859c8;
    }
    ctx->pc = 0x2859C0u;
    {
        const bool branch_taken_0x2859c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2859C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859C0u;
        // 0x2859c4: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859c0) {
            ctx->pc = 0x2859E4u;
            goto label_2859e4;
        }
    }
    ctx->pc = 0x2859C8u;
label_2859c8:
    // 0x2859c8: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x2859c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_2859cc:
    // 0x2859cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2859ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2859d0:
    // 0x2859d0: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x2859d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
label_2859d4:
    // 0x2859d4: 0xe622024c  swc1        $f2, 0x24C($s1)
    ctx->pc = 0x2859d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
label_2859d8:
    // 0x2859d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2859d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2859dc:
    // 0x2859dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_2859e0:
    if (ctx->pc == 0x2859E0u) {
        ctx->pc = 0x2859E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859DCu;
        // 0x2859e0: 0xae230250  sw          $v1, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2859E4u;
        goto label_2859e4;
    }
    ctx->pc = 0x2859DCu;
    {
        const bool branch_taken_0x2859dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2859E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859DCu;
        // 0x2859e0: 0xae230250  sw          $v1, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859dc) {
            ctx->pc = 0x2859F0u;
            goto label_2859f0;
        }
    }
    ctx->pc = 0x2859E4u;
label_2859e4:
    // 0x2859e4: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x2859e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_2859e8:
    // 0x2859e8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2859e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_2859ec:
    // 0x2859ec: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x2859ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
label_2859f0:
    // 0x2859f0: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x2859f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_2859f4:
    // 0x2859f4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2859f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2859f8:
    // 0x2859f8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_2859fc:
    if (ctx->pc == 0x2859FCu) {
        ctx->pc = 0x2859FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859F8u;
        // 0x2859fc: 0x92220623  lbu         $v0, 0x623($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1571)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285A00u;
        goto label_285a00;
    }
    ctx->pc = 0x2859F8u;
    {
        const bool branch_taken_0x2859f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2859f8) {
            ctx->pc = 0x2859FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2859F8u;
            // 0x2859fc: 0x92220623  lbu         $v0, 0x623($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1571)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285A24u;
            goto label_285a24;
        }
    }
    ctx->pc = 0x285A00u;
label_285a00:
    // 0x285a00: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x285a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_285a04:
    // 0x285a04: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x285a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_285a08:
    // 0x285a08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x285a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_285a0c:
    // 0x285a0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x285a0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_285a10:
    // 0x285a10: 0x3463ffef  ori         $v1, $v1, 0xFFEF
    ctx->pc = 0x285a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65519);
label_285a14:
    // 0x285a14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x285a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_285a18:
    // 0x285a18: 0xe620024c  swc1        $f0, 0x24C($s1)
    ctx->pc = 0x285a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
label_285a1c:
    // 0x285a1c: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x285a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
label_285a20:
    // 0x285a20: 0x92220623  lbu         $v0, 0x623($s1)
    ctx->pc = 0x285a20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1571)));
label_285a24:
    // 0x285a24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_285a28:
    if (ctx->pc == 0x285A28u) {
        ctx->pc = 0x285A2Cu;
        goto label_285a2c;
    }
    ctx->pc = 0x285A24u;
    {
        const bool branch_taken_0x285a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285a24) {
            ctx->pc = 0x285A38u;
            goto label_285a38;
        }
    }
    ctx->pc = 0x285A2Cu;
label_285a2c:
    // 0x285a2c: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x285a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_285a30:
    // 0x285a30: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x285a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_285a34:
    // 0x285a34: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x285a34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
label_285a38:
    // 0x285a38: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x285a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_285a3c:
    // 0x285a3c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x285a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_285a40:
    // 0x285a40: 0x53a20008  beql        $sp, $v0, . + 4 + (0x8 << 2)
label_285a44:
    if (ctx->pc == 0x285A44u) {
        ctx->pc = 0x285A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A40u;
        // 0x285a44: 0xc6210618  lwc1        $f1, 0x618($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x285A48u;
        goto label_285a48;
    }
    ctx->pc = 0x285A40u;
    {
        const bool branch_taken_0x285a40 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x285a40) {
            ctx->pc = 0x285A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285A40u;
            // 0x285a44: 0xc6210618  lwc1        $f1, 0x618($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x285A64u;
            goto label_285a64;
        }
    }
    ctx->pc = 0x285A48u;
label_285a48:
    // 0x285a48: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x285a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_285a4c:
    // 0x285a4c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x285a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_285a50:
    // 0x285a50: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x285a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_285a54:
    // 0x285a54: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x285a54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_285a58:
    // 0x285a58: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x285a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_285a5c:
    // 0x285a5c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x285a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_285a60:
    // 0x285a60: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x285a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_285a64:
    // 0x285a64: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x285a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
label_285a68:
    // 0x285a68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x285a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_285a6c:
    // 0x285a6c: 0x0  nop
    ctx->pc = 0x285a6cu;
    // NOP
label_285a70:
    // 0x285a70: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x285a70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_285a74:
    // 0x285a74: 0x0  nop
    ctx->pc = 0x285a74u;
    // NOP
label_285a78:
    // 0x285a78: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_285a7c:
    if (ctx->pc == 0x285A7Cu) {
        ctx->pc = 0x285A80u;
        goto label_285a80;
    }
    ctx->pc = 0x285A78u;
    {
        const bool branch_taken_0x285a78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x285a78) {
            ctx->pc = 0x285AB8u;
            goto label_285ab8;
        }
    }
    ctx->pc = 0x285A80u;
label_285a80:
    // 0x285a80: 0x8e2315b0  lw          $v1, 0x15B0($s1)
    ctx->pc = 0x285a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_285a84:
    // 0x285a84: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x285a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_285a88:
    // 0x285a88: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_285a8c:
    if (ctx->pc == 0x285A8Cu) {
        ctx->pc = 0x285A90u;
        goto label_285a90;
    }
    ctx->pc = 0x285A88u;
    {
        const bool branch_taken_0x285a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285a88) {
            ctx->pc = 0x285AB8u;
            goto label_285ab8;
        }
    }
    ctx->pc = 0x285A90u;
label_285a90:
    // 0x285a90: 0x92221604  lbu         $v0, 0x1604($s1)
    ctx->pc = 0x285a90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5636)));
label_285a94:
    // 0x285a94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_285a98:
    if (ctx->pc == 0x285A98u) {
        ctx->pc = 0x285A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A94u;
        // 0x285a98: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x285A9Cu;
        goto label_285a9c;
    }
    ctx->pc = 0x285A94u;
    {
        const bool branch_taken_0x285a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A94u;
        // 0x285a98: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a94) {
            ctx->pc = 0x285AB8u;
            goto label_285ab8;
        }
    }
    ctx->pc = 0x285A9Cu;
label_285a9c:
    // 0x285a9c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_285aa0:
    if (ctx->pc == 0x285AA0u) {
        ctx->pc = 0x285AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A9Cu;
        // 0x285aa0: 0x26642fc0  addiu       $a0, $s3, 0x2FC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285AA4u;
        goto label_285aa4;
    }
    ctx->pc = 0x285A9Cu;
    {
        const bool branch_taken_0x285a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A9Cu;
        // 0x285aa0: 0x26642fc0  addiu       $a0, $s3, 0x2FC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a9c) {
            ctx->pc = 0x285AB8u;
            goto label_285ab8;
        }
    }
    ctx->pc = 0x285AA4u;
label_285aa4:
    // 0x285aa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x285aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285aa8:
    // 0x285aa8: 0xc04d476  jal         func_1351D8
label_285aac:
    if (ctx->pc == 0x285AACu) {
        ctx->pc = 0x285AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AA8u;
        // 0x285aac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285AB0u;
        goto label_285ab0;
    }
    ctx->pc = 0x285AA8u;
    SET_GPR_U32(ctx, 31, 0x285AB0u);
    ctx->pc = 0x285AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285AA8u;
    // 0x285aac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x285AA8u, 0x285AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285AB0u;
label_285ab0:
    // 0x285ab0: 0x10000046  b           . + 4 + (0x46 << 2)
label_285ab4:
    if (ctx->pc == 0x285AB4u) {
        ctx->pc = 0x285AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AB0u;
        // 0x285ab4: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285AB8u;
        goto label_285ab8;
    }
    ctx->pc = 0x285AB0u;
    {
        const bool branch_taken_0x285ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AB0u;
        // 0x285ab4: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ab0) {
            ctx->pc = 0x285BCCu;
            goto label_285bcc;
        }
    }
    ctx->pc = 0x285AB8u;
label_285ab8:
    // 0x285ab8: 0xc053ed2  jal         func_14FB48
label_285abc:
    if (ctx->pc == 0x285ABCu) {
        ctx->pc = 0x285ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AB8u;
        // 0x285abc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285AC0u;
        goto label_285ac0;
    }
    ctx->pc = 0x285AB8u;
    SET_GPR_U32(ctx, 31, 0x285AC0u);
    ctx->pc = 0x285ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285AB8u;
    // 0x285abc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FB48u, 0x285AB8u, 0x285AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285AC0u;
label_285ac0:
    // 0x285ac0: 0xc0527ae  jal         func_149EB8
label_285ac4:
    if (ctx->pc == 0x285AC4u) {
        ctx->pc = 0x285AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AC0u;
        // 0x285ac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285AC8u;
        goto label_285ac8;
    }
    ctx->pc = 0x285AC0u;
    SET_GPR_U32(ctx, 31, 0x285AC8u);
    ctx->pc = 0x285AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285AC0u;
    // 0x285ac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x285AC0u, 0x285AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285AC8u;
label_285ac8:
    // 0x285ac8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x285ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285acc:
    // 0x285acc: 0xc054a88  jal         func_152A20
label_285ad0:
    if (ctx->pc == 0x285AD0u) {
        ctx->pc = 0x285AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285ACCu;
        // 0x285ad0: 0x26240448  addiu       $a0, $s1, 0x448 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285AD4u;
        goto label_285ad4;
    }
    ctx->pc = 0x285ACCu;
    SET_GPR_U32(ctx, 31, 0x285AD4u);
    ctx->pc = 0x285AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285ACCu;
    // 0x285ad0: 0x26240448  addiu       $a0, $s1, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x285ACCu, 0x285AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285AD4u;
label_285ad4:
    // 0x285ad4: 0xc05280e  jal         func_14A038
label_285ad8:
    if (ctx->pc == 0x285AD8u) {
        ctx->pc = 0x285AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AD4u;
        // 0x285ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285ADCu;
        goto label_285adc;
    }
    ctx->pc = 0x285AD4u;
    SET_GPR_U32(ctx, 31, 0x285ADCu);
    ctx->pc = 0x285AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285AD4u;
    // 0x285ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x285AD4u, 0x285ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285ADCu;
label_285adc:
    // 0x285adc: 0xc0a2428  jal         func_2890A0
label_285ae0:
    if (ctx->pc == 0x285AE0u) {
        ctx->pc = 0x285AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285ADCu;
        // 0x285ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285AE4u;
        goto label_285ae4;
    }
    ctx->pc = 0x285ADCu;
    SET_GPR_U32(ctx, 31, 0x285AE4u);
    ctx->pc = 0x285AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285ADCu;
    // 0x285ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2890A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2890A0u, 0x285ADCu, 0x285AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285AE4u;
label_285ae4:
    // 0x285ae4: 0x26642fc0  addiu       $a0, $s3, 0x2FC0
    ctx->pc = 0x285ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12224));
label_285ae8:
    // 0x285ae8: 0xc04d23a  jal         func_1348E8
label_285aec:
    if (ctx->pc == 0x285AECu) {
        ctx->pc = 0x285AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AE8u;
        // 0x285aec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285AF0u;
        goto label_285af0;
    }
    ctx->pc = 0x285AE8u;
    SET_GPR_U32(ctx, 31, 0x285AF0u);
    ctx->pc = 0x285AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285AE8u;
    // 0x285aec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1348E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1348E8u, 0x285AE8u, 0x285AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285AF0u;
label_285af0:
    // 0x285af0: 0x8e2315b0  lw          $v1, 0x15B0($s1)
    ctx->pc = 0x285af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_285af4:
    // 0x285af4: 0x30630030  andi        $v1, $v1, 0x30
    ctx->pc = 0x285af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
label_285af8:
    // 0x285af8: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_285afc:
    if (ctx->pc == 0x285AFCu) {
        ctx->pc = 0x285AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AF8u;
        // 0x285afc: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285B00u;
        goto label_285b00;
    }
    ctx->pc = 0x285AF8u;
    {
        const bool branch_taken_0x285af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x285AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AF8u;
        // 0x285afc: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285af8) {
            ctx->pc = 0x285B48u;
            goto label_285b48;
        }
    }
    ctx->pc = 0x285B00u;
label_285b00:
    // 0x285b00: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x285b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_285b04:
    // 0x285b04: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x285b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_285b08:
    // 0x285b08: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x285b08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_285b0c:
    // 0x285b0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x285b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_285b10:
    // 0x285b10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x285b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_285b14:
    // 0x285b14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x285b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285b18:
    // 0x285b18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x285b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285b1c:
    // 0x285b1c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x285b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_285b20:
    // 0x285b20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x285b20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285b24:
    // 0x285b24: 0xc04cb68  jal         func_132DA0
label_285b28:
    if (ctx->pc == 0x285B28u) {
        ctx->pc = 0x285B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B24u;
        // 0x285b28: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285B2Cu;
        goto label_285b2c;
    }
    ctx->pc = 0x285B24u;
    SET_GPR_U32(ctx, 31, 0x285B2Cu);
    ctx->pc = 0x285B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285B24u;
    // 0x285b28: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132DA0u, 0x285B24u, 0x285B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285B2Cu;
label_285b2c:
    // 0x285b2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_285b30:
    if (ctx->pc == 0x285B30u) {
        ctx->pc = 0x285B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B2Cu;
        // 0x285b30: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x285B34u;
        goto label_285b34;
    }
    ctx->pc = 0x285B2Cu;
    {
        const bool branch_taken_0x285b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B2Cu;
        // 0x285b30: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x285b2c) {
            ctx->pc = 0x285B48u;
            goto label_285b48;
        }
    }
    ctx->pc = 0x285B34u;
label_285b34:
    // 0x285b34: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x285b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_285b38:
    // 0x285b38: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x285b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_285b3c:
    // 0x285b3c: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x285b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_285b40:
    // 0x285b40: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x285b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_285b44:
    // 0x285b44: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x285b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_285b48:
    // 0x285b48: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x285b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_285b4c:
    // 0x285b4c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x285b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_285b50:
    // 0x285b50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x285b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_285b54:
    // 0x285b54: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_285b58:
    if (ctx->pc == 0x285B58u) {
        ctx->pc = 0x285B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B54u;
        // 0x285b58: 0x8e2300f0  lw          $v1, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285B5Cu;
        goto label_285b5c;
    }
    ctx->pc = 0x285B54u;
    {
        const bool branch_taken_0x285b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285b54) {
            ctx->pc = 0x285B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285B54u;
            // 0x285b58: 0x8e2300f0  lw          $v1, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285BD0u;
            goto label_285bd0;
        }
    }
    ctx->pc = 0x285B5Cu;
label_285b5c:
    // 0x285b5c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x285b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_285b60:
    // 0x285b60: 0xc4540004  lwc1        $f20, 0x4($v0)
    ctx->pc = 0x285b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_285b64:
    // 0x285b64: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x285b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_285b68:
    // 0x285b68: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x285b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_285b6c:
    // 0x285b6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x285b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_285b70:
    // 0x285b70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x285b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285b74:
    // 0x285b74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x285b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_285b78:
    // 0x285b78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x285b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285b7c:
    // 0x285b7c: 0xc04ca70  jal         func_1329C0
label_285b80:
    if (ctx->pc == 0x285B80u) {
        ctx->pc = 0x285B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B7Cu;
        // 0x285b80: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285B84u;
        goto label_285b84;
    }
    ctx->pc = 0x285B7Cu;
    SET_GPR_U32(ctx, 31, 0x285B84u);
    ctx->pc = 0x285B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285B7Cu;
    // 0x285b80: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1329C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1329C0u, 0x285B7Cu, 0x285B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285B84u;
label_285b84:
    // 0x285b84: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_285b88:
    if (ctx->pc == 0x285B88u) {
        ctx->pc = 0x285B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B84u;
        // 0x285b88: 0xc7b40014  lwc1        $f20, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x285B8Cu;
        goto label_285b8c;
    }
    ctx->pc = 0x285B84u;
    {
        const bool branch_taken_0x285b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285b84) {
            ctx->pc = 0x285B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285B84u;
            // 0x285b88: 0xc7b40014  lwc1        $f20, 0x14($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x285B8Cu;
            goto label_285b8c;
        }
    }
    ctx->pc = 0x285B8Cu;
label_285b8c:
    // 0x285b8c: 0xc62115b8  lwc1        $f1, 0x15B8($s1)
    ctx->pc = 0x285b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_285b90:
    // 0x285b90: 0xc62015b4  lwc1        $f0, 0x15B4($s1)
    ctx->pc = 0x285b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_285b94:
    // 0x285b94: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x285b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_285b98:
    // 0x285b98: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x285b98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_285b9c:
    // 0x285b9c: 0xe62115b8  swc1        $f1, 0x15B8($s1)
    ctx->pc = 0x285b9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5560), bits); }
label_285ba0:
    // 0x285ba0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x285ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_285ba4:
    // 0x285ba4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x285ba4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_285ba8:
    // 0x285ba8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x285ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_285bac:
    // 0x285bac: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x285bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_285bb0:
    // 0x285bb0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x285bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_285bb4:
    // 0x285bb4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x285bb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_285bb8:
    // 0x285bb8: 0x0  nop
    ctx->pc = 0x285bb8u;
    // NOP
label_285bbc:
    // 0x285bbc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_285bc0:
    if (ctx->pc == 0x285BC0u) {
        ctx->pc = 0x285BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285BBCu;
        // 0x285bc0: 0x8e2300f0  lw          $v1, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285BC4u;
        goto label_285bc4;
    }
    ctx->pc = 0x285BBCu;
    {
        const bool branch_taken_0x285bbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x285bbc) {
            ctx->pc = 0x285BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285BBCu;
            // 0x285bc0: 0x8e2300f0  lw          $v1, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285BD0u;
            goto label_285bd0;
        }
    }
    ctx->pc = 0x285BC4u;
label_285bc4:
    // 0x285bc4: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x285bc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_285bc8:
    // 0x285bc8: 0xae2015b8  sw          $zero, 0x15B8($s1)
    ctx->pc = 0x285bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 0));
label_285bcc:
    // 0x285bcc: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x285bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_285bd0:
    // 0x285bd0: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x285bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_285bd4:
    // 0x285bd4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x285bd4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_285bd8:
    // 0x285bd8: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x285bd8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_285bdc:
    // 0x285bdc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x285bdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_285be0:
    // 0x285be0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x285be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_285be4:
    // 0x285be4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x285be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_285be8:
    // 0x285be8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x285be8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_285bec:
    // 0x285bec: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x285becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_285bf0:
    // 0x285bf0: 0x26220550  addiu       $v0, $s1, 0x550
    ctx->pc = 0x285bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_285bf4:
    // 0x285bf4: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
label_285bf8:
    if (ctx->pc == 0x285BF8u) {
        ctx->pc = 0x285BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285BF4u;
        // 0x285bf8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x285BFCu;
        goto label_285bfc;
    }
    ctx->pc = 0x285BF4u;
    {
        const bool branch_taken_0x285bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x285BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285BF4u;
        // 0x285bf8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x285bf4) {
            ctx->pc = 0x285C10u;
            goto label_285c10;
        }
    }
    ctx->pc = 0x285BFCu;
label_285bfc:
    // 0x285bfc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x285bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_285c00:
    // 0x285c00: 0xe6200550  swc1        $f0, 0x550($s1)
    ctx->pc = 0x285c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1360), bits); }
label_285c04:
    // 0x285c04: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x285c04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_285c08:
    // 0x285c08: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x285c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_285c0c:
    // 0x285c0c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x285c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_285c10:
    // 0x285c10: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x285c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_285c14:
    // 0x285c14: 0x26230490  addiu       $v1, $s1, 0x490
    ctx->pc = 0x285c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
label_285c18:
    // 0x285c18: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_285c1c:
    if (ctx->pc == 0x285C1Cu) {
        ctx->pc = 0x285C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C18u;
        // 0x285c1c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C20u;
        goto label_285c20;
    }
    ctx->pc = 0x285C18u;
    {
        const bool branch_taken_0x285c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x285C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C18u;
        // 0x285c1c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c18) {
            ctx->pc = 0x285C3Cu;
            goto label_285c3c;
        }
    }
    ctx->pc = 0x285C20u;
label_285c20:
    // 0x285c20: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x285c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_285c24:
    // 0x285c24: 0xe6200490  swc1        $f0, 0x490($s1)
    ctx->pc = 0x285c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1168), bits); }
label_285c28:
    // 0x285c28: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x285c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_285c2c:
    // 0x285c2c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x285c2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_285c30:
    // 0x285c30: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x285c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_285c34:
    // 0x285c34: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x285c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_285c38:
    // 0x285c38: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x285c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_285c3c:
    // 0x285c3c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x285c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_285c40:
    // 0x285c40: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x285c40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_285c44:
    // 0x285c44: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x285c44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_285c48:
    // 0x285c48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x285c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_285c4c:
    // 0x285c4c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x285c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_285c50:
    // 0x285c50: 0x3e00008  jr          $ra
label_285c54:
    if (ctx->pc == 0x285C54u) {
        ctx->pc = 0x285C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C50u;
        // 0x285c54: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C58u;
        goto label_fallthrough_0x285c50;
    }
    ctx->pc = 0x285C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C50u;
        // 0x285c54: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x285c50:
    ctx->pc = 0x285C58u;
}
