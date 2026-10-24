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

// Function: func_0010A438
// Address: 0x10a438 - 0x10b2e8
void func_0010A438_0x10a438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0010A438_0x10a438");
#endif

    switch (ctx->pc) {
        case 0x10a590u: goto label_10a590;
        case 0x10a5b4u: goto label_10a5b4;
        case 0x10a5ccu: goto label_10a5cc;
        case 0x10a63cu: goto label_10a63c;
        case 0x10a650u: goto label_10a650;
        case 0x10a664u: goto label_10a664;
        case 0x10a6a8u: goto label_10a6a8;
        case 0x10a6bcu: goto label_10a6bc;
        case 0x10a6d0u: goto label_10a6d0;
        case 0x10a718u: goto label_10a718;
        case 0x10a72cu: goto label_10a72c;
        case 0x10a740u: goto label_10a740;
        case 0x10a788u: goto label_10a788;
        case 0x10a79cu: goto label_10a79c;
        case 0x10a7b0u: goto label_10a7b0;
        case 0x10a7fcu: goto label_10a7fc;
        case 0x10a810u: goto label_10a810;
        case 0x10a828u: goto label_10a828;
        case 0x10a848u: goto label_10a848;
        case 0x10a860u: goto label_10a860;
        case 0x10a894u: goto label_10a894;
        case 0x10a8a8u: goto label_10a8a8;
        case 0x10a8d4u: goto label_10a8d4;
        case 0x10a90cu: goto label_10a90c;
        case 0x10a91cu: goto label_10a91c;
        case 0x10a930u: goto label_10a930;
        case 0x10a944u: goto label_10a944;
        case 0x10a968u: goto label_10a968;
        case 0x10a994u: goto label_10a994;
        case 0x10a9c0u: goto label_10a9c0;
        case 0x10a9f0u: goto label_10a9f0;
        case 0x10aa08u: goto label_10aa08;
        case 0x10aa1cu: goto label_10aa1c;
        case 0x10aa30u: goto label_10aa30;
        case 0x10aa48u: goto label_10aa48;
        case 0x10aa5cu: goto label_10aa5c;
        case 0x10aa80u: goto label_10aa80;
        case 0x10aa94u: goto label_10aa94;
        case 0x10aaa8u: goto label_10aaa8;
        case 0x10aaf0u: goto label_10aaf0;
        case 0x10ab04u: goto label_10ab04;
        case 0x10ab18u: goto label_10ab18;
        case 0x10ab60u: goto label_10ab60;
        case 0x10ab74u: goto label_10ab74;
        case 0x10ab88u: goto label_10ab88;
        case 0x10abc4u: goto label_10abc4;
        case 0x10ac00u: goto label_10ac00;
        case 0x10ac14u: goto label_10ac14;
        case 0x10ac54u: goto label_10ac54;
        case 0x10ac68u: goto label_10ac68;
        case 0x10acb4u: goto label_10acb4;
        case 0x10acc8u: goto label_10acc8;
        case 0x10ace0u: goto label_10ace0;
        case 0x10acfcu: goto label_10acfc;
        case 0x10ad2cu: goto label_10ad2c;
        case 0x10ad40u: goto label_10ad40;
        case 0x10ad54u: goto label_10ad54;
        case 0x10ad8cu: goto label_10ad8c;
        case 0x10ada0u: goto label_10ada0;
        case 0x10adb4u: goto label_10adb4;
        case 0x10addcu: goto label_10addc;
        case 0x10adf8u: goto label_10adf8;
        case 0x10ae0cu: goto label_10ae0c;
        case 0x10ae20u: goto label_10ae20;
        case 0x10ae3cu: goto label_10ae3c;
        case 0x10ae50u: goto label_10ae50;
        case 0x10ae68u: goto label_10ae68;
        case 0x10ae88u: goto label_10ae88;
        case 0x10aea4u: goto label_10aea4;
        case 0x10aed8u: goto label_10aed8;
        case 0x10aeecu: goto label_10aeec;
        case 0x10af00u: goto label_10af00;
        case 0x10af2cu: goto label_10af2c;
        case 0x10af5cu: goto label_10af5c;
        case 0x10af70u: goto label_10af70;
        case 0x10af88u: goto label_10af88;
        case 0x10af9cu: goto label_10af9c;
        case 0x10afc8u: goto label_10afc8;
        case 0x10afdcu: goto label_10afdc;
        case 0x10aff0u: goto label_10aff0;
        case 0x10b030u: goto label_10b030;
        case 0x10b044u: goto label_10b044;
        case 0x10b058u: goto label_10b058;
        case 0x10b09cu: goto label_10b09c;
        case 0x10b0b0u: goto label_10b0b0;
        case 0x10b0c4u: goto label_10b0c4;
        case 0x10b10cu: goto label_10b10c;
        case 0x10b120u: goto label_10b120;
        case 0x10b134u: goto label_10b134;
        case 0x10b170u: goto label_10b170;
        case 0x10b184u: goto label_10b184;
        case 0x10b19cu: goto label_10b19c;
        case 0x10b1e8u: goto label_10b1e8;
        case 0x10b1f8u: goto label_10b1f8;
        case 0x10b21cu: goto label_10b21c;
        case 0x10b230u: goto label_10b230;
        case 0x10b244u: goto label_10b244;
        case 0x10b278u: goto label_10b278;
        case 0x10b294u: goto label_10b294;
        case 0x10b2acu: goto label_10b2ac;
        case 0x10b2c0u: goto label_10b2c0;
        default: break;
    }

    ctx->pc = 0x10a438u;

    // 0x10a438: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x10a438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x10a43c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x10a43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x10a440: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10a440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a444: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x10a444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x10a448: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x10a448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x10a44c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x10a44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x10a450: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x10a450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x10a454: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10a454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10a458: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x10a458u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x10a45c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x10a45cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x10a460: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x10a460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10a464: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x10a464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10a468: 0x962303ac  lhu         $v1, 0x3AC($s1)
    ctx->pc = 0x10a468u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x10a46c: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x10a46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x10a470: 0x10400393  beqz        $v0, . + 4 + (0x393 << 2)
    ctx->pc = 0x10A470u;
    {
        const bool branch_taken_0x10a470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A470u;
        // 0x10a474: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a470) {
            ctx->pc = 0x10B2C0u;
            goto label_10b2c0;
        }
    }
    ctx->pc = 0x10A478u;
    // 0x10a478: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x10A478u;
    {
        const bool branch_taken_0x10a478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a478) {
            ctx->pc = 0x10A47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A478u;
            // 0x10a47c: 0x86241682  lh          $a0, 0x1682($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 5762)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A4ECu;
            goto label_10a4ec;
        }
    }
    ctx->pc = 0x10A480u;
    // 0x10a480: 0x86241680  lh          $a0, 0x1680($s1)
    ctx->pc = 0x10a480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 5760)));
    // 0x10a484: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x10a484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10a488: 0x8e231678  lw          $v1, 0x1678($s1)
    ctx->pc = 0x10a488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5752)));
    // 0x10a48c: 0x8e341660  lw          $s4, 0x1660($s1)
    ctx->pc = 0x10a48cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5728)));
    // 0x10a490: 0x8e331668  lw          $s3, 0x1668($s1)
    ctx->pc = 0x10a490u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5736)));
    // 0x10a494: 0x8e321670  lw          $s2, 0x1670($s1)
    ctx->pc = 0x10a494u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5744)));
    // 0x10a498: 0xa4440044  sh          $a0, 0x44($v0)
    ctx->pc = 0x10a498u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 68), (uint16_t)GPR_U32(ctx, 4));
    // 0x10a49c: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x10a49cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x10a4a0: 0x86241680  lh          $a0, 0x1680($s1)
    ctx->pc = 0x10a4a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 5760)));
    // 0x10a4a4: 0x8e2205c0  lw          $v0, 0x5C0($s1)
    ctx->pc = 0x10a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1472)));
    // 0x10a4a8: 0x8e231678  lw          $v1, 0x1678($s1)
    ctx->pc = 0x10a4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5752)));
    // 0x10a4ac: 0xa4440044  sh          $a0, 0x44($v0)
    ctx->pc = 0x10a4acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 68), (uint16_t)GPR_U32(ctx, 4));
    // 0x10a4b0: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x10a4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x10a4b4: 0x86241680  lh          $a0, 0x1680($s1)
    ctx->pc = 0x10a4b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 5760)));
    // 0x10a4b8: 0x8e2205b0  lw          $v0, 0x5B0($s1)
    ctx->pc = 0x10a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
    // 0x10a4bc: 0x8e231678  lw          $v1, 0x1678($s1)
    ctx->pc = 0x10a4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5752)));
    // 0x10a4c0: 0xa4440044  sh          $a0, 0x44($v0)
    ctx->pc = 0x10a4c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 68), (uint16_t)GPR_U32(ctx, 4));
    // 0x10a4c4: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x10a4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x10a4c8: 0x86241680  lh          $a0, 0x1680($s1)
    ctx->pc = 0x10a4c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 5760)));
    // 0x10a4cc: 0x8e2205c8  lw          $v0, 0x5C8($s1)
    ctx->pc = 0x10a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
    // 0x10a4d0: 0x8e231678  lw          $v1, 0x1678($s1)
    ctx->pc = 0x10a4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5752)));
    // 0x10a4d4: 0xa4440044  sh          $a0, 0x44($v0)
    ctx->pc = 0x10a4d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 68), (uint16_t)GPR_U32(ctx, 4));
    // 0x10a4d8: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x10a4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x10a4dc: 0x86241680  lh          $a0, 0x1680($s1)
    ctx->pc = 0x10a4dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 5760)));
    // 0x10a4e0: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10a4e4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x10A4E4u;
    {
        const bool branch_taken_0x10a4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A4E4u;
        // 0x10a4e8: 0x8e231678  lw          $v1, 0x1678($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a4e4) {
            ctx->pc = 0x10A550u;
            goto label_10a550;
        }
    }
    ctx->pc = 0x10A4ECu;
label_10a4ec:
    // 0x10a4ec: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x10a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10a4f0: 0x8e23167c  lw          $v1, 0x167C($s1)
    ctx->pc = 0x10a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5756)));
    // 0x10a4f4: 0x8e341664  lw          $s4, 0x1664($s1)
    ctx->pc = 0x10a4f4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5732)));
    // 0x10a4f8: 0x8e33166c  lw          $s3, 0x166C($s1)
    ctx->pc = 0x10a4f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5740)));
    // 0x10a4fc: 0x8e321674  lw          $s2, 0x1674($s1)
    ctx->pc = 0x10a4fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5748)));
    // 0x10a500: 0xa4440044  sh          $a0, 0x44($v0)
    ctx->pc = 0x10a500u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 68), (uint16_t)GPR_U32(ctx, 4));
    // 0x10a504: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x10a504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x10a508: 0x86241682  lh          $a0, 0x1682($s1)
    ctx->pc = 0x10a508u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 5762)));
    // 0x10a50c: 0x8e2205c0  lw          $v0, 0x5C0($s1)
    ctx->pc = 0x10a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1472)));
    // 0x10a510: 0x8e23167c  lw          $v1, 0x167C($s1)
    ctx->pc = 0x10a510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5756)));
    // 0x10a514: 0xa4440044  sh          $a0, 0x44($v0)
    ctx->pc = 0x10a514u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 68), (uint16_t)GPR_U32(ctx, 4));
    // 0x10a518: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x10a518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x10a51c: 0x86241682  lh          $a0, 0x1682($s1)
    ctx->pc = 0x10a51cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 5762)));
    // 0x10a520: 0x8e2205b0  lw          $v0, 0x5B0($s1)
    ctx->pc = 0x10a520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
    // 0x10a524: 0x8e23167c  lw          $v1, 0x167C($s1)
    ctx->pc = 0x10a524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5756)));
    // 0x10a528: 0xa4440044  sh          $a0, 0x44($v0)
    ctx->pc = 0x10a528u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 68), (uint16_t)GPR_U32(ctx, 4));
    // 0x10a52c: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x10a52cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x10a530: 0x86241682  lh          $a0, 0x1682($s1)
    ctx->pc = 0x10a530u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 5762)));
    // 0x10a534: 0x8e2205c8  lw          $v0, 0x5C8($s1)
    ctx->pc = 0x10a534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
    // 0x10a538: 0x8e23167c  lw          $v1, 0x167C($s1)
    ctx->pc = 0x10a538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5756)));
    // 0x10a53c: 0xa4440044  sh          $a0, 0x44($v0)
    ctx->pc = 0x10a53cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 68), (uint16_t)GPR_U32(ctx, 4));
    // 0x10a540: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x10a540u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x10a544: 0x86241682  lh          $a0, 0x1682($s1)
    ctx->pc = 0x10a544u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 5762)));
    // 0x10a548: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10a548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10a54c: 0x8e23167c  lw          $v1, 0x167C($s1)
    ctx->pc = 0x10a54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5756)));
label_10a550:
    // 0x10a550: 0xa4440044  sh          $a0, 0x44($v0)
    ctx->pc = 0x10a550u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 68), (uint16_t)GPR_U32(ctx, 4));
    // 0x10a554: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x10a554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x10a558: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x10a558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10a55c: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x10a55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x10a560: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x10a560u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x10a564: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x10a564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x10a568: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x10a568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10a56c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x10a56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x10a570: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10a570u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10a574: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10a574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10a578: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10a578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a57c: 0x8e2405b8  lw          $a0, 0x5B8($s1)
    ctx->pc = 0x10a57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10a580: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10a580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10a584: 0xe7b50024  swc1        $f21, 0x24($sp)
    ctx->pc = 0x10a584u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x10a588: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x10A588u;
    SET_GPR_U32(ctx, 31, 0x10A590u);
    ctx->pc = 0x10A58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A588u;
    // 0x10a58c: 0xe7b40028  swc1        $f20, 0x28($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x10A588u, 0x10A590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A590u;
label_10a590:
    // 0x10a590: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x10a590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x10a594: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10a594u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10a598: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10a598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a59c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10a59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a5a0: 0x8e2405c0  lw          $a0, 0x5C0($s1)
    ctx->pc = 0x10a5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1472)));
    // 0x10a5a4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x10a5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x10a5a8: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x10a5a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x10a5ac: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x10A5ACu;
    SET_GPR_U32(ctx, 31, 0x10A5B4u);
    ctx->pc = 0x10A5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A5ACu;
    // 0x10a5b0: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x10A5ACu, 0x10A5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A5B4u;
label_10a5b4:
    // 0x10a5b4: 0x8e2405d0  lw          $a0, 0x5D0($s1)
    ctx->pc = 0x10a5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10a5b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10a5b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a5bc: 0xe7b50024  swc1        $f21, 0x24($sp)
    ctx->pc = 0x10a5bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x10a5c0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10a5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10a5c4: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x10A5C4u;
    SET_GPR_U32(ctx, 31, 0x10A5CCu);
    ctx->pc = 0x10A5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A5C4u;
    // 0x10a5c8: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x10A5C4u, 0x10A5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A5CCu;
label_10a5cc:
    // 0x10a5cc: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x10a5ccu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a5d0: 0x0  nop
    ctx->pc = 0x10a5d0u;
    // NOP
    // 0x10a5d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10a5d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10a5d8: 0xc6211610  lwc1        $f1, 0x1610($s1)
    ctx->pc = 0x10a5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10a5dc: 0x2e820028  sltiu       $v0, $s4, 0x28
    ctx->pc = 0x10a5dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
    // 0x10a5e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10a5e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10a5e4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10a5e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x10a5e8: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x10a5e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x10a5ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10A5ECu;
    {
        const bool branch_taken_0x10a5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A5ECu;
        // 0x10a5f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a5ec) {
            ctx->pc = 0x10A610u;
            goto label_10a610;
        }
    }
    ctx->pc = 0x10A5F4u;
    // 0x10a5f4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x10a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x10a5f8: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x10a5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x10a5fc: 0x2442bb70  addiu       $v0, $v0, -0x4490
    ctx->pc = 0x10a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949744));
    // 0x10a600: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10a600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10a604: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10a604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10a608: 0x800008  jr          $a0
    ctx->pc = 0x10A608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A610u: goto label_10a610;
            case 0x10A680u: goto label_10a680;
            case 0x10A6ECu: goto label_10a6ec;
            case 0x10A768u: goto label_10a768;
            case 0x10A7D0u: goto label_10a7d0;
            case 0x10A834u: goto label_10a834;
            case 0x10A86Cu: goto label_10a86c;
            case 0x10A8C0u: goto label_10a8c0;
            case 0x10A8E8u: goto label_10a8e8;
            case 0x10A954u: goto label_10a954;
            case 0x10A980u: goto label_10a980;
            case 0x10A9ACu: goto label_10a9ac;
            case 0x10A9D8u: goto label_10a9d8;
            case 0x10AA64u: goto label_10aa64;
            case 0x10AAD0u: goto label_10aad0;
            case 0x10AB44u: goto label_10ab44;
            case 0x10ABB0u: goto label_10abb0;
            case 0x10ABD8u: goto label_10abd8;
            case 0x10AC28u: goto label_10ac28;
            case 0x10AC80u: goto label_10ac80;
            case 0x10ACA0u: goto label_10aca0;
            case 0x10ACE8u: goto label_10ace8;
            case 0x10AD10u: goto label_10ad10;
            case 0x10AD70u: goto label_10ad70;
            case 0x10ADE4u: goto label_10ade4;
            case 0x10AE28u: goto label_10ae28;
            case 0x10AE90u: goto label_10ae90;
            case 0x10AEB8u: goto label_10aeb8;
            case 0x10AF34u: goto label_10af34;
            case 0x10AF5Cu: goto label_10af5c;
            case 0x10AFA4u: goto label_10afa4;
            case 0x10B014u: goto label_10b014;
            case 0x10B07Cu: goto label_10b07c;
            case 0x10B0ECu: goto label_10b0ec;
            case 0x10B15Cu: goto label_10b15c;
            case 0x10B200u: goto label_10b200;
            case 0x10B280u: goto label_10b280;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A608u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10A610u;
label_10a610:
    // 0x10a610: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x10a610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x10a614: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x10a614u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x10a618: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10a618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a61c: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x10a61cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x10a620: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x10a620u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x10a624: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10a624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10a628: 0x8e2405d0  lw          $a0, 0x5D0($s1)
    ctx->pc = 0x10a628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10a62c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x10a62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x10a630: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10a630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10a634: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x10A634u;
    SET_GPR_U32(ctx, 31, 0x10A63Cu);
    ctx->pc = 0x10A638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A634u;
    // 0x10a638: 0xe7b40028  swc1        $f20, 0x28($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x10A634u, 0x10A63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A63Cu;
label_10a63c:
    // 0x10a63c: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10a63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10a640: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a644: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10a644u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10a648: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10A648u;
    SET_GPR_U32(ctx, 31, 0x10A650u);
    ctx->pc = 0x10A64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A648u;
    // 0x10a64c: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10A648u, 0x10A650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A650u;
label_10a650:
    // 0x10a650: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10a650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10a654: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x10a654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x10a658: 0xac53004c  sw          $s3, 0x4C($v0)
    ctx->pc = 0x10a658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 19));
    // 0x10a65c: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x10A65Cu;
    SET_GPR_U32(ctx, 31, 0x10A664u);
    ctx->pc = 0x10A660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A65Cu;
    // 0x10a660: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x10A65Cu, 0x10A664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A664u;
label_10a664:
    // 0x10a664: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10a664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10a668: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10a668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10a66c: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x10a66cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x10a670: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x10a670u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x10a674: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10a674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a678: 0x10000227  b           . + 4 + (0x227 << 2)
    ctx->pc = 0x10A678u;
    {
        const bool branch_taken_0x10a678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A678u;
        // 0x10a67c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a678) {
            ctx->pc = 0x10AF18u;
            goto label_10af18;
        }
    }
    ctx->pc = 0x10A680u;
label_10a680:
    // 0x10a680: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10a680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10a684: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10a684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10a688: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x10a688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x10a68c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x10a68cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x10a690: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10a690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a694: 0x8e2405d0  lw          $a0, 0x5D0($s1)
    ctx->pc = 0x10a694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10a698: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x10a698u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x10a69c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x10a69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x10a6a0: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x10A6A0u;
    SET_GPR_U32(ctx, 31, 0x10A6A8u);
    ctx->pc = 0x10A6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A6A0u;
    // 0x10a6a4: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x10A6A0u, 0x10A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A6A8u;
label_10a6a8:
    // 0x10a6a8: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10a6ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a6b0: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10a6b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10a6b4: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10A6B4u;
    SET_GPR_U32(ctx, 31, 0x10A6BCu);
    ctx->pc = 0x10A6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A6B4u;
    // 0x10a6b8: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10A6B4u, 0x10A6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A6BCu;
label_10a6bc:
    // 0x10a6bc: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10a6c0: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x10a6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x10a6c4: 0xac53004c  sw          $s3, 0x4C($v0)
    ctx->pc = 0x10a6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 19));
    // 0x10a6c8: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x10A6C8u;
    SET_GPR_U32(ctx, 31, 0x10A6D0u);
    ctx->pc = 0x10A6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A6C8u;
    // 0x10a6cc: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x10A6C8u, 0x10A6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A6D0u;
label_10a6d0:
    // 0x10a6d0: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x10a6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x10a6d4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x10a6d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x10a6d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10a6d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10a6dc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x10a6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x10a6e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10a6e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a6e4: 0x100001b8  b           . + 4 + (0x1B8 << 2)
    ctx->pc = 0x10A6E4u;
    {
        const bool branch_taken_0x10a6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6E4u;
        // 0x10a6e8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6e4) {
            ctx->pc = 0x10ADC8u;
            goto label_10adc8;
        }
    }
    ctx->pc = 0x10A6ECu;
label_10a6ec:
    // 0x10a6ec: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x10a6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x10a6f0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10a6f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10a6f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10a6f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10a6f8: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x10a6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x10a6fc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x10a6fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x10a700: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10a700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a704: 0x8e2405d0  lw          $a0, 0x5D0($s1)
    ctx->pc = 0x10a704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10a708: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x10a708u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10a70c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x10a70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x10a710: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x10A710u;
    SET_GPR_U32(ctx, 31, 0x10A718u);
    ctx->pc = 0x10A714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A710u;
    // 0x10a714: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x10A710u, 0x10A718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A718u;
label_10a718:
    // 0x10a718: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10a718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10a71c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a720: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10a720u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10a724: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10A724u;
    SET_GPR_U32(ctx, 31, 0x10A72Cu);
    ctx->pc = 0x10A728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A724u;
    // 0x10a728: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10A724u, 0x10A72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A72Cu;
label_10a72c:
    // 0x10a72c: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10a730: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x10a730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x10a734: 0xac53004c  sw          $s3, 0x4C($v0)
    ctx->pc = 0x10a734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 19));
    // 0x10a738: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x10A738u;
    SET_GPR_U32(ctx, 31, 0x10A740u);
    ctx->pc = 0x10A73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A738u;
    // 0x10a73c: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x10A738u, 0x10A740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A740u;
label_10a740:
    // 0x10a740: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x10a740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
    // 0x10a744: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x10a744u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x10a748: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10a748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10a74c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x10a74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x10a750: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10a750u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10a754: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10a754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a758: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x10a758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x10a75c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10a75cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10a760: 0x100002c0  b           . + 4 + (0x2C0 << 2)
    ctx->pc = 0x10A760u;
    {
        const bool branch_taken_0x10a760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A760u;
        // 0x10a764: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a760) {
            ctx->pc = 0x10B264u;
            goto label_10b264;
        }
    }
    ctx->pc = 0x10A768u;
label_10a768:
    // 0x10a768: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x10a768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x10a76c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x10a76cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x10a770: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10a770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a774: 0x8e2405d0  lw          $a0, 0x5D0($s1)
    ctx->pc = 0x10a774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10a778: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x10a778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x10a77c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10a77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10a780: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x10A780u;
    SET_GPR_U32(ctx, 31, 0x10A788u);
    ctx->pc = 0x10A784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A780u;
    // 0x10a784: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x10A780u, 0x10A788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A788u;
label_10a788:
    // 0x10a788: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10a788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10a78c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a790: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10a790u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10a794: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10A794u;
    SET_GPR_U32(ctx, 31, 0x10A79Cu);
    ctx->pc = 0x10A798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A794u;
    // 0x10a798: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10A794u, 0x10A79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A79Cu;
label_10a79c:
    // 0x10a79c: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10a7a0: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x10a7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x10a7a4: 0xac53004c  sw          $s3, 0x4C($v0)
    ctx->pc = 0x10a7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 19));
    // 0x10a7a8: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x10A7A8u;
    SET_GPR_U32(ctx, 31, 0x10A7B0u);
    ctx->pc = 0x10A7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A7A8u;
    // 0x10a7ac: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x10A7A8u, 0x10A7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A7B0u;
label_10a7b0:
    // 0x10a7b0: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x10a7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x10a7b4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x10a7b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x10a7b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10a7b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10a7bc: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x10a7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x10a7c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10a7c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10a7c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10a7c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a7c8: 0x1000017f  b           . + 4 + (0x17F << 2)
    ctx->pc = 0x10A7C8u;
    {
        const bool branch_taken_0x10a7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7C8u;
        // 0x10a7cc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7c8) {
            ctx->pc = 0x10ADC8u;
            goto label_10adc8;
        }
    }
    ctx->pc = 0x10A7D0u;
label_10a7d0:
    // 0x10a7d0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x10a7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x10a7d4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10a7d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10a7d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10a7d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10a7dc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x10a7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x10a7e0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10a7e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10a7e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10a7e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a7e8: 0x8e2405c0  lw          $a0, 0x5C0($s1)
    ctx->pc = 0x10a7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1472)));
    // 0x10a7ec: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x10a7ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x10a7f0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x10a7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x10a7f4: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x10A7F4u;
    SET_GPR_U32(ctx, 31, 0x10A7FCu);
    ctx->pc = 0x10A7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A7F4u;
    // 0x10a7f8: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x10A7F4u, 0x10A7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A7FCu;
label_10a7fc:
    // 0x10a7fc: 0x8e2205c0  lw          $v0, 0x5C0($s1)
    ctx->pc = 0x10a7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1472)));
    // 0x10a800: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a804: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10a804u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10a808: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10A808u;
    SET_GPR_U32(ctx, 31, 0x10A810u);
    ctx->pc = 0x10A80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A808u;
    // 0x10a80c: 0x8e2405c0  lw          $a0, 0x5C0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1472)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10A808u, 0x10A810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A810u;
label_10a810:
    // 0x10a810: 0x8e2405c0  lw          $a0, 0x5C0($s1)
    ctx->pc = 0x10a810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1472)));
    // 0x10a814: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x10a814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x10a818: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10a818u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10a81c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10a81cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10a820: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x10A820u;
    SET_GPR_U32(ctx, 31, 0x10A828u);
    ctx->pc = 0x10A824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A820u;
    // 0x10a824: 0x8e2505c4  lw          $a1, 0x5C4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1476)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x10A820u, 0x10A828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A828u;
label_10a828:
    // 0x10a828: 0x8e2205c0  lw          $v0, 0x5C0($s1)
    ctx->pc = 0x10a828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1472)));
    // 0x10a82c: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x10A82Cu;
    {
        const bool branch_taken_0x10a82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A82Cu;
        // 0x10a830: 0x26250100  addiu       $a1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a82c) {
            ctx->pc = 0x10AA50u;
            goto label_10aa50;
        }
    }
    ctx->pc = 0x10A834u;
label_10a834:
    // 0x10a834: 0x8e2205c0  lw          $v0, 0x5C0($s1)
    ctx->pc = 0x10a834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1472)));
    // 0x10a838: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a83c: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10a83cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10a840: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10A840u;
    SET_GPR_U32(ctx, 31, 0x10A848u);
    ctx->pc = 0x10A844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A840u;
    // 0x10a844: 0x8e2405c0  lw          $a0, 0x5C0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1472)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10A840u, 0x10A848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A848u;
label_10a848:
    // 0x10a848: 0x8e2405c0  lw          $a0, 0x5C0($s1)
    ctx->pc = 0x10a848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1472)));
    // 0x10a84c: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x10a84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x10a850: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x10a850u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x10a854: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10a854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10a858: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x10A858u;
    SET_GPR_U32(ctx, 31, 0x10A860u);
    ctx->pc = 0x10A85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A858u;
    // 0x10a85c: 0x8e2505c4  lw          $a1, 0x5C4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1476)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x10A858u, 0x10A860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A860u;
label_10a860:
    // 0x10a860: 0x8e2205c0  lw          $v0, 0x5C0($s1)
    ctx->pc = 0x10a860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1472)));
    // 0x10a864: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x10A864u;
    {
        const bool branch_taken_0x10a864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A864u;
        // 0x10a868: 0x26250100  addiu       $a1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a864) {
            ctx->pc = 0x10AA50u;
            goto label_10aa50;
        }
    }
    ctx->pc = 0x10A86Cu;
label_10a86c:
    // 0x10a86c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x10a86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x10a870: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x10a870u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x10a874: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10a874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10a878: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10a878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10a87c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10a87cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a880: 0x8e2405b8  lw          $a0, 0x5B8($s1)
    ctx->pc = 0x10a880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10a884: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x10a884u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x10a888: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x10a888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x10a88c: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x10A88Cu;
    SET_GPR_U32(ctx, 31, 0x10A894u);
    ctx->pc = 0x10A890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A88Cu;
    // 0x10a890: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x10A88Cu, 0x10A894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A894u;
label_10a894:
    // 0x10a894: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x10a894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10a898: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a89c: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10a89cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10a8a0: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10A8A0u;
    SET_GPR_U32(ctx, 31, 0x10A8A8u);
    ctx->pc = 0x10A8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A8A0u;
    // 0x10a8a4: 0x8e2405b8  lw          $a0, 0x5B8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10A8A0u, 0x10A8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A8A8u;
label_10a8a8:
    // 0x10a8a8: 0x8e2405b8  lw          $a0, 0x5B8($s1)
    ctx->pc = 0x10a8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10a8ac: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x10a8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x10a8b0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x10a8b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x10a8b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10a8b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10a8b8: 0x100001b1  b           . + 4 + (0x1B1 << 2)
    ctx->pc = 0x10A8B8u;
    {
        const bool branch_taken_0x10a8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8B8u;
        // 0x10a8bc: 0x8e2505bc  lw          $a1, 0x5BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a8b8) {
            ctx->pc = 0x10AF80u;
            goto label_10af80;
        }
    }
    ctx->pc = 0x10A8C0u;
label_10a8c0:
    // 0x10a8c0: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x10a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10a8c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a8c8: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10a8c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10a8cc: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10A8CCu;
    SET_GPR_U32(ctx, 31, 0x10A8D4u);
    ctx->pc = 0x10A8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A8CCu;
    // 0x10a8d0: 0x8e2405b8  lw          $a0, 0x5B8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10A8CCu, 0x10A8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A8D4u;
label_10a8d4:
    // 0x10a8d4: 0x8e2405b8  lw          $a0, 0x5B8($s1)
    ctx->pc = 0x10a8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10a8d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10a8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10a8dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10a8dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10a8e0: 0x100001a7  b           . + 4 + (0x1A7 << 2)
    ctx->pc = 0x10A8E0u;
    {
        const bool branch_taken_0x10a8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8E0u;
        // 0x10a8e4: 0x8e2505bc  lw          $a1, 0x5BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a8e0) {
            ctx->pc = 0x10AF80u;
            goto label_10af80;
        }
    }
    ctx->pc = 0x10A8E8u;
label_10a8e8:
    // 0x10a8e8: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x10a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10a8ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a8f0: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x10a8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x10a8f4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x10a8f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x10a8f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10a8f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10a8fc: 0x26300100  addiu       $s0, $s1, 0x100
    ctx->pc = 0x10a8fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x10a900: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10a900u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10a904: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10A904u;
    SET_GPR_U32(ctx, 31, 0x10A90Cu);
    ctx->pc = 0x10A908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A904u;
    // 0x10a908: 0x8e2405b8  lw          $a0, 0x5B8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10A904u, 0x10A90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A90Cu;
label_10a90c:
    // 0x10a90c: 0x8e2405b8  lw          $a0, 0x5B8($s1)
    ctx->pc = 0x10a90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10a910: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10a910u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x10a914: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x10A914u;
    SET_GPR_U32(ctx, 31, 0x10A91Cu);
    ctx->pc = 0x10A918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A914u;
    // 0x10a918: 0x8e2505bc  lw          $a1, 0x5BC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1468)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x10A914u, 0x10A91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A91Cu;
label_10a91c:
    // 0x10a91c: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x10a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10a920: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10a920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a924: 0xac53004c  sw          $s3, 0x4C($v0)
    ctx->pc = 0x10a924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 19));
    // 0x10a928: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x10A928u;
    SET_GPR_U32(ctx, 31, 0x10A930u);
    ctx->pc = 0x10A92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A928u;
    // 0x10a92c: 0x8e2405b8  lw          $a0, 0x5B8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x10A928u, 0x10A930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A930u;
label_10a930:
    // 0x10a930: 0x8e2205c0  lw          $v0, 0x5C0($s1)
    ctx->pc = 0x10a930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1472)));
    // 0x10a934: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a938: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10a938u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10a93c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10A93Cu;
    SET_GPR_U32(ctx, 31, 0x10A944u);
    ctx->pc = 0x10A940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A93Cu;
    // 0x10a940: 0x8e2405c0  lw          $a0, 0x5C0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1472)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10A93Cu, 0x10A944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A944u;
label_10a944:
    // 0x10a944: 0x8e2405c0  lw          $a0, 0x5C0($s1)
    ctx->pc = 0x10a944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1472)));
    // 0x10a948: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10a948u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x10a94c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x10A94Cu;
    {
        const bool branch_taken_0x10a94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A94Cu;
        // 0x10a950: 0x8e2505c4  lw          $a1, 0x5C4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a94c) {
            ctx->pc = 0x10AA40u;
            goto label_10aa40;
        }
    }
    ctx->pc = 0x10A954u;
label_10a954:
    // 0x10a954: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x10a954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10a958: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a95c: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10a95cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10a960: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10A960u;
    SET_GPR_U32(ctx, 31, 0x10A968u);
    ctx->pc = 0x10A964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A960u;
    // 0x10a964: 0x8e2405b8  lw          $a0, 0x5B8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10A960u, 0x10A968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A968u;
label_10a968:
    // 0x10a968: 0x8e2405b8  lw          $a0, 0x5B8($s1)
    ctx->pc = 0x10a968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10a96c: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x10a96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x10a970: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x10a970u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x10a974: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10a974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10a978: 0x10000181  b           . + 4 + (0x181 << 2)
    ctx->pc = 0x10A978u;
    {
        const bool branch_taken_0x10a978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A978u;
        // 0x10a97c: 0x8e2505bc  lw          $a1, 0x5BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a978) {
            ctx->pc = 0x10AF80u;
            goto label_10af80;
        }
    }
    ctx->pc = 0x10A980u;
label_10a980:
    // 0x10a980: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x10a980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10a984: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a988: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10a988u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10a98c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10A98Cu;
    SET_GPR_U32(ctx, 31, 0x10A994u);
    ctx->pc = 0x10A990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A98Cu;
    // 0x10a990: 0x8e2405b8  lw          $a0, 0x5B8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10A98Cu, 0x10A994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A994u;
label_10a994:
    // 0x10a994: 0x8e2405b8  lw          $a0, 0x5B8($s1)
    ctx->pc = 0x10a994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10a998: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x10a998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x10a99c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x10a99cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x10a9a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10a9a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10a9a4: 0x10000176  b           . + 4 + (0x176 << 2)
    ctx->pc = 0x10A9A4u;
    {
        const bool branch_taken_0x10a9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9A4u;
        // 0x10a9a8: 0x8e2505bc  lw          $a1, 0x5BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a9a4) {
            ctx->pc = 0x10AF80u;
            goto label_10af80;
        }
    }
    ctx->pc = 0x10A9ACu;
label_10a9ac:
    // 0x10a9ac: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x10a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10a9b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a9b4: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10a9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10a9b8: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10A9B8u;
    SET_GPR_U32(ctx, 31, 0x10A9C0u);
    ctx->pc = 0x10A9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A9B8u;
    // 0x10a9bc: 0x8e2405b8  lw          $a0, 0x5B8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10A9B8u, 0x10A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A9C0u;
label_10a9c0:
    // 0x10a9c0: 0x8e2405b8  lw          $a0, 0x5B8($s1)
    ctx->pc = 0x10a9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10a9c4: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x10a9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x10a9c8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x10a9c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x10a9cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10a9ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10a9d0: 0x1000016b  b           . + 4 + (0x16B << 2)
    ctx->pc = 0x10A9D0u;
    {
        const bool branch_taken_0x10a9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9D0u;
        // 0x10a9d4: 0x8e2505bc  lw          $a1, 0x5BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a9d0) {
            ctx->pc = 0x10AF80u;
            goto label_10af80;
        }
    }
    ctx->pc = 0x10A9D8u;
label_10a9d8:
    // 0x10a9d8: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x10a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10a9dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a9e0: 0x26300100  addiu       $s0, $s1, 0x100
    ctx->pc = 0x10a9e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x10a9e4: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10a9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10a9e8: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10A9E8u;
    SET_GPR_U32(ctx, 31, 0x10A9F0u);
    ctx->pc = 0x10A9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A9E8u;
    // 0x10a9ec: 0x8e2405b8  lw          $a0, 0x5B8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10A9E8u, 0x10A9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A9F0u;
label_10a9f0:
    // 0x10a9f0: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x10a9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x10a9f4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x10a9f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x10a9f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10a9f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10a9fc: 0x8e2405b8  lw          $a0, 0x5B8($s1)
    ctx->pc = 0x10a9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10aa00: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x10AA00u;
    SET_GPR_U32(ctx, 31, 0x10AA08u);
    ctx->pc = 0x10AA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA00u;
    // 0x10aa04: 0x8e2505bc  lw          $a1, 0x5BC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1468)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x10AA00u, 0x10AA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA08u;
label_10aa08:
    // 0x10aa08: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x10aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10aa0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10aa0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa10: 0xac53004c  sw          $s3, 0x4C($v0)
    ctx->pc = 0x10aa10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 19));
    // 0x10aa14: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x10AA14u;
    SET_GPR_U32(ctx, 31, 0x10AA1Cu);
    ctx->pc = 0x10AA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA14u;
    // 0x10aa18: 0x8e2405b8  lw          $a0, 0x5B8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x10AA14u, 0x10AA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA1Cu;
label_10aa1c:
    // 0x10aa1c: 0x8e2205c0  lw          $v0, 0x5C0($s1)
    ctx->pc = 0x10aa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1472)));
    // 0x10aa20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10aa20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10aa24: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10aa24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10aa28: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10AA28u;
    SET_GPR_U32(ctx, 31, 0x10AA30u);
    ctx->pc = 0x10AA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA28u;
    // 0x10aa2c: 0x8e2405c0  lw          $a0, 0x5C0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1472)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10AA28u, 0x10AA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA30u;
label_10aa30:
    // 0x10aa30: 0x8e2405c0  lw          $a0, 0x5C0($s1)
    ctx->pc = 0x10aa30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1472)));
    // 0x10aa34: 0x8e2505c4  lw          $a1, 0x5C4($s1)
    ctx->pc = 0x10aa34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1476)));
    // 0x10aa38: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10aa38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10aa3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10aa3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10aa40:
    // 0x10aa40: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x10AA40u;
    SET_GPR_U32(ctx, 31, 0x10AA48u);
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x10AA40u, 0x10AA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA48u;
label_10aa48:
    // 0x10aa48: 0x8e2205c0  lw          $v0, 0x5C0($s1)
    ctx->pc = 0x10aa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1472)));
    // 0x10aa4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10aa4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10aa50:
    // 0x10aa50: 0xac53004c  sw          $s3, 0x4C($v0)
    ctx->pc = 0x10aa50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 19));
    // 0x10aa54: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x10AA54u;
    SET_GPR_U32(ctx, 31, 0x10AA5Cu);
    ctx->pc = 0x10AA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA54u;
    // 0x10aa58: 0x8e2405c0  lw          $a0, 0x5C0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1472)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x10AA54u, 0x10AA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA5Cu;
label_10aa5c:
    // 0x10aa5c: 0x10000219  b           . + 4 + (0x219 << 2)
    ctx->pc = 0x10AA5Cu;
    {
        const bool branch_taken_0x10aa5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA5Cu;
        // 0x10aa60: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aa5c) {
            ctx->pc = 0x10B2C4u;
            goto label_10b2c4;
        }
    }
    ctx->pc = 0x10AA64u;
label_10aa64:
    // 0x10aa64: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10aa64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10aa68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10aa68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10aa6c: 0x8e2405d0  lw          $a0, 0x5D0($s1)
    ctx->pc = 0x10aa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10aa70: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x10aa70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x10aa74: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10aa74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10aa78: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x10AA78u;
    SET_GPR_U32(ctx, 31, 0x10AA80u);
    ctx->pc = 0x10AA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA78u;
    // 0x10aa7c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x10AA78u, 0x10AA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA80u;
label_10aa80:
    // 0x10aa80: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10aa84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10aa84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10aa88: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10aa88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10aa8c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10AA8Cu;
    SET_GPR_U32(ctx, 31, 0x10AA94u);
    ctx->pc = 0x10AA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA8Cu;
    // 0x10aa90: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10AA8Cu, 0x10AA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA94u;
label_10aa94:
    // 0x10aa94: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10aa98: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x10aa98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x10aa9c: 0xac53004c  sw          $s3, 0x4C($v0)
    ctx->pc = 0x10aa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 19));
    // 0x10aaa0: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x10AAA0u;
    SET_GPR_U32(ctx, 31, 0x10AAA8u);
    ctx->pc = 0x10AAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AAA0u;
    // 0x10aaa4: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x10AAA0u, 0x10AAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AAA8u;
label_10aaa8:
    // 0x10aaa8: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x10aaa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x10aaac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10aaacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10aab0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10aab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10aab4: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x10aab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x10aab8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10aab8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10aabc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10aabcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10aac0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10aac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10aac4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10aac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10aac8: 0x100001e6  b           . + 4 + (0x1E6 << 2)
    ctx->pc = 0x10AAC8u;
    {
        const bool branch_taken_0x10aac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AAC8u;
        // 0x10aacc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aac8) {
            ctx->pc = 0x10B264u;
            goto label_10b264;
        }
    }
    ctx->pc = 0x10AAD0u;
label_10aad0:
    // 0x10aad0: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x10aad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x10aad4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x10aad4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x10aad8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10aad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10aadc: 0x8e2405d0  lw          $a0, 0x5D0($s1)
    ctx->pc = 0x10aadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10aae0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x10aae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x10aae4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10aae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10aae8: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x10AAE8u;
    SET_GPR_U32(ctx, 31, 0x10AAF0u);
    ctx->pc = 0x10AAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AAE8u;
    // 0x10aaec: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x10AAE8u, 0x10AAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AAF0u;
label_10aaf0:
    // 0x10aaf0: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10aaf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10aaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10aaf8: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10aaf8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10aafc: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10AAFCu;
    SET_GPR_U32(ctx, 31, 0x10AB04u);
    ctx->pc = 0x10AB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AAFCu;
    // 0x10ab00: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10AAFCu, 0x10AB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB04u;
label_10ab04:
    // 0x10ab04: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10ab08: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x10ab08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x10ab0c: 0xac53004c  sw          $s3, 0x4C($v0)
    ctx->pc = 0x10ab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 19));
    // 0x10ab10: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x10AB10u;
    SET_GPR_U32(ctx, 31, 0x10AB18u);
    ctx->pc = 0x10AB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB10u;
    // 0x10ab14: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x10AB10u, 0x10AB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB18u;
label_10ab18:
    // 0x10ab18: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x10ab18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x10ab1c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10ab1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10ab20: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10ab20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10ab24: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x10ab24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x10ab28: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10ab28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10ab2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10ab2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ab30: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x10ab30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x10ab34: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x10ab34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x10ab38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10ab38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10ab3c: 0x100001c9  b           . + 4 + (0x1C9 << 2)
    ctx->pc = 0x10AB3Cu;
    {
        const bool branch_taken_0x10ab3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB3Cu;
        // 0x10ab40: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab3c) {
            ctx->pc = 0x10B264u;
            goto label_10b264;
        }
    }
    ctx->pc = 0x10AB44u;
label_10ab44:
    // 0x10ab44: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10ab44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10ab48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10ab48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ab4c: 0x8e2405d0  lw          $a0, 0x5D0($s1)
    ctx->pc = 0x10ab4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10ab50: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x10ab50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x10ab54: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10ab54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10ab58: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x10AB58u;
    SET_GPR_U32(ctx, 31, 0x10AB60u);
    ctx->pc = 0x10AB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB58u;
    // 0x10ab5c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x10AB58u, 0x10AB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB60u;
label_10ab60:
    // 0x10ab60: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10ab64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10ab64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ab68: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10ab68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10ab6c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10AB6Cu;
    SET_GPR_U32(ctx, 31, 0x10AB74u);
    ctx->pc = 0x10AB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB6Cu;
    // 0x10ab70: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10AB6Cu, 0x10AB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB74u;
label_10ab74:
    // 0x10ab74: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10ab78: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x10ab78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x10ab7c: 0xac53004c  sw          $s3, 0x4C($v0)
    ctx->pc = 0x10ab7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 19));
    // 0x10ab80: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x10AB80u;
    SET_GPR_U32(ctx, 31, 0x10AB88u);
    ctx->pc = 0x10AB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB80u;
    // 0x10ab84: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x10AB80u, 0x10AB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB88u;
label_10ab88:
    // 0x10ab88: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x10ab88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x10ab8c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10ab8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10ab90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10ab90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10ab94: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x10ab94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x10ab98: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10ab98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10ab9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10ab9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10aba0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10aba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10aba4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10aba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10aba8: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x10ABA8u;
    {
        const bool branch_taken_0x10aba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABA8u;
        // 0x10abac: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aba8) {
            ctx->pc = 0x10B264u;
            goto label_10b264;
        }
    }
    ctx->pc = 0x10ABB0u;
label_10abb0:
    // 0x10abb0: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x10abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10abb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10abb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10abb8: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10abb8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10abbc: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10ABBCu;
    SET_GPR_U32(ctx, 31, 0x10ABC4u);
    ctx->pc = 0x10ABC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ABBCu;
    // 0x10abc0: 0x8e2405b8  lw          $a0, 0x5B8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10ABBCu, 0x10ABC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ABC4u;
label_10abc4:
    // 0x10abc4: 0x8e2405b8  lw          $a0, 0x5B8($s1)
    ctx->pc = 0x10abc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10abc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10abc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10abcc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10abccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10abd0: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x10ABD0u;
    {
        const bool branch_taken_0x10abd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABD0u;
        // 0x10abd4: 0x8e2505bc  lw          $a1, 0x5BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10abd0) {
            ctx->pc = 0x10AF80u;
            goto label_10af80;
        }
    }
    ctx->pc = 0x10ABD8u;
label_10abd8:
    // 0x10abd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10abd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10abdc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10abdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10abe0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x10abe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x10abe4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10abe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10abe8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10abe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10abec: 0x8e2405b8  lw          $a0, 0x5B8($s1)
    ctx->pc = 0x10abecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10abf0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x10abf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x10abf4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x10abf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x10abf8: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x10ABF8u;
    SET_GPR_U32(ctx, 31, 0x10AC00u);
    ctx->pc = 0x10ABFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ABF8u;
    // 0x10abfc: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x10ABF8u, 0x10AC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC00u;
label_10ac00:
    // 0x10ac00: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x10ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10ac04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10ac04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ac08: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10ac08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10ac0c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10AC0Cu;
    SET_GPR_U32(ctx, 31, 0x10AC14u);
    ctx->pc = 0x10AC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AC0Cu;
    // 0x10ac10: 0x8e2405b8  lw          $a0, 0x5B8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10AC0Cu, 0x10AC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC14u;
label_10ac14:
    // 0x10ac14: 0x8e2405b8  lw          $a0, 0x5B8($s1)
    ctx->pc = 0x10ac14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10ac18: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10ac18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10ac1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10ac1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10ac20: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x10AC20u;
    {
        const bool branch_taken_0x10ac20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC20u;
        // 0x10ac24: 0x8e2505bc  lw          $a1, 0x5BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac20) {
            ctx->pc = 0x10AF80u;
            goto label_10af80;
        }
    }
    ctx->pc = 0x10AC28u;
label_10ac28:
    // 0x10ac28: 0x3c014013  lui         $at, 0x4013
    ctx->pc = 0x10ac28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16403 << 16));
    // 0x10ac2c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x10ac2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x10ac30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10ac30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10ac34: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x10ac34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x10ac38: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10ac38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10ac3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10ac3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ac40: 0x8e2405b8  lw          $a0, 0x5B8($s1)
    ctx->pc = 0x10ac40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10ac44: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x10ac44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x10ac48: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x10ac48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x10ac4c: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x10AC4Cu;
    SET_GPR_U32(ctx, 31, 0x10AC54u);
    ctx->pc = 0x10AC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AC4Cu;
    // 0x10ac50: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x10AC4Cu, 0x10AC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC54u;
label_10ac54:
    // 0x10ac54: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x10ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10ac58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10ac58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ac5c: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10ac5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10ac60: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10AC60u;
    SET_GPR_U32(ctx, 31, 0x10AC68u);
    ctx->pc = 0x10AC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AC60u;
    // 0x10ac64: 0x8e2405b8  lw          $a0, 0x5B8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10AC60u, 0x10AC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC68u;
label_10ac68:
    // 0x10ac68: 0x8e2405b8  lw          $a0, 0x5B8($s1)
    ctx->pc = 0x10ac68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10ac6c: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x10ac6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x10ac70: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x10ac70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x10ac74: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10ac74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10ac78: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x10AC78u;
    {
        const bool branch_taken_0x10ac78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC78u;
        // 0x10ac7c: 0x8e2505bc  lw          $a1, 0x5BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac78) {
            ctx->pc = 0x10AF80u;
            goto label_10af80;
        }
    }
    ctx->pc = 0x10AC80u;
label_10ac80:
    // 0x10ac80: 0x3c014026  lui         $at, 0x4026
    ctx->pc = 0x10ac80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16422 << 16));
    // 0x10ac84: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x10ac84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x10ac88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10ac88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10ac8c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x10ac8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x10ac90: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10ac90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10ac94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10ac94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ac98: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x10AC98u;
    {
        const bool branch_taken_0x10ac98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC98u;
        // 0x10ac9c: 0x8e2405b8  lw          $a0, 0x5B8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac98) {
            ctx->pc = 0x10AF4Cu;
            goto label_10af4c;
        }
    }
    ctx->pc = 0x10ACA0u;
label_10aca0:
    // 0x10aca0: 0x8e2205b0  lw          $v0, 0x5B0($s1)
    ctx->pc = 0x10aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
    // 0x10aca4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10aca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10aca8: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10aca8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10acac: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10ACACu;
    SET_GPR_U32(ctx, 31, 0x10ACB4u);
    ctx->pc = 0x10ACB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ACACu;
    // 0x10acb0: 0x8e2405b0  lw          $a0, 0x5B0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10ACACu, 0x10ACB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ACB4u;
label_10acb4:
    // 0x10acb4: 0x8e2505b4  lw          $a1, 0x5B4($s1)
    ctx->pc = 0x10acb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1460)));
    // 0x10acb8: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x10acb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x10acbc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10acbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10acc0: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x10ACC0u;
    SET_GPR_U32(ctx, 31, 0x10ACC8u);
    ctx->pc = 0x10ACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ACC0u;
    // 0x10acc4: 0x8e2405b0  lw          $a0, 0x5B0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x10ACC0u, 0x10ACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ACC8u;
label_10acc8:
    // 0x10acc8: 0x8e2205b0  lw          $v0, 0x5B0($s1)
    ctx->pc = 0x10acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
    // 0x10accc: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x10acccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x10acd0: 0x24a57b00  addiu       $a1, $a1, 0x7B00
    ctx->pc = 0x10acd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31488));
    // 0x10acd4: 0xac53004c  sw          $s3, 0x4C($v0)
    ctx->pc = 0x10acd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 19));
    // 0x10acd8: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x10ACD8u;
    SET_GPR_U32(ctx, 31, 0x10ACE0u);
    ctx->pc = 0x10ACDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ACD8u;
    // 0x10acdc: 0x8e2405b0  lw          $a0, 0x5B0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x10ACD8u, 0x10ACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ACE0u;
label_10ace0:
    // 0x10ace0: 0x10000178  b           . + 4 + (0x178 << 2)
    ctx->pc = 0x10ACE0u;
    {
        const bool branch_taken_0x10ace0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACE0u;
        // 0x10ace4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ace0) {
            ctx->pc = 0x10B2C4u;
            goto label_10b2c4;
        }
    }
    ctx->pc = 0x10ACE8u;
label_10ace8:
    // 0x10ace8: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x10ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10acec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10acecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10acf0: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10acf0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10acf4: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10ACF4u;
    SET_GPR_U32(ctx, 31, 0x10ACFCu);
    ctx->pc = 0x10ACF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ACF4u;
    // 0x10acf8: 0x8e2405b8  lw          $a0, 0x5B8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10ACF4u, 0x10ACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ACFCu;
label_10acfc:
    // 0x10acfc: 0x8e2405b8  lw          $a0, 0x5B8($s1)
    ctx->pc = 0x10acfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10ad00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10ad00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10ad04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10ad04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10ad08: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x10AD08u;
    {
        const bool branch_taken_0x10ad08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD08u;
        // 0x10ad0c: 0x8e2505bc  lw          $a1, 0x5BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad08) {
            ctx->pc = 0x10AF80u;
            goto label_10af80;
        }
    }
    ctx->pc = 0x10AD10u;
label_10ad10:
    // 0x10ad10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10ad10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10ad14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10ad14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ad18: 0x8e2405d0  lw          $a0, 0x5D0($s1)
    ctx->pc = 0x10ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10ad1c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x10ad1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x10ad20: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10ad20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10ad24: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x10AD24u;
    SET_GPR_U32(ctx, 31, 0x10AD2Cu);
    ctx->pc = 0x10AD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD24u;
    // 0x10ad28: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x10AD24u, 0x10AD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD2Cu;
label_10ad2c:
    // 0x10ad2c: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10ad30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10ad30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ad34: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10ad34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10ad38: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10AD38u;
    SET_GPR_U32(ctx, 31, 0x10AD40u);
    ctx->pc = 0x10AD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD38u;
    // 0x10ad3c: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10AD38u, 0x10AD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD40u;
label_10ad40:
    // 0x10ad40: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10ad40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10ad44: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x10ad44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x10ad48: 0xac53004c  sw          $s3, 0x4C($v0)
    ctx->pc = 0x10ad48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 19));
    // 0x10ad4c: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x10AD4Cu;
    SET_GPR_U32(ctx, 31, 0x10AD54u);
    ctx->pc = 0x10AD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD4Cu;
    // 0x10ad50: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x10AD4Cu, 0x10AD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD54u;
label_10ad54:
    // 0x10ad54: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x10ad54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x10ad58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10ad58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10ad5c: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x10ad5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x10ad60: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10ad60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10ad64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10ad64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ad68: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x10AD68u;
    {
        const bool branch_taken_0x10ad68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD68u;
        // 0x10ad6c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad68) {
            ctx->pc = 0x10ADC8u;
            goto label_10adc8;
        }
    }
    ctx->pc = 0x10AD70u;
label_10ad70:
    // 0x10ad70: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10ad70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10ad74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10ad74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ad78: 0x8e2405d0  lw          $a0, 0x5D0($s1)
    ctx->pc = 0x10ad78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10ad7c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x10ad7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x10ad80: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10ad80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10ad84: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x10AD84u;
    SET_GPR_U32(ctx, 31, 0x10AD8Cu);
    ctx->pc = 0x10AD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD84u;
    // 0x10ad88: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x10AD84u, 0x10AD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD8Cu;
label_10ad8c:
    // 0x10ad8c: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10ad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10ad90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10ad90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ad94: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10ad94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10ad98: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10AD98u;
    SET_GPR_U32(ctx, 31, 0x10ADA0u);
    ctx->pc = 0x10AD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD98u;
    // 0x10ad9c: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10AD98u, 0x10ADA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ADA0u;
label_10ada0:
    // 0x10ada0: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10ada4: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x10ada4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x10ada8: 0xac53004c  sw          $s3, 0x4C($v0)
    ctx->pc = 0x10ada8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 19));
    // 0x10adac: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x10ADACu;
    SET_GPR_U32(ctx, 31, 0x10ADB4u);
    ctx->pc = 0x10ADB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ADACu;
    // 0x10adb0: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x10ADACu, 0x10ADB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ADB4u;
label_10adb4:
    // 0x10adb4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x10adb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x10adb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10adb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10adbc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x10adbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10adc0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x10adc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x10adc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10adc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10adc8:
    // 0x10adc8: 0x8e2405d0  lw          $a0, 0x5D0($s1)
    ctx->pc = 0x10adc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10adcc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x10adccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x10add0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x10add0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x10add4: 0xc07f608  jal         func_1FD820
    ctx->pc = 0x10ADD4u;
    SET_GPR_U32(ctx, 31, 0x10ADDCu);
    ctx->pc = 0x10ADD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ADD4u;
    // 0x10add8: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD820u, 0x10ADD4u, 0x10ADDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ADDCu;
label_10addc:
    // 0x10addc: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x10ADDCu;
    {
        const bool branch_taken_0x10addc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ADDCu;
        // 0x10ade0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10addc) {
            ctx->pc = 0x10B2C4u;
            goto label_10b2c4;
        }
    }
    ctx->pc = 0x10ADE4u;
label_10ade4:
    // 0x10ade4: 0x8e2205c8  lw          $v0, 0x5C8($s1)
    ctx->pc = 0x10ade4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
    // 0x10ade8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10ade8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10adec: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10adecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10adf0: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10ADF0u;
    SET_GPR_U32(ctx, 31, 0x10ADF8u);
    ctx->pc = 0x10ADF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ADF0u;
    // 0x10adf4: 0x8e2405c8  lw          $a0, 0x5C8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10ADF0u, 0x10ADF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ADF8u;
label_10adf8:
    // 0x10adf8: 0x8e2405c8  lw          $a0, 0x5C8($s1)
    ctx->pc = 0x10adf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
    // 0x10adfc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10adfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10ae00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10ae00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10ae04: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x10AE04u;
    SET_GPR_U32(ctx, 31, 0x10AE0Cu);
    ctx->pc = 0x10AE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE04u;
    // 0x10ae08: 0x8e2505cc  lw          $a1, 0x5CC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x10AE04u, 0x10AE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE0Cu;
label_10ae0c:
    // 0x10ae0c: 0x8e2205c8  lw          $v0, 0x5C8($s1)
    ctx->pc = 0x10ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
    // 0x10ae10: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x10ae10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x10ae14: 0xac53004c  sw          $s3, 0x4C($v0)
    ctx->pc = 0x10ae14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 19));
    // 0x10ae18: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x10AE18u;
    SET_GPR_U32(ctx, 31, 0x10AE20u);
    ctx->pc = 0x10AE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE18u;
    // 0x10ae1c: 0x8e2405c8  lw          $a0, 0x5C8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x10AE18u, 0x10AE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE20u;
label_10ae20:
    // 0x10ae20: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x10AE20u;
    {
        const bool branch_taken_0x10ae20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AE20u;
        // 0x10ae24: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ae20) {
            ctx->pc = 0x10B2C4u;
            goto label_10b2c4;
        }
    }
    ctx->pc = 0x10AE28u;
label_10ae28:
    // 0x10ae28: 0x8e2405d0  lw          $a0, 0x5D0($s1)
    ctx->pc = 0x10ae28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10ae2c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10ae2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10ae30: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x10ae30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x10ae34: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x10AE34u;
    SET_GPR_U32(ctx, 31, 0x10AE3Cu);
    ctx->pc = 0x10AE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE34u;
    // 0x10ae38: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x10AE34u, 0x10AE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE3Cu;
label_10ae3c:
    // 0x10ae3c: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10ae40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10ae40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ae44: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10ae44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10ae48: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10AE48u;
    SET_GPR_U32(ctx, 31, 0x10AE50u);
    ctx->pc = 0x10AE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE48u;
    // 0x10ae4c: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10AE48u, 0x10AE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE50u;
label_10ae50:
    // 0x10ae50: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10ae54: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x10ae54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x10ae58: 0x24a57b00  addiu       $a1, $a1, 0x7B00
    ctx->pc = 0x10ae58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31488));
    // 0x10ae5c: 0xac53004c  sw          $s3, 0x4C($v0)
    ctx->pc = 0x10ae5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 19));
    // 0x10ae60: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x10AE60u;
    SET_GPR_U32(ctx, 31, 0x10AE68u);
    ctx->pc = 0x10AE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE60u;
    // 0x10ae64: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x10AE60u, 0x10AE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE68u;
label_10ae68:
    // 0x10ae68: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x10ae68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x10ae6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10ae6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ae70: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x10ae70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10ae74: 0x8e2405d0  lw          $a0, 0x5D0($s1)
    ctx->pc = 0x10ae74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10ae78: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x10ae78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x10ae7c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x10ae7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x10ae80: 0xc07f608  jal         func_1FD820
    ctx->pc = 0x10AE80u;
    SET_GPR_U32(ctx, 31, 0x10AE88u);
    ctx->pc = 0x10AE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE80u;
    // 0x10ae84: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD820u, 0x10AE80u, 0x10AE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE88u;
label_10ae88:
    // 0x10ae88: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x10AE88u;
    {
        const bool branch_taken_0x10ae88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AE88u;
        // 0x10ae8c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ae88) {
            ctx->pc = 0x10B2C4u;
            goto label_10b2c4;
        }
    }
    ctx->pc = 0x10AE90u;
label_10ae90:
    // 0x10ae90: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x10ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10ae94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10ae94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ae98: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10ae98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10ae9c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10AE9Cu;
    SET_GPR_U32(ctx, 31, 0x10AEA4u);
    ctx->pc = 0x10AEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE9Cu;
    // 0x10aea0: 0x8e2405b8  lw          $a0, 0x5B8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10AE9Cu, 0x10AEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AEA4u;
label_10aea4:
    // 0x10aea4: 0x8e2405b8  lw          $a0, 0x5B8($s1)
    ctx->pc = 0x10aea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10aea8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10aea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10aeac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10aeacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10aeb0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x10AEB0u;
    {
        const bool branch_taken_0x10aeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AEB0u;
        // 0x10aeb4: 0x8e2505bc  lw          $a1, 0x5BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aeb0) {
            ctx->pc = 0x10AF80u;
            goto label_10af80;
        }
    }
    ctx->pc = 0x10AEB8u;
label_10aeb8:
    // 0x10aeb8: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x10aeb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x10aebc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x10aebcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x10aec0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10aec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10aec4: 0x8e2405d0  lw          $a0, 0x5D0($s1)
    ctx->pc = 0x10aec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10aec8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10aec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10aecc: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x10aeccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x10aed0: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x10AED0u;
    SET_GPR_U32(ctx, 31, 0x10AED8u);
    ctx->pc = 0x10AED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AED0u;
    // 0x10aed4: 0xe7b40028  swc1        $f20, 0x28($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x10AED0u, 0x10AED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AED8u;
label_10aed8:
    // 0x10aed8: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10aed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10aedc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10aedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10aee0: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10aee0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10aee4: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10AEE4u;
    SET_GPR_U32(ctx, 31, 0x10AEECu);
    ctx->pc = 0x10AEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AEE4u;
    // 0x10aee8: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10AEE4u, 0x10AEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AEECu;
label_10aeec:
    // 0x10aeec: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10aef0: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x10aef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x10aef4: 0xac53004c  sw          $s3, 0x4C($v0)
    ctx->pc = 0x10aef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 19));
    // 0x10aef8: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x10AEF8u;
    SET_GPR_U32(ctx, 31, 0x10AF00u);
    ctx->pc = 0x10AEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AEF8u;
    // 0x10aefc: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x10AEF8u, 0x10AF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF00u;
label_10af00:
    // 0x10af00: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x10af00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x10af04: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10af04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10af08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10af08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10af0c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x10af0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10af10: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x10af10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x10af14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10af14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10af18:
    // 0x10af18: 0x8e2405d0  lw          $a0, 0x5D0($s1)
    ctx->pc = 0x10af18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10af1c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x10af1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x10af20: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x10af20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x10af24: 0xc07f608  jal         func_1FD820
    ctx->pc = 0x10AF24u;
    SET_GPR_U32(ctx, 31, 0x10AF2Cu);
    ctx->pc = 0x10AF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF24u;
    // 0x10af28: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD820u, 0x10AF24u, 0x10AF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF2Cu;
label_10af2c:
    // 0x10af2c: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x10AF2Cu;
    {
        const bool branch_taken_0x10af2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AF2Cu;
        // 0x10af30: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10af2c) {
            ctx->pc = 0x10B2C4u;
            goto label_10b2c4;
        }
    }
    ctx->pc = 0x10AF34u;
label_10af34:
    // 0x10af34: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x10af34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x10af38: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x10af38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x10af3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10af3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10af40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10af40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10af44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10af44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10af48: 0x8e2405b8  lw          $a0, 0x5B8($s1)
    ctx->pc = 0x10af48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
label_10af4c:
    // 0x10af4c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x10af4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x10af50: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x10af50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x10af54: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x10AF54u;
    SET_GPR_U32(ctx, 31, 0x10AF5Cu);
    ctx->pc = 0x10AF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF54u;
    // 0x10af58: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x10AF54u, 0x10AF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF5Cu;
label_10af5c:
    // 0x10af5c: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x10af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10af60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10af60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10af64: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10af64u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10af68: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10AF68u;
    SET_GPR_U32(ctx, 31, 0x10AF70u);
    ctx->pc = 0x10AF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF68u;
    // 0x10af6c: 0x8e2405b8  lw          $a0, 0x5B8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10AF68u, 0x10AF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF70u;
label_10af70:
    // 0x10af70: 0x8e2405b8  lw          $a0, 0x5B8($s1)
    ctx->pc = 0x10af70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10af74: 0x8e2505bc  lw          $a1, 0x5BC($s1)
    ctx->pc = 0x10af74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1468)));
    // 0x10af78: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x10af78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x10af7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10af7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10af80:
    // 0x10af80: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x10AF80u;
    SET_GPR_U32(ctx, 31, 0x10AF88u);
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x10AF80u, 0x10AF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF88u;
label_10af88:
    // 0x10af88: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x10af88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10af8c: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x10af8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x10af90: 0xac53004c  sw          $s3, 0x4C($v0)
    ctx->pc = 0x10af90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 19));
    // 0x10af94: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x10AF94u;
    SET_GPR_U32(ctx, 31, 0x10AF9Cu);
    ctx->pc = 0x10AF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF94u;
    // 0x10af98: 0x8e2405b8  lw          $a0, 0x5B8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x10AF94u, 0x10AF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF9Cu;
label_10af9c:
    // 0x10af9c: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x10AF9Cu;
    {
        const bool branch_taken_0x10af9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AF9Cu;
        // 0x10afa0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10af9c) {
            ctx->pc = 0x10B2C4u;
            goto label_10b2c4;
        }
    }
    ctx->pc = 0x10AFA4u;
label_10afa4:
    // 0x10afa4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x10afa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x10afa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10afa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10afac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10afacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10afb0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10afb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10afb4: 0x8e2405d0  lw          $a0, 0x5D0($s1)
    ctx->pc = 0x10afb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10afb8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x10afb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x10afbc: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10afbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10afc0: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x10AFC0u;
    SET_GPR_U32(ctx, 31, 0x10AFC8u);
    ctx->pc = 0x10AFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AFC0u;
    // 0x10afc4: 0xe7b40024  swc1        $f20, 0x24($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x10AFC0u, 0x10AFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AFC8u;
label_10afc8:
    // 0x10afc8: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10afc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10afcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10afccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10afd0: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10afd0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10afd4: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10AFD4u;
    SET_GPR_U32(ctx, 31, 0x10AFDCu);
    ctx->pc = 0x10AFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AFD4u;
    // 0x10afd8: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10AFD4u, 0x10AFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AFDCu;
label_10afdc:
    // 0x10afdc: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10afe0: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x10afe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x10afe4: 0xac53004c  sw          $s3, 0x4C($v0)
    ctx->pc = 0x10afe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 19));
    // 0x10afe8: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x10AFE8u;
    SET_GPR_U32(ctx, 31, 0x10AFF0u);
    ctx->pc = 0x10AFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AFE8u;
    // 0x10afec: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x10AFE8u, 0x10AFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AFF0u;
label_10aff0:
    // 0x10aff0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10aff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10aff4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10aff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10aff8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x10aff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10affc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x10affcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x10b000: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10b000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10b004: 0x8e2405d0  lw          $a0, 0x5D0($s1)
    ctx->pc = 0x10b004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10b008: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x10b008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x10b00c: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x10B00Cu;
    {
        const bool branch_taken_0x10b00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B00Cu;
        // 0x10b010: 0xe7b40014  swc1        $f20, 0x14($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b00c) {
            ctx->pc = 0x10B270u;
            goto label_10b270;
        }
    }
    ctx->pc = 0x10B014u;
label_10b014:
    // 0x10b014: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x10b014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x10b018: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10b018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10b01c: 0x8e2405d0  lw          $a0, 0x5D0($s1)
    ctx->pc = 0x10b01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10b020: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10b020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10b024: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x10b024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x10b028: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x10B028u;
    SET_GPR_U32(ctx, 31, 0x10B030u);
    ctx->pc = 0x10B02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B028u;
    // 0x10b02c: 0xe7b40028  swc1        $f20, 0x28($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x10B028u, 0x10B030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B030u;
label_10b030:
    // 0x10b030: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10b030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10b034: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10b034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b038: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10b038u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10b03c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10B03Cu;
    SET_GPR_U32(ctx, 31, 0x10B044u);
    ctx->pc = 0x10B040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B03Cu;
    // 0x10b040: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10B03Cu, 0x10B044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B044u;
label_10b044:
    // 0x10b044: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10b044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10b048: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x10b048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x10b04c: 0xac53004c  sw          $s3, 0x4C($v0)
    ctx->pc = 0x10b04cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 19));
    // 0x10b050: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x10B050u;
    SET_GPR_U32(ctx, 31, 0x10B058u);
    ctx->pc = 0x10B054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B050u;
    // 0x10b054: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x10B050u, 0x10B058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B058u;
label_10b058:
    // 0x10b058: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10b058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10b05c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10b05cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b060: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x10b060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10b064: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x10b064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x10b068: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10b068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10b06c: 0x8e2405d0  lw          $a0, 0x5D0($s1)
    ctx->pc = 0x10b06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10b070: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x10b070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x10b074: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x10B074u;
    {
        const bool branch_taken_0x10b074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B074u;
        // 0x10b078: 0xe7b40014  swc1        $f20, 0x14($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b074) {
            ctx->pc = 0x10B270u;
            goto label_10b270;
        }
    }
    ctx->pc = 0x10B07Cu;
label_10b07c:
    // 0x10b07c: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x10b07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x10b080: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x10b080u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x10b084: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10b084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b088: 0x8e2405d0  lw          $a0, 0x5D0($s1)
    ctx->pc = 0x10b088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10b08c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x10b08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x10b090: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10b090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10b094: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x10B094u;
    SET_GPR_U32(ctx, 31, 0x10B09Cu);
    ctx->pc = 0x10B098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B094u;
    // 0x10b098: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x10B094u, 0x10B09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B09Cu;
label_10b09c:
    // 0x10b09c: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10b0a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10b0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b0a4: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10b0a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10b0a8: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10B0A8u;
    SET_GPR_U32(ctx, 31, 0x10B0B0u);
    ctx->pc = 0x10B0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B0A8u;
    // 0x10b0ac: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10B0A8u, 0x10B0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B0B0u;
label_10b0b0:
    // 0x10b0b0: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10b0b4: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x10b0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x10b0b8: 0xac53004c  sw          $s3, 0x4C($v0)
    ctx->pc = 0x10b0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 19));
    // 0x10b0bc: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x10B0BCu;
    SET_GPR_U32(ctx, 31, 0x10B0C4u);
    ctx->pc = 0x10B0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B0BCu;
    // 0x10b0c0: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x10B0BCu, 0x10B0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B0C4u;
label_10b0c4:
    // 0x10b0c4: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x10b0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x10b0c8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10b0c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10b0cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10b0ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10b0d0: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x10b0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x10b0d4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10b0d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10b0d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10b0d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b0dc: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x10b0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x10b0e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10b0e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10b0e4: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x10B0E4u;
    {
        const bool branch_taken_0x10b0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B0E4u;
        // 0x10b0e8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b0e4) {
            ctx->pc = 0x10B264u;
            goto label_10b264;
        }
    }
    ctx->pc = 0x10B0ECu;
label_10b0ec:
    // 0x10b0ec: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x10b0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x10b0f0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x10b0f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x10b0f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10b0f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b0f8: 0x8e2405d0  lw          $a0, 0x5D0($s1)
    ctx->pc = 0x10b0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10b0fc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x10b0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x10b100: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10b100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10b104: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x10B104u;
    SET_GPR_U32(ctx, 31, 0x10B10Cu);
    ctx->pc = 0x10B108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B104u;
    // 0x10b108: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x10B104u, 0x10B10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B10Cu;
label_10b10c:
    // 0x10b10c: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10b110: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10b110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b114: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10b114u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10b118: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10B118u;
    SET_GPR_U32(ctx, 31, 0x10B120u);
    ctx->pc = 0x10B11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B118u;
    // 0x10b11c: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10B118u, 0x10B120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B120u;
label_10b120:
    // 0x10b120: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10b120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10b124: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x10b124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x10b128: 0xac53004c  sw          $s3, 0x4C($v0)
    ctx->pc = 0x10b128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 19));
    // 0x10b12c: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x10B12Cu;
    SET_GPR_U32(ctx, 31, 0x10B134u);
    ctx->pc = 0x10B130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B12Cu;
    // 0x10b130: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x10B12Cu, 0x10B134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B134u;
label_10b134:
    // 0x10b134: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x10b134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x10b138: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10b138u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10b13c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10b13cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10b140: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x10b140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x10b144: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10b144u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10b148: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10b148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b14c: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x10b14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x10b150: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10b150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10b154: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x10B154u;
    {
        const bool branch_taken_0x10b154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B154u;
        // 0x10b158: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b154) {
            ctx->pc = 0x10B264u;
            goto label_10b264;
        }
    }
    ctx->pc = 0x10B15Cu;
label_10b15c:
    // 0x10b15c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x10b15cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x10b160: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10b160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b164: 0x8e2405b8  lw          $a0, 0x5B8($s1)
    ctx->pc = 0x10b164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10b168: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x10B168u;
    SET_GPR_U32(ctx, 31, 0x10B170u);
    ctx->pc = 0x10B16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B168u;
    // 0x10b16c: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x10B168u, 0x10B170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B170u;
label_10b170:
    // 0x10b170: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x10b170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10b174: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10b174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b178: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10b178u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10b17c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10B17Cu;
    SET_GPR_U32(ctx, 31, 0x10B184u);
    ctx->pc = 0x10B180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B17Cu;
    // 0x10b180: 0x8e2405b8  lw          $a0, 0x5B8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10B17Cu, 0x10B184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B184u;
label_10b184:
    // 0x10b184: 0x8e2405b8  lw          $a0, 0x5B8($s1)
    ctx->pc = 0x10b184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10b188: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x10b188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x10b18c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10b18cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10b190: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10b190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10b194: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x10B194u;
    SET_GPR_U32(ctx, 31, 0x10B19Cu);
    ctx->pc = 0x10B198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B194u;
    // 0x10b198: 0x8e2505bc  lw          $a1, 0x5BC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1468)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x10B194u, 0x10B19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B19Cu;
label_10b19c:
    // 0x10b19c: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x10b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10b1a0: 0x26230100  addiu       $v1, $s1, 0x100
    ctx->pc = 0x10b1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x10b1a4: 0x13a30007  beq         $sp, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10B1A4u;
    {
        const bool branch_taken_0x10b1a4 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 3));
        ctx->pc = 0x10B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B1A4u;
        // 0x10b1a8: 0xac53004c  sw          $s3, 0x4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b1a4) {
            ctx->pc = 0x10B1C4u;
            goto label_10b1c4;
        }
    }
    ctx->pc = 0x10B1ACu;
    // 0x10b1ac: 0xc6200100  lwc1        $f0, 0x100($s1)
    ctx->pc = 0x10b1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10b1b0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x10b1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x10b1b4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x10b1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10b1b8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x10b1b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x10b1bc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x10b1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10b1c0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x10b1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_10b1c4:
    // 0x10b1c4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x10b1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10b1c8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x10b1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x10b1cc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x10b1ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x10b1d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10b1d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10b1d4: 0x0  nop
    ctx->pc = 0x10b1d4u;
    // NOP
    // 0x10b1d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x10b1d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x10b1dc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10b1dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10b1e0: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x10B1E0u;
    SET_GPR_U32(ctx, 31, 0x10B1E8u);
    ctx->pc = 0x10B1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B1E0u;
    // 0x10b1e4: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x10B1E0u, 0x10B1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B1E8u;
label_10b1e8:
    // 0x10b1e8: 0x8e2405b8  lw          $a0, 0x5B8($s1)
    ctx->pc = 0x10b1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10b1ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10b1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1f0: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x10B1F0u;
    SET_GPR_U32(ctx, 31, 0x10B1F8u);
    ctx->pc = 0x10B1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B1F0u;
    // 0x10b1f4: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x10B1F0u, 0x10B1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B1F8u;
label_10b1f8:
    // 0x10b1f8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x10B1F8u;
    {
        const bool branch_taken_0x10b1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B1F8u;
        // 0x10b1fc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b1f8) {
            ctx->pc = 0x10B2C4u;
            goto label_10b2c4;
        }
    }
    ctx->pc = 0x10B200u;
label_10b200:
    // 0x10b200: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10b200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10b204: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10b204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b208: 0x8e2405d0  lw          $a0, 0x5D0($s1)
    ctx->pc = 0x10b208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10b20c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x10b20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x10b210: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10b210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10b214: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x10B214u;
    SET_GPR_U32(ctx, 31, 0x10B21Cu);
    ctx->pc = 0x10B218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B214u;
    // 0x10b218: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x10B214u, 0x10B21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B21Cu;
label_10b21c:
    // 0x10b21c: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10b21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10b220: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10b220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b224: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10b224u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10b228: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10B228u;
    SET_GPR_U32(ctx, 31, 0x10B230u);
    ctx->pc = 0x10B22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B228u;
    // 0x10b22c: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10B228u, 0x10B230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B230u;
label_10b230:
    // 0x10b230: 0x8e2205d0  lw          $v0, 0x5D0($s1)
    ctx->pc = 0x10b230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10b234: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x10b234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x10b238: 0xac53004c  sw          $s3, 0x4C($v0)
    ctx->pc = 0x10b238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 19));
    // 0x10b23c: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x10B23Cu;
    SET_GPR_U32(ctx, 31, 0x10B244u);
    ctx->pc = 0x10B240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B23Cu;
    // 0x10b240: 0x8e2405d0  lw          $a0, 0x5D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x10B23Cu, 0x10B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B244u;
label_10b244:
    // 0x10b244: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x10b244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x10b248: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10b248u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10b24c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10b24cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10b250: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x10b250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10b254: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x10b254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x10b258: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10b258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b25c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x10b25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x10b260: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10b260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10b264:
    // 0x10b264: 0x8e2405d0  lw          $a0, 0x5D0($s1)
    ctx->pc = 0x10b264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
    // 0x10b268: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x10b268u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x10b26c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x10b26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_10b270:
    // 0x10b270: 0xc07f608  jal         func_1FD820
    ctx->pc = 0x10B270u;
    SET_GPR_U32(ctx, 31, 0x10B278u);
    ctx->pc = 0x10B274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B270u;
    // 0x10b274: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD820u, 0x10B270u, 0x10B278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B278u;
label_10b278:
    // 0x10b278: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x10B278u;
    {
        const bool branch_taken_0x10b278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B278u;
        // 0x10b27c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b278) {
            ctx->pc = 0x10B2C4u;
            goto label_10b2c4;
        }
    }
    ctx->pc = 0x10B280u;
label_10b280:
    // 0x10b280: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x10b280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10b284: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10b284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b288: 0xa4520046  sh          $s2, 0x46($v0)
    ctx->pc = 0x10b288u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    // 0x10b28c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10B28Cu;
    SET_GPR_U32(ctx, 31, 0x10B294u);
    ctx->pc = 0x10B290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B28Cu;
    // 0x10b290: 0x8e2405b8  lw          $a0, 0x5B8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10B28Cu, 0x10B294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B294u;
label_10b294:
    // 0x10b294: 0x8e2405b8  lw          $a0, 0x5B8($s1)
    ctx->pc = 0x10b294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10b298: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x10b298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x10b29c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10b29cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10b2a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10b2a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10b2a4: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x10B2A4u;
    SET_GPR_U32(ctx, 31, 0x10B2ACu);
    ctx->pc = 0x10B2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B2A4u;
    // 0x10b2a8: 0x8e2505bc  lw          $a1, 0x5BC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1468)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x10B2A4u, 0x10B2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B2ACu;
label_10b2ac:
    // 0x10b2ac: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x10b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x10b2b0: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x10b2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x10b2b4: 0xac53004c  sw          $s3, 0x4C($v0)
    ctx->pc = 0x10b2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 19));
    // 0x10b2b8: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x10B2B8u;
    SET_GPR_U32(ctx, 31, 0x10B2C0u);
    ctx->pc = 0x10B2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B2B8u;
    // 0x10b2bc: 0x8e2405b8  lw          $a0, 0x5B8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x10B2B8u, 0x10B2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B2C0u;
label_10b2c0:
    // 0x10b2c0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x10b2c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_10b2c4:
    // 0x10b2c4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x10b2c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10b2c8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x10b2c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10b2cc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x10b2ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b2d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x10b2d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b2d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10b2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b2d8: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x10b2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x10b2dc: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x10b2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10b2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x10B2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B2E0u;
        // 0x10b2e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B2E8u;
}
