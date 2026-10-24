#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r201_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r201
{
// Function: func_0079A9C0
// Address: 0x79a9c0 - 0x79ae60
void func_0079A9C0_0x79a9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A9C0_0x79a9c0");
#endif

    switch (ctx->pc) {
        case 0x79aa28u: goto label_79aa28;
        case 0x79aad8u: goto label_79aad8;
        case 0x79aaf8u: goto label_79aaf8;
        case 0x79ab60u: goto label_79ab60;
        case 0x79ab6cu: goto label_79ab6c;
        case 0x79ab80u: goto label_79ab80;
        case 0x79ab90u: goto label_79ab90;
        case 0x79ab98u: goto label_79ab98;
        case 0x79abe4u: goto label_79abe4;
        case 0x79abf0u: goto label_79abf0;
        case 0x79abfcu: goto label_79abfc;
        case 0x79ac94u: goto label_79ac94;
        case 0x79aca0u: goto label_79aca0;
        case 0x79aca8u: goto label_79aca8;
        case 0x79acb0u: goto label_79acb0;
        case 0x79acbcu: goto label_79acbc;
        case 0x79acccu: goto label_79accc;
        case 0x79acd8u: goto label_79acd8;
        case 0x79ace4u: goto label_79ace4;
        case 0x79acfcu: goto label_79acfc;
        case 0x79ad04u: goto label_79ad04;
        case 0x79ad0cu: goto label_79ad0c;
        case 0x79ad58u: goto label_79ad58;
        case 0x79ad60u: goto label_79ad60;
        case 0x79ad78u: goto label_79ad78;
        case 0x79ad80u: goto label_79ad80;
        case 0x79ad98u: goto label_79ad98;
        case 0x79ae1cu: goto label_79ae1c;
        case 0x79ae28u: goto label_79ae28;
        default: break;
    }

    ctx->pc = 0x79a9c0u;

    // 0x79a9c0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x79a9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x79a9c4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x79a9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79a9c8: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x79a9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x79a9cc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x79a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a9d0: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x79a9d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a9d4: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x79a9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79a9d8: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x79a9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a9dc: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x79a9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x79a9e0: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x79a9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x79a9e4: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x79a9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x79a9e8: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x79a9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x79a9ec: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x79a9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x79a9f0: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x79a9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x79a9f4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x79a9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x79a9f8: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x79a9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x79a9fc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x79a9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x79aa00: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x79aa00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x79aa04: 0xa3b20010  sb          $s2, 0x10($sp)
    ctx->pc = 0x79aa04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 18));
    // 0x79aa08: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x79aa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79aa0c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x79aa0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79aa10: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79aa10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79aa14: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x79aa14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa18: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x79aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x79aa1c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79aa1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79aa20: 0xc0b0a92  jal         func_2C2A48
    ctx->pc = 0x79AA20u;
    SET_GPR_U32(ctx, 31, 0x79AA28u);
    ctx->pc = 0x79AA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA20u;
    // 0x79aa24: 0x3c141000  lui         $s4, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79AA20u, 0x79AA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA28u;
label_79aa28:
    // 0x79aa28: 0x3c15007a  lui         $s5, 0x7A
    ctx->pc = 0x79aa28u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
    // 0x79aa2c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x79aa30: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x79aa30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79aa34: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x79aa34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79aa38: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x79aa38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x79aa3c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79aa40: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x79aa40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x79aa44: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x79AA44u;
    {
        const bool branch_taken_0x79aa44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA44u;
        // 0x79aa48: 0x3c13003c  lui         $s3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa44) {
            ctx->pc = 0x79AB6Cu;
            goto label_79ab6c;
        }
    }
    ctx->pc = 0x79AA4Cu;
    // 0x79aa4c: 0x8ea3bd80  lw          $v1, -0x4280($s5)
    ctx->pc = 0x79aa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950272)));
    // 0x79aa50: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x79aa50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79aa54: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x79aa54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x79aa58: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x79aa58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x79aa5c: 0x52ef8  dsll        $a1, $a1, 27
    ctx->pc = 0x79aa5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 27);
    // 0x79aa60: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x79aa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79aa64: 0xdc6202f0  ld          $v0, 0x2F0($v1)
    ctx->pc = 0x79aa64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 752)));
    // 0x79aa68: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x79aa68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x79aa6c: 0x54450007  bnel        $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x79AA6Cu;
    {
        const bool branch_taken_0x79aa6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x79aa6c) {
            ctx->pc = 0x79AA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AA6Cu;
            // 0x79aa70: 0x8ea3bd80  lw          $v1, -0x4280($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AA8Cu;
            goto label_79aa8c;
        }
    }
    ctx->pc = 0x79AA74u;
    // 0x79aa74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79aa78: 0xa06002f7  sb          $zero, 0x2F7($v1)
    ctx->pc = 0x79aa78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x79aa7c: 0xa06202f6  sb          $v0, 0x2F6($v1)
    ctx->pc = 0x79aa7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x79aa80: 0xa06002f4  sb          $zero, 0x2F4($v1)
    ctx->pc = 0x79aa80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x79aa84: 0xa07202f5  sb          $s2, 0x2F5($v1)
    ctx->pc = 0x79aa84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 757), (uint8_t)GPR_U32(ctx, 18));
    // 0x79aa88: 0x8ea3bd80  lw          $v1, -0x4280($s5)
    ctx->pc = 0x79aa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950272)));
label_79aa8c:
    // 0x79aa8c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x79aa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x79aa90: 0xdc6202f0  ld          $v0, 0x2F0($v1)
    ctx->pc = 0x79aa90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 752)));
    // 0x79aa94: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x79aa94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x79aa98: 0x14450007  bne         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x79AA98u;
    {
        const bool branch_taken_0x79aa98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x79AA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA98u;
        // 0x79aa9c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa98) {
            ctx->pc = 0x79AAB8u;
            goto label_79aab8;
        }
    }
    ctx->pc = 0x79AAA0u;
    // 0x79aaa0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79aaa4: 0xa07202f5  sb          $s2, 0x2F5($v1)
    ctx->pc = 0x79aaa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 757), (uint8_t)GPR_U32(ctx, 18));
    // 0x79aaa8: 0xa06202f6  sb          $v0, 0x2F6($v1)
    ctx->pc = 0x79aaa8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x79aaac: 0xa06002f7  sb          $zero, 0x2F7($v1)
    ctx->pc = 0x79aaacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x79aab0: 0xa06002f4  sb          $zero, 0x2F4($v1)
    ctx->pc = 0x79aab0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x79aab4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_79aab8:
    // 0x79aab8: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x79aab8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x79aabc: 0x8c43d6e8  lw          $v1, -0x2918($v0)
    ctx->pc = 0x79aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956776)));
    // 0x79aac0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79aac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aac4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x79aac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aac8: 0x8c621f20  lw          $v0, 0x1F20($v1)
    ctx->pc = 0x79aac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7968)));
    // 0x79aacc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79aaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79aad0: 0xc0a581c  jal         func_296070
    ctx->pc = 0x79AAD0u;
    SET_GPR_U32(ctx, 31, 0x79AAD8u);
    ctx->pc = 0x79AAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAD0u;
    // 0x79aad4: 0xac621f20  sw          $v0, 0x1F20($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 7968), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296070u, 0x79AAD0u, 0x79AAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAD8u;
label_79aad8:
    // 0x79aad8: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79aad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x79aadc: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79aadcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x79aae0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79aae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79aae4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79aae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aae8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x79aae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79aaec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79aaecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aaf0: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79AAF0u;
    SET_GPR_U32(ctx, 31, 0x79AAF8u);
    ctx->pc = 0x79AAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAF0u;
    // 0x79aaf4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79AAF0u, 0x79AAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAF8u;
label_79aaf8:
    // 0x79aaf8: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x79aafc: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x79aafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x79ab00: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x79ab00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x79ab04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79ab04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79ab08: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x79ab08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79ab0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ab0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab10: 0x3c0142ac  lui         $at, 0x42AC
    ctx->pc = 0x79ab10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17068 << 16));
    // 0x79ab14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79ab14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79ab18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x79ab18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab1c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79ab20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79ab20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79ab24: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79ab24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79ab28: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x79ab28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x79ab2c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79ab2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x79ab30: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x79ab30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x79ab34: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x79ab34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x79ab38: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x79ab38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x79ab3c: 0xe602000c  swc1        $f2, 0xC($s0)
    ctx->pc = 0x79ab3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x79ab40: 0x3c014046  lui         $at, 0x4046
    ctx->pc = 0x79ab40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16454 << 16));
    // 0x79ab44: 0x3421d3f2  ori         $at, $at, 0xD3F2
    ctx->pc = 0x79ab44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54258);
    // 0x79ab48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79ab48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79ab4c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x79ab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x79ab50: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x79ab50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x79ab54: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x79ab54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x79ab58: 0xc1e6e3e  jal         func_79B8F8
    ctx->pc = 0x79AB58u;
    SET_GPR_U32(ctx, 31, 0x79AB60u);
    ctx->pc = 0x79AB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB58u;
    // 0x79ab5c: 0xe622000c  swc1        $f2, 0xC($s1) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B8F8u, 0x79AB58u, 0x79AB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB60u;
label_79ab60:
    // 0x79ab60: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79ab64: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79AB64u;
    SET_GPR_U32(ctx, 31, 0x79AB6Cu);
    ctx->pc = 0x79AB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB64u;
    // 0x79ab68: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79AB64u, 0x79AB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB6Cu;
label_79ab6c:
    // 0x79ab6c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x79ab6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79ab70: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x79ab70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79ab74: 0x3c170060  lui         $s7, 0x60
    ctx->pc = 0x79ab74u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
    // 0x79ab78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79AB78u;
    {
        const bool branch_taken_0x79ab78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB78u;
        // 0x79ab7c: 0x3c1e007a  lui         $fp, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab78) {
            ctx->pc = 0x79AB90u;
            goto label_79ab90;
        }
    }
    ctx->pc = 0x79AB80u;
label_79ab80:
    // 0x79ab80: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79ab84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79ab84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ab88: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79AB88u;
    SET_GPR_U32(ctx, 31, 0x79AB90u);
    ctx->pc = 0x79AB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB88u;
    // 0x79ab8c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AB88u, 0x79AB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB90u;
label_79ab90:
    // 0x79ab90: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x79AB90u;
    SET_GPR_U32(ctx, 31, 0x79AB98u);
    ctx->pc = 0x79AB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB90u;
    // 0x79ab94: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x79AB90u, 0x79AB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB98u;
label_79ab98:
    // 0x79ab98: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79AB98u;
    {
        const bool branch_taken_0x79ab98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB98u;
        // 0x79ab9c: 0x8ea3bd80  lw          $v1, -0x4280($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab98) {
            ctx->pc = 0x79AB80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ab80;
        }
    }
    ctx->pc = 0x79ABA0u;
    // 0x79aba0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79aba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aba4: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x79aba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x79aba8: 0x8c8205b8  lw          $v0, 0x5B8($a0)
    ctx->pc = 0x79aba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
    // 0x79abac: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x79abacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x79abb0: 0xac8205b8  sw          $v0, 0x5B8($a0)
    ctx->pc = 0x79abb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1464), GPR_U32(ctx, 2));
    // 0x79abb4: 0x8ea3bd80  lw          $v1, -0x4280($s5)
    ctx->pc = 0x79abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950272)));
    // 0x79abb8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x79abb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79abbc: 0x8c8205b8  lw          $v0, 0x5B8($a0)
    ctx->pc = 0x79abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
    // 0x79abc0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x79abc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x79abc4: 0xac8205b8  sw          $v0, 0x5B8($a0)
    ctx->pc = 0x79abc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1464), GPR_U32(ctx, 2));
    // 0x79abc8: 0x8ea3bd80  lw          $v1, -0x4280($s5)
    ctx->pc = 0x79abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950272)));
    // 0x79abcc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x79abccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x79abd0: 0x8c8205b8  lw          $v0, 0x5B8($a0)
    ctx->pc = 0x79abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
    // 0x79abd4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x79abd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x79abd8: 0xac8205b8  sw          $v0, 0x5B8($a0)
    ctx->pc = 0x79abd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1464), GPR_U32(ctx, 2));
    // 0x79abdc: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79ABDCu;
    SET_GPR_U32(ctx, 31, 0x79ABE4u);
    ctx->pc = 0x79ABE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABDCu;
    // 0x79abe0: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79ABDCu, 0x79ABE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABE4u;
label_79abe4:
    // 0x79abe4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79abe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79abe8: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79ABE8u;
    SET_GPR_U32(ctx, 31, 0x79ABF0u);
    ctx->pc = 0x79ABECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABE8u;
    // 0x79abec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79ABE8u, 0x79ABF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABF0u;
label_79abf0:
    // 0x79abf0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79abf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79abf4: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79ABF4u;
    SET_GPR_U32(ctx, 31, 0x79ABFCu);
    ctx->pc = 0x79ABF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABF4u;
    // 0x79abf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79ABF4u, 0x79ABFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABFCu;
label_79abfc:
    // 0x79abfc: 0x8ea3bd80  lw          $v1, -0x4280($s5)
    ctx->pc = 0x79abfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950272)));
    // 0x79ac00: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x79ac00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79ac04: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x79ac04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x79ac08: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x79ac08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x79ac0c: 0x636f8  dsll        $a2, $a2, 27
    ctx->pc = 0x79ac0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 27);
    // 0x79ac10: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x79ac10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79ac14: 0xdc8202f0  ld          $v0, 0x2F0($a0)
    ctx->pc = 0x79ac14u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 752)));
    // 0x79ac18: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x79ac18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x79ac1c: 0x54460009  bnel        $v0, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x79AC1Cu;
    {
        const bool branch_taken_0x79ac1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x79ac1c) {
            ctx->pc = 0x79AC20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AC1Cu;
            // 0x79ac20: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AC44u;
            goto label_79ac44;
        }
    }
    ctx->pc = 0x79AC24u;
    // 0x79ac24: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x79ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79ac28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x79ac28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79ac2c: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x79ac2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x79ac30: 0xa08302f6  sb          $v1, 0x2F6($a0)
    ctx->pc = 0x79ac30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x79ac34: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x79ac34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x79ac38: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x79ac38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x79ac3c: 0x8ea3bd80  lw          $v1, -0x4280($s5)
    ctx->pc = 0x79ac3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950272)));
    // 0x79ac40: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x79ac40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_79ac44:
    // 0x79ac44: 0xdc8202f0  ld          $v0, 0x2F0($a0)
    ctx->pc = 0x79ac44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 752)));
    // 0x79ac48: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x79ac48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x79ac4c: 0x14460007  bne         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x79AC4Cu;
    {
        const bool branch_taken_0x79ac4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x79AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC4Cu;
        // 0x79ac50: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac4c) {
            ctx->pc = 0x79AC6Cu;
            goto label_79ac6c;
        }
    }
    ctx->pc = 0x79AC54u;
    // 0x79ac54: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x79ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79ac58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x79ac58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79ac5c: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x79ac5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x79ac60: 0xa08302f6  sb          $v1, 0x2F6($a0)
    ctx->pc = 0x79ac60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x79ac64: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x79ac64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x79ac68: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x79ac68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
label_79ac6c:
    // 0x79ac6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79ac6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac70: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79ac70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac74: 0x24060097  addiu       $a2, $zero, 0x97
    ctx->pc = 0x79ac74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x79ac78: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79ac78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79ac7c: 0x26e4ee00  addiu       $a0, $s7, -0x1200
    ctx->pc = 0x79ac7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962688));
    // 0x79ac80: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79ac80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x79ac84: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79ac84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x79ac88: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79ac88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79ac8c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79AC8Cu;
    SET_GPR_U32(ctx, 31, 0x79AC94u);
    ctx->pc = 0x79AC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC8Cu;
    // 0x79ac90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79AC8Cu, 0x79AC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC94u;
label_79ac94:
    // 0x79ac94: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79ac94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79ac98: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79AC98u;
    SET_GPR_U32(ctx, 31, 0x79ACA0u);
    ctx->pc = 0x79AC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC98u;
    // 0x79ac9c: 0x27c5bcc0  addiu       $a1, $fp, -0x4340 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294950080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79AC98u, 0x79ACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACA0u;
label_79aca0:
    // 0x79aca0: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x79ACA0u;
    SET_GPR_U32(ctx, 31, 0x79ACA8u);
    ctx->pc = 0x79ACA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACA0u;
    // 0x79aca4: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79ACA0u, 0x79ACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACA8u;
label_79aca8:
    // 0x79aca8: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79ACA8u;
    SET_GPR_U32(ctx, 31, 0x79ACB0u);
    ctx->pc = 0x79ACACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACA8u;
    // 0x79acac: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79ACA8u, 0x79ACB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACB0u;
label_79acb0:
    // 0x79acb0: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79acb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79acb4: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79ACB4u;
    SET_GPR_U32(ctx, 31, 0x79ACBCu);
    ctx->pc = 0x79ACB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACB4u;
    // 0x79acb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79ACB4u, 0x79ACBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACBCu;
label_79acbc:
    // 0x79acbc: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79acbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79acc0: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79acc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79acc4: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79ACC4u;
    SET_GPR_U32(ctx, 31, 0x79ACCCu);
    ctx->pc = 0x79ACC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACC4u;
    // 0x79acc8: 0x2445bcc8  addiu       $a1, $v0, -0x4338 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79ACC4u, 0x79ACCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACCCu;
label_79accc:
    // 0x79accc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79acccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79acd0: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79ACD0u;
    SET_GPR_U32(ctx, 31, 0x79ACD8u);
    ctx->pc = 0x79ACD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACD0u;
    // 0x79acd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79ACD0u, 0x79ACD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACD8u;
label_79acd8:
    // 0x79acd8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79acd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79acdc: 0xc0a581c  jal         func_296070
    ctx->pc = 0x79ACDCu;
    SET_GPR_U32(ctx, 31, 0x79ACE4u);
    ctx->pc = 0x79ACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACDCu;
    // 0x79ace0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296070u, 0x79ACDCu, 0x79ACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACE4u;
label_79ace4:
    // 0x79ace4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79ace4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ace8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x79ace8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79acec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79acecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79acf0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79acf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79acf4: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79ACF4u;
    SET_GPR_U32(ctx, 31, 0x79ACFCu);
    ctx->pc = 0x79ACF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACF4u;
    // 0x79acf8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79ACF4u, 0x79ACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACFCu;
label_79acfc:
    // 0x79acfc: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x79ACFCu;
    SET_GPR_U32(ctx, 31, 0x79AD04u);
    ctx->pc = 0x79AD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACFCu;
    // 0x79ad00: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79ACFCu, 0x79AD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD04u;
label_79ad04:
    // 0x79ad04: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79AD04u;
    SET_GPR_U32(ctx, 31, 0x79AD0Cu);
    ctx->pc = 0x79AD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD04u;
    // 0x79ad08: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79AD04u, 0x79AD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD0Cu;
label_79ad0c:
    // 0x79ad0c: 0x8ea3bd80  lw          $v1, -0x4280($s5)
    ctx->pc = 0x79ad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950272)));
    // 0x79ad10: 0x2407ffbf  addiu       $a3, $zero, -0x41
    ctx->pc = 0x79ad10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x79ad14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79ad14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79ad18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ad1c: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x79ad1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x79ad20: 0x8cc205b8  lw          $v0, 0x5B8($a2)
    ctx->pc = 0x79ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1464)));
    // 0x79ad24: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x79ad24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x79ad28: 0xacc205b8  sw          $v0, 0x5B8($a2)
    ctx->pc = 0x79ad28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1464), GPR_U32(ctx, 2));
    // 0x79ad2c: 0x8ea3bd80  lw          $v1, -0x4280($s5)
    ctx->pc = 0x79ad2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950272)));
    // 0x79ad30: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x79ad30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79ad34: 0x8cc205b8  lw          $v0, 0x5B8($a2)
    ctx->pc = 0x79ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1464)));
    // 0x79ad38: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x79ad38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x79ad3c: 0xacc205b8  sw          $v0, 0x5B8($a2)
    ctx->pc = 0x79ad3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1464), GPR_U32(ctx, 2));
    // 0x79ad40: 0x8ea3bd80  lw          $v1, -0x4280($s5)
    ctx->pc = 0x79ad40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950272)));
    // 0x79ad44: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x79ad44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x79ad48: 0x8cc205b8  lw          $v0, 0x5B8($a2)
    ctx->pc = 0x79ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1464)));
    // 0x79ad4c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x79ad4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x79ad50: 0xc0a588c  jal         func_296230
    ctx->pc = 0x79AD50u;
    SET_GPR_U32(ctx, 31, 0x79AD58u);
    ctx->pc = 0x79AD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD50u;
    // 0x79ad54: 0xacc205b8  sw          $v0, 0x5B8($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 1464), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296230u, 0x79AD50u, 0x79AD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD58u;
label_79ad58:
    // 0x79ad58: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79AD58u;
    SET_GPR_U32(ctx, 31, 0x79AD60u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79AD58u, 0x79AD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD60u;
label_79ad60:
    // 0x79ad60: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x79ad60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79ad64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79ad64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad68: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79ad68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79ad6c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79ad6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79ad70: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79AD70u;
    SET_GPR_U32(ctx, 31, 0x79AD78u);
    ctx->pc = 0x79AD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD70u;
    // 0x79ad74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79AD70u, 0x79AD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD78u;
label_79ad78:
    // 0x79ad78: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79AD78u;
    SET_GPR_U32(ctx, 31, 0x79AD80u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79AD78u, 0x79AD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD80u;
label_79ad80:
    // 0x79ad80: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x79ad80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79ad84: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79ad84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79ad88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79ad88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad8c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79ad8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79ad90: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79AD90u;
    SET_GPR_U32(ctx, 31, 0x79AD98u);
    ctx->pc = 0x79AD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD90u;
    // 0x79ad94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79AD90u, 0x79AD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD98u;
label_79ad98:
    // 0x79ad98: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79ad98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x79ad9c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x79ad9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x79ada0: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x79ada0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79ada4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x79ada4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x79ada8: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x79ada8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x79adac: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x79adacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x79adb0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79adb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79adb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79adb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79adb8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79adbc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x79adbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79adc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79adc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79adc4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79adc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79adc8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79adc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79adcc: 0x3c0142ac  lui         $at, 0x42AC
    ctx->pc = 0x79adccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17068 << 16));
    // 0x79add0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79add0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79add4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79add4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x79add8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79add8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79addc: 0x3c014046  lui         $at, 0x4046
    ctx->pc = 0x79addcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16454 << 16));
    // 0x79ade0: 0x3421d3f2  ori         $at, $at, 0xD3F2
    ctx->pc = 0x79ade0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54258);
    // 0x79ade4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79ade4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79ade8: 0x8c43d6e8  lw          $v1, -0x2918($v0)
    ctx->pc = 0x79ade8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x79adec: 0x8c621f20  lw          $v0, 0x1F20($v1)
    ctx->pc = 0x79adecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7968)));
    // 0x79adf0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x79adf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x79adf4: 0xac621f20  sw          $v0, 0x1F20($v1)
    ctx->pc = 0x79adf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7968), GPR_U32(ctx, 2));
    // 0x79adf8: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x79adf8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x79adfc: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x79adfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x79ae00: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x79ae00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x79ae04: 0xe602000c  swc1        $f2, 0xC($s0)
    ctx->pc = 0x79ae04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x79ae08: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x79ae08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x79ae0c: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x79ae0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x79ae10: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x79ae10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x79ae14: 0xc1e6e3e  jal         func_79B8F8
    ctx->pc = 0x79AE14u;
    SET_GPR_U32(ctx, 31, 0x79AE1Cu);
    ctx->pc = 0x79AE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE14u;
    // 0x79ae18: 0xe622000c  swc1        $f2, 0xC($s1) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B8F8u, 0x79AE14u, 0x79AE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE1Cu;
label_79ae1c:
    // 0x79ae1c: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79ae20: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79AE20u;
    SET_GPR_U32(ctx, 31, 0x79AE28u);
    ctx->pc = 0x79AE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE20u;
    // 0x79ae24: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79AE20u, 0x79AE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE28u;
label_79ae28:
    // 0x79ae28: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x79ae28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x79ae2c: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x79ae2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x79ae30: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x79ae30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x79ae34: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x79ae34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79ae38: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x79ae38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79ae3c: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x79ae3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79ae40: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x79ae40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79ae44: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x79ae44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79ae48: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x79ae48u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79ae4c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x79ae4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79ae50: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x79ae50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79ae54: 0x3e00008  jr          $ra
    ctx->pc = 0x79AE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE54u;
        // 0x79ae58: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AE5Cu;
    // 0x79ae5c: 0x0  nop
    ctx->pc = 0x79ae5cu;
    // NOP
    ctx->pc = 0x79ae60u;
}
} // namespace gh_r201
