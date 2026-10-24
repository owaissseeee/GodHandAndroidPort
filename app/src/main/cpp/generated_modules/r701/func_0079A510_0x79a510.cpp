#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r701_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r701
{
// Function: func_0079A510
// Address: 0x79a510 - 0x79a7d0
void func_0079A510_0x79a510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A510_0x79a510");
#endif

    ctx->pc = 0x79a510u;

    // 0x79a510: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x79a510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79a514: 0x14a200ab  bne         $a1, $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x79A514u;
    {
        const bool branch_taken_0x79a514 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x79a514) {
            ctx->pc = 0x79A7C4u;
            goto label_79a7c4;
        }
    }
    ctx->pc = 0x79A51Cu;
    // 0x79a51c: 0x108000a9  beqz        $a0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x79A51Cu;
    {
        const bool branch_taken_0x79a51c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A51Cu;
        // 0x79a520: 0x3c03007a  lui         $v1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a51c) {
            ctx->pc = 0x79A7C4u;
            goto label_79a7c4;
        }
    }
    ctx->pc = 0x79A524u;
    // 0x79a524: 0x3c01c1c0  lui         $at, 0xC1C0
    ctx->pc = 0x79a524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49600 << 16));
    // 0x79a528: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a52c: 0x3c014244  lui         $at, 0x4244
    ctx->pc = 0x79a52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16964 << 16));
    // 0x79a530: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a534: 0x2462ab00  addiu       $v0, $v1, -0x5500
    ctx->pc = 0x79a534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945536));
    // 0x79a538: 0xe462ab00  swc1        $f2, -0x5500($v1)
    ctx->pc = 0x79a538u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294945536), bits); }
    // 0x79a53c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a540: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a544: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79a548: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79a548u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x79a54c: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79a54cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79a550: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x79a550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
    // 0x79a554: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a558: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79a558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79a55c: 0x3c014240  lui         $at, 0x4240
    ctx->pc = 0x79a55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16960 << 16));
    // 0x79a560: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a564: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x79a564u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79a568: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79a56c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x79a570: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79a570u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79a574: 0x3c01427c  lui         $at, 0x427C
    ctx->pc = 0x79a574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17020 << 16));
    // 0x79a578: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a57c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79a580: 0x3c01c140  lui         $at, 0xC140
    ctx->pc = 0x79a580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49472 << 16));
    // 0x79a584: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a588: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x79a588u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79a58c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x79a58cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79a590: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79a590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x79a594: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79a594u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79a598: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x79a598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x79a59c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79a59cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79a5a0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79a5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79a5a4: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x79a5a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79a5a8: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x79a5a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79a5ac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79a5acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x79a5b0: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79a5b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79a5b4: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x79a5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x79a5b8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x79a5b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x79a5bc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79a5c0: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x79a5c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79a5c4: 0xe4440000  swc1        $f4, 0x0($v0)
    ctx->pc = 0x79a5c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79a5c8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79a5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x79a5cc: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79a5ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79a5d0: 0x3c014294  lui         $at, 0x4294
    ctx->pc = 0x79a5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17044 << 16));
    // 0x79a5d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a5d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a5d8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79a5dc: 0x3c01c0e0  lui         $at, 0xC0E0
    ctx->pc = 0x79a5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49376 << 16));
    // 0x79a5e0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x79a5e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x79a5e4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79a5e8: 0xe4450000  swc1        $f5, 0x0($v0)
    ctx->pc = 0x79a5e8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79a5ec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79a5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x79a5f0: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79a5f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79a5f4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79a5f8: 0x3c014188  lui         $at, 0x4188
    ctx->pc = 0x79a5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16776 << 16));
    // 0x79a5fc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79a5fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79a600: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x79a600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x79a604: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x79a604u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79a608: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79a60c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79a60cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x79a610: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79a610u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79a614: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79a614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79a618: 0x3c0142ce  lui         $at, 0x42CE
    ctx->pc = 0x79a618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17102 << 16));
    // 0x79a61c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a61cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a620: 0xe4440000  swc1        $f4, 0x0($v0)
    ctx->pc = 0x79a620u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79a624: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79a628: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79a628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x79a62c: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79a62cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79a630: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79a630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79a634: 0x3c0142d6  lui         $at, 0x42D6
    ctx->pc = 0x79a634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17110 << 16));
    // 0x79a638: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79a638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79a63c: 0xe4460000  swc1        $f6, 0x0($v0)
    ctx->pc = 0x79a63cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79a640: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79a640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x79a644: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x79a644u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79a648: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79a648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79a64c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79a650: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x79a650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x79a654: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a658: 0xe4450000  swc1        $f5, 0x0($v0)
    ctx->pc = 0x79a658u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79a65c: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x79a65cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79a660: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79a660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x79a664: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79a664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79a668: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79a668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79a66c: 0x3c0141d0  lui         $at, 0x41D0
    ctx->pc = 0x79a66cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16848 << 16));
    // 0x79a670: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79a670u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79a674: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x79a674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x79a678: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x79a678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79a67c: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x79a67cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79a680: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79a680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x79a684: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79a684u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79a688: 0x3c0142e0  lui         $at, 0x42E0
    ctx->pc = 0x79a688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17120 << 16));
    // 0x79a68c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a68cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a690: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79a690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79a694: 0xe4450000  swc1        $f5, 0x0($v0)
    ctx->pc = 0x79a694u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79a698: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79a69c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79a69cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x79a6a0: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79a6a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79a6a4: 0x3c0142f2  lui         $at, 0x42F2
    ctx->pc = 0x79a6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17138 << 16));
    // 0x79a6a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a6a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a6ac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79a6b0: 0x3c01c1c7  lui         $at, 0xC1C7
    ctx->pc = 0x79a6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49607 << 16));
    // 0x79a6b4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x79a6b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x79a6b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a6b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a6bc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79a6c0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x79a6c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79a6c4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79a6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x79a6c8: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79a6c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79a6cc: 0x3c0142ec  lui         $at, 0x42EC
    ctx->pc = 0x79a6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17132 << 16));
    // 0x79a6d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a6d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a6d4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79a6d8: 0x3c01c0dc  lui         $at, 0xC0DC
    ctx->pc = 0x79a6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49372 << 16));
    // 0x79a6dc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79a6dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79a6e0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x79a6e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x79a6e4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79a6e8: 0xe4440000  swc1        $f4, 0x0($v0)
    ctx->pc = 0x79a6e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79a6ec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79a6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x79a6f0: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79a6f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79a6f4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79a6f8: 0x3c0140e3  lui         $at, 0x40E3
    ctx->pc = 0x79a6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16611 << 16));
    // 0x79a6fc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x79a6fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x79a700: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79a700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79a704: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79a708: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x79a708u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79a70c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79a70cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x79a710: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79a710u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79a714: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x79a714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x79a718: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a71c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79a720: 0xe4460000  swc1        $f6, 0x0($v0)
    ctx->pc = 0x79a720u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79a724: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79a728: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79a728u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x79a72c: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79a72cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79a730: 0x3c01c1b8  lui         $at, 0xC1B8
    ctx->pc = 0x79a730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49592 << 16));
    // 0x79a734: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a738: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79a738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79a73c: 0x3c014304  lui         $at, 0x4304
    ctx->pc = 0x79a73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17156 << 16));
    // 0x79a740: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a744: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x79a744u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79a748: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79a74c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x79a750: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79a750u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79a754: 0x3c014303  lui         $at, 0x4303
    ctx->pc = 0x79a754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17155 << 16));
    // 0x79a758: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a75c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79a75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79a760: 0xe4440000  swc1        $f4, 0x0($v0)
    ctx->pc = 0x79a760u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79a764: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79a768: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79a768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x79a76c: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79a76cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79a770: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79a770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79a774: 0x3c0142fa  lui         $at, 0x42FA
    ctx->pc = 0x79a774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17146 << 16));
    // 0x79a778: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a77c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x79a77cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79a780: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79a784: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79a784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x79a788: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79a788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79a78c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79a790: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x79a790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x79a794: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79a794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79a798: 0xe4450000  swc1        $f5, 0x0($v0)
    ctx->pc = 0x79a798u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79a79c: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x79a79cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79a7a0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79a7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x79a7a4: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79a7a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79a7a8: 0x3c014306  lui         $at, 0x4306
    ctx->pc = 0x79a7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17158 << 16));
    // 0x79a7ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a7acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a7b0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79a7b4: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79a7b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79a7b8: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x79a7b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79a7bc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79a7c0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79a7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_79a7c4:
    // 0x79a7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x79A7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A7CCu;
    // 0x79a7cc: 0x0  nop
    ctx->pc = 0x79a7ccu;
    // NOP
    ctx->pc = 0x79a7d0u;
}
} // namespace gh_r701
