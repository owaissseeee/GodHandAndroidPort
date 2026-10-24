#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r021_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r021
{
// Function: func_0079B450
// Address: 0x79b450 - 0x79b978
void func_0079B450_0x79b450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B450_0x79b450");
#endif

    ctx->pc = 0x79b450u;

    // 0x79b450: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x79b450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79b454: 0x14a20146  bne         $a1, $v0, . + 4 + (0x146 << 2)
    ctx->pc = 0x79B454u;
    {
        const bool branch_taken_0x79b454 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x79b454) {
            ctx->pc = 0x79B970u;
            goto label_79b970;
        }
    }
    ctx->pc = 0x79B45Cu;
    // 0x79b45c: 0x10800144  beqz        $a0, . + 4 + (0x144 << 2)
    ctx->pc = 0x79B45Cu;
    {
        const bool branch_taken_0x79b45c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B45Cu;
        // 0x79b460: 0x3c04007a  lui         $a0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b45c) {
            ctx->pc = 0x79B970u;
            goto label_79b970;
        }
    }
    ctx->pc = 0x79B464u;
    // 0x79b464: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x79b464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x79b468: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b46c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79b46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79b470: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79b474: 0x2482c080  addiu       $v0, $a0, -0x3F80
    ctx->pc = 0x79b474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951040));
    // 0x79b478: 0x3c014398  lui         $at, 0x4398
    ctx->pc = 0x79b478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17304 << 16));
    // 0x79b47c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b47cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b480: 0x3c06007a  lui         $a2, 0x7A
    ctx->pc = 0x79b480u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)122 << 16));
    // 0x79b484: 0xe482c080  swc1        $f2, -0x3F80($a0)
    ctx->pc = 0x79b484u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294951040), bits); }
    // 0x79b488: 0x24c3c180  addiu       $v1, $a2, -0x3E80
    ctx->pc = 0x79b488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951296));
    // 0x79b48c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79b48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79b490: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79b490u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x79b494: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x79b494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x79b498: 0x24e4c280  addiu       $a0, $a3, -0x3D80
    ctx->pc = 0x79b498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951552));
    // 0x79b49c: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79b49cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79b4a0: 0x3c08007a  lui         $t0, 0x7A
    ctx->pc = 0x79b4a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)122 << 16));
    // 0x79b4a4: 0x3c014370  lui         $at, 0x4370
    ctx->pc = 0x79b4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17264 << 16));
    // 0x79b4a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b4a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b4ac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79b4b0: 0x3c014347  lui         $at, 0x4347
    ctx->pc = 0x79b4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17223 << 16));
    // 0x79b4b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b4b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b4b8: 0x2505c2a0  addiu       $a1, $t0, -0x3D60
    ctx->pc = 0x79b4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951584));
    // 0x79b4bc: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x79b4bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79b4c0: 0x3c09007a  lui         $t1, 0x7A
    ctx->pc = 0x79b4c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)122 << 16));
    // 0x79b4c4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x79b4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79b4c8: 0x252ac2c0  addiu       $t2, $t1, -0x3D40
    ctx->pc = 0x79b4c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4294951616));
    // 0x79b4cc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x79b4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x79b4d0: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79b4d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79b4d4: 0x3c0142e8  lui         $at, 0x42E8
    ctx->pc = 0x79b4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17128 << 16));
    // 0x79b4d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b4d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b4dc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79b4e0: 0x3c014332  lui         $at, 0x4332
    ctx->pc = 0x79b4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17202 << 16));
    // 0x79b4e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b4e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b4e8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x79b4e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79b4ec: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79b4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79b4f0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x79b4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x79b4f4: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79b4f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79b4f8: 0x3c014305  lui         $at, 0x4305
    ctx->pc = 0x79b4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17157 << 16));
    // 0x79b4fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b4fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b500: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79b500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79b504: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x79b504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x79b508: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b50c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x79b50cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79b510: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79b510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79b514: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x79b514u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x79b518: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79b518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79b51c: 0x3c014328  lui         $at, 0x4328
    ctx->pc = 0x79b51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17192 << 16));
    // 0x79b520: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b524: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79b524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79b528: 0x3c0142f2  lui         $at, 0x42F2
    ctx->pc = 0x79b528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17138 << 16));
    // 0x79b52c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b52cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b530: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x79b530u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79b534: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79b534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79b538: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x79b538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x79b53c: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79b53cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79b540: 0x3c01433b  lui         $at, 0x433B
    ctx->pc = 0x79b540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17211 << 16));
    // 0x79b544: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b548: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79b548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79b54c: 0x3c01432c  lui         $at, 0x432C
    ctx->pc = 0x79b54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17196 << 16));
    // 0x79b550: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b554: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x79b554u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79b558: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79b558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79b55c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x79b55cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x79b560: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79b560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79b564: 0x3c01436b  lui         $at, 0x436B
    ctx->pc = 0x79b564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17259 << 16));
    // 0x79b568: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b56c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79b570: 0x3c01430a  lui         $at, 0x430A
    ctx->pc = 0x79b570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17162 << 16));
    // 0x79b574: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b578: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x79b578u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79b57c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79b57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79b580: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x79b580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x79b584: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79b584u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79b588: 0x3c01438b  lui         $at, 0x438B
    ctx->pc = 0x79b588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17291 << 16));
    // 0x79b58c: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x79b58cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x79b590: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b594: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79b594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79b598: 0x3c014320  lui         $at, 0x4320
    ctx->pc = 0x79b598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17184 << 16));
    // 0x79b59c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b59cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b5a0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x79b5a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79b5a4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79b5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79b5a8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x79b5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x79b5ac: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79b5acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79b5b0: 0x3c01439b  lui         $at, 0x439B
    ctx->pc = 0x79b5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17307 << 16));
    // 0x79b5b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b5b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b5b8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79b5bc: 0x3c01434c  lui         $at, 0x434C
    ctx->pc = 0x79b5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17228 << 16));
    // 0x79b5c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b5c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b5c4: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x79b5c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79b5c8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79b5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79b5cc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x79b5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x79b5d0: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79b5d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79b5d4: 0x3c014339  lui         $at, 0x4339
    ctx->pc = 0x79b5d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17209 << 16));
    // 0x79b5d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b5d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b5dc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79b5e0: 0x3c0143a7  lui         $at, 0x43A7
    ctx->pc = 0x79b5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17319 << 16));
    // 0x79b5e4: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x79b5e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x79b5e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b5e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b5ec: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79b5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79b5f0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x79b5f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79b5f4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x79b5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x79b5f8: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79b5f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79b5fc: 0x3c014317  lui         $at, 0x4317
    ctx->pc = 0x79b5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17175 << 16));
    // 0x79b600: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b604: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79b604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79b608: 0x3c01439c  lui         $at, 0x439C
    ctx->pc = 0x79b608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17308 << 16));
    // 0x79b60c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b60cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b610: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79b610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79b614: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x79b614u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79b618: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x79b618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x79b61c: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79b61cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79b620: 0x3c0142c2  lui         $at, 0x42C2
    ctx->pc = 0x79b620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17090 << 16));
    // 0x79b624: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b628: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79b628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79b62c: 0x3c0143a2  lui         $at, 0x43A2
    ctx->pc = 0x79b62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17314 << 16));
    // 0x79b630: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x79b630u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x79b634: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b638: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79b638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79b63c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x79b63cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79b640: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x79b640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x79b644: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79b644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79b648: 0x3c0142ba  lui         $at, 0x42BA
    ctx->pc = 0x79b648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17082 << 16));
    // 0x79b64c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b64cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b650: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79b650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79b654: 0x3c0143b3  lui         $at, 0x43B3
    ctx->pc = 0x79b654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17331 << 16));
    // 0x79b658: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b65c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79b65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79b660: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x79b660u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79b664: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x79b664u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x79b668: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79b668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79b66c: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x79b66cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x79b670: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b674: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79b674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79b678: 0x3c0143bc  lui         $at, 0x43BC
    ctx->pc = 0x79b678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17340 << 16));
    // 0x79b67c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b67cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b680: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79b680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79b684: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x79b684u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79b688: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x79b688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x79b68c: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79b68cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79b690: 0x3c0142d4  lui         $at, 0x42D4
    ctx->pc = 0x79b690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17108 << 16));
    // 0x79b694: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b698: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79b698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79b69c: 0x3c0143ca  lui         $at, 0x43CA
    ctx->pc = 0x79b69cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17354 << 16));
    // 0x79b6a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b6a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b6a4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79b6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79b6a8: 0x3c01c334  lui         $at, 0xC334
    ctx->pc = 0x79b6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49972 << 16));
    // 0x79b6ac: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x79b6acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x79b6b0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x79b6b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79b6b4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x79b6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x79b6b8: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79b6b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79b6bc: 0x3c014218  lui         $at, 0x4218
    ctx->pc = 0x79b6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16920 << 16));
    // 0x79b6c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b6c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b6c4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79b6c8: 0xe4c4c180  swc1        $f4, -0x3E80($a2)
    ctx->pc = 0x79b6c8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C180u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C180u, _value); } while (0); }
    // 0x79b6cc: 0x3c0143e3  lui         $at, 0x43E3
    ctx->pc = 0x79b6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17379 << 16));
    // 0x79b6d0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79b6d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79b6d4: 0x3c014264  lui         $at, 0x4264
    ctx->pc = 0x79b6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16996 << 16));
    // 0x79b6d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b6d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b6dc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x79b6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C184u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C184u, _value); } while (0); }
    // 0x79b6e0: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x79b6e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79b6e4: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x79b6e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79b6e8: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79b6e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79b6ec: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x79b6ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C188u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C188u, _value); } while (0);
    // 0x79b6f0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x79b6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x79b6f4: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x79b6f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C18Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C18Cu, _value); } while (0); }
    // 0x79b6f8: 0x3c01c2a4  lui         $at, 0xC2A4
    ctx->pc = 0x79b6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49828 << 16));
    // 0x79b6fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b6fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b700: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x79b700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79b704: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x79b704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x79b708: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b70c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x79b70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C194u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C194u, _value); } while (0); }
    // 0x79b710: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x79b710u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C190u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C190u, _value); } while (0); }
    // 0x79b714: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x79b714u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C198u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C198u, _value); } while (0);
    // 0x79b718: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x79b718u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C19Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C19Cu, _value); } while (0); }
    // 0x79b71c: 0x3c01c22c  lui         $at, 0xC22C
    ctx->pc = 0x79b71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49708 << 16));
    // 0x79b720: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b724: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x79b724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79b728: 0x3c01c27c  lui         $at, 0xC27C
    ctx->pc = 0x79b728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49788 << 16));
    // 0x79b72c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b72cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b730: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x79b730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C1A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C1A4u, _value); } while (0); }
    // 0x79b734: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x79b734u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C1A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C1A0u, _value); } while (0); }
    // 0x79b738: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x79b738u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C1A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C1A8u, _value); } while (0);
    // 0x79b73c: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x79b73cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C1ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C1ACu, _value); } while (0); }
    // 0x79b740: 0x3c01c25c  lui         $at, 0xC25C
    ctx->pc = 0x79b740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49756 << 16));
    // 0x79b744: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b748: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x79b748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79b74c: 0x3c01427c  lui         $at, 0x427C
    ctx->pc = 0x79b74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17020 << 16));
    // 0x79b750: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b754: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x79b754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C1B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C1B4u, _value); } while (0); }
    // 0x79b758: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x79b758u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C1B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C1B0u, _value); } while (0); }
    // 0x79b75c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x79b75cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C1B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C1B8u, _value); } while (0);
    // 0x79b760: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x79b760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C1BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C1BCu, _value); } while (0); }
    // 0x79b764: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x79b764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x79b768: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b76c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x79b76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79b770: 0x3c01c100  lui         $at, 0xC100
    ctx->pc = 0x79b770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49408 << 16));
    // 0x79b774: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x79b774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x79b778: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x79b778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C1C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C1C4u, _value); } while (0); }
    // 0x79b77c: 0xe4650000  swc1        $f5, 0x0($v1)
    ctx->pc = 0x79b77cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C1C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C1C0u, _value); } while (0); }
    // 0x79b780: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x79b780u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C1C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C1C8u, _value); } while (0);
    // 0x79b784: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x79b784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C1CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C1CCu, _value); } while (0); }
    // 0x79b788: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x79b788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x79b78c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b78cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b790: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x79b790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79b794: 0x3c0142b6  lui         $at, 0x42B6
    ctx->pc = 0x79b794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17078 << 16));
    // 0x79b798: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b79c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x79b79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C1D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C1D4u, _value); } while (0); }
    // 0x79b7a0: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x79b7a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C1D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C1D0u, _value); } while (0); }
    // 0x79b7a4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x79b7a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C1D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C1D8u, _value); } while (0);
    // 0x79b7a8: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x79b7a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C1DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C1DCu, _value); } while (0); }
    // 0x79b7ac: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x79b7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x79b7b0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79b7b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79b7b4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x79b7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79b7b8: 0x3c01c28e  lui         $at, 0xC28E
    ctx->pc = 0x79b7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49806 << 16));
    // 0x79b7bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b7bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b7c0: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x79b7c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C1E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C1E0u, _value); } while (0); }
    // 0x79b7c4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x79b7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C1E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C1E4u, _value); } while (0); }
    // 0x79b7c8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x79b7c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C1E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C1E8u, _value); } while (0);
    // 0x79b7cc: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x79b7ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C1ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C1ECu, _value); } while (0); }
    // 0x79b7d0: 0x3c014230  lui         $at, 0x4230
    ctx->pc = 0x79b7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16944 << 16));
    // 0x79b7d4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x79b7d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x79b7d8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x79b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79b7dc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x79b7dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C1F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C1F0u, _value); } while (0);
    // 0x79b7e0: 0xe4660004  swc1        $f6, 0x4($v1)
    ctx->pc = 0x79b7e0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C1F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C1F4u, _value); } while (0); }
    // 0x79b7e4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x79b7e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C1F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C1F8u, _value); } while (0);
    // 0x79b7e8: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x79b7e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C1FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C1FCu, _value); } while (0); }
    // 0x79b7ec: 0x3c01c170  lui         $at, 0xC170
    ctx->pc = 0x79b7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49520 << 16));
    // 0x79b7f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b7f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b7f4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x79b7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79b7f8: 0x3c01425c  lui         $at, 0x425C
    ctx->pc = 0x79b7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16988 << 16));
    // 0x79b7fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b7fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b800: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x79b800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C204u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C204u, _value); } while (0); }
    // 0x79b804: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x79b804u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C200u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C200u, _value); } while (0); }
    // 0x79b808: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x79b808u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C208u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C208u, _value); } while (0);
    // 0x79b80c: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x79b80cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C20Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C20Cu, _value); } while (0); }
    // 0x79b810: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x79b810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x79b814: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b818: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x79b818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79b81c: 0x3c01c1a8  lui         $at, 0xC1A8
    ctx->pc = 0x79b81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49576 << 16));
    // 0x79b820: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x79b820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x79b824: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x79b824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C210u, _value); } while (0); }
    // 0x79b828: 0xe4670004  swc1        $f7, 0x4($v1)
    ctx->pc = 0x79b828u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C214u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C214u, _value); } while (0); }
    // 0x79b82c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x79b82cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C218u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C218u, _value); } while (0);
    // 0x79b830: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x79b830u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C21Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C21Cu, _value); } while (0); }
    // 0x79b834: 0x3c01c280  lui         $at, 0xC280
    ctx->pc = 0x79b834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49792 << 16));
    // 0x79b838: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b83c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x79b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79b840: 0x3c01c238  lui         $at, 0xC238
    ctx->pc = 0x79b840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49720 << 16));
    // 0x79b844: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b848: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x79b848u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C220u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C220u, _value); } while (0); }
    // 0x79b84c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x79b84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C224u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C224u, _value); } while (0); }
    // 0x79b850: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x79b850u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C228u, _value); } while (0);
    // 0x79b854: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x79b854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C22Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C22Cu, _value); } while (0); }
    // 0x79b858: 0x3c014130  lui         $at, 0x4130
    ctx->pc = 0x79b858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16688 << 16));
    // 0x79b85c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x79b85cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x79b860: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x79b860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79b864: 0xe4650004  swc1        $f5, 0x4($v1)
    ctx->pc = 0x79b864u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C234u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C234u, _value); } while (0); }
    // 0x79b868: 0xe4640000  swc1        $f4, 0x0($v1)
    ctx->pc = 0x79b868u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C230u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C230u, _value); } while (0); }
    // 0x79b86c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x79b86cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C238u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C238u, _value); } while (0);
    // 0x79b870: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x79b870u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C23Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C23Cu, _value); } while (0); }
    // 0x79b874: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x79b874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x79b878: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b87c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x79b87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79b880: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x79b880u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C244u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C244u, _value); } while (0); }
    // 0x79b884: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x79b884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C240u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C240u, _value); } while (0); }
    // 0x79b888: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x79b888u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C248u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C248u, _value); } while (0);
    // 0x79b88c: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x79b88cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C24Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C24Cu, _value); } while (0); }
    // 0x79b890: 0x3c014150  lui         $at, 0x4150
    ctx->pc = 0x79b890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16720 << 16));
    // 0x79b894: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b898: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x79b898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79b89c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x79b89cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C254u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C254u, _value); } while (0); }
    // 0x79b8a0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x79b8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C250u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C250u, _value); } while (0); }
    // 0x79b8a4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x79b8a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C258u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C258u, _value); } while (0);
    // 0x79b8a8: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x79b8a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C25Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C25Cu, _value); } while (0); }
    // 0x79b8ac: 0x3c0142cc  lui         $at, 0x42CC
    ctx->pc = 0x79b8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17100 << 16));
    // 0x79b8b0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79b8b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79b8b4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x79b8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79b8b8: 0x3c01c2c2  lui         $at, 0xC2C2
    ctx->pc = 0x79b8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49858 << 16));
    // 0x79b8bc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b8bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b8c0: 0x3c01438a  lui         $at, 0x438A
    ctx->pc = 0x79b8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17290 << 16));
    // 0x79b8c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b8c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b8c8: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x79b8c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C264u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C264u, _value); } while (0); }
    // 0x79b8cc: 0xe4660000  swc1        $f6, 0x0($v1)
    ctx->pc = 0x79b8ccu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C260u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C260u, _value); } while (0); }
    // 0x79b8d0: 0xe4e3c280  swc1        $f3, -0x3D80($a3)
    ctx->pc = 0x79b8d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C280u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C280u, _value); } while (0); }
    // 0x79b8d4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x79b8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C284u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C284u, _value); } while (0); }
    // 0x79b8d8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x79b8d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C268u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C268u, _value); } while (0);
    // 0x79b8dc: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x79b8dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C26Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C26Cu, _value); } while (0); }
    // 0x79b8e0: 0x3c01c1d0  lui         $at, 0xC1D0
    ctx->pc = 0x79b8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49616 << 16));
    // 0x79b8e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b8e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b8e8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x79b8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79b8ec: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x79b8ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C288u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C288u, _value); } while (0);
    // 0x79b8f0: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x79b8f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C28Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C28Cu, _value); } while (0); }
    // 0x79b8f4: 0x3c01432b  lui         $at, 0x432B
    ctx->pc = 0x79b8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17195 << 16));
    // 0x79b8f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b8f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b8fc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x79b8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x79b900: 0x3c014355  lui         $at, 0x4355
    ctx->pc = 0x79b900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17237 << 16));
    // 0x79b904: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79b904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79b908: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x79b908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C274u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C274u, _value); } while (0); }
    // 0x79b90c: 0xe4640000  swc1        $f4, 0x0($v1)
    ctx->pc = 0x79b90cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C270u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C270u, _value); } while (0); }
    // 0x79b910: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x79b910u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C27Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C27Cu, _value); } while (0); }
    // 0x79b914: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x79b914u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C290u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C290u, _value); } while (0); }
    // 0x79b918: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x79b918u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C294u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C294u, _value); } while (0); }
    // 0x79b91c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x79b91cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C278u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C278u, _value); } while (0);
    // 0x79b920: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x79b920u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C298u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C298u, _value); } while (0);
    // 0x79b924: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x79b924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C29Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C29Cu, _value); } while (0); }
    // 0x79b928: 0x3c01c180  lui         $at, 0xC180
    ctx->pc = 0x79b928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49536 << 16));
    // 0x79b92c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b92cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b930: 0xe507c2a0  swc1        $f7, -0x3D60($t0)
    ctx->pc = 0x79b930u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C2A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C2A0u, _value); } while (0); }
    // 0x79b934: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x79b934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C2A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C2A4u, _value); } while (0); }
    // 0x79b938: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x79b938u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C2A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C2A8u, _value); } while (0);
    // 0x79b93c: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x79b93cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C2ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C2ACu, _value); } while (0); }
    // 0x79b940: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x79b940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x79b944: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b948: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x79b948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x79b94c: 0x3c01c240  lui         $at, 0xC240
    ctx->pc = 0x79b94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49728 << 16));
    // 0x79b950: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b954: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x79b954u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C2BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C2BCu, _value); } while (0); }
    // 0x79b958: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x79b958u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C2B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C2B0u, _value); } while (0); }
    // 0x79b95c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x79b95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79C2B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C2B4u, _value); } while (0); }
    // 0x79b960: 0xad20c2c0  sw          $zero, -0x3D40($t1)
    ctx->pc = 0x79b960u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C2C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C2C0u, _value); } while (0);
    // 0x79b964: 0xad400008  sw          $zero, 0x8($t2)
    ctx->pc = 0x79b964u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C2C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C2C8u, _value); } while (0);
    // 0x79b968: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x79b968u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C2B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C2B8u, _value); } while (0);
    // 0x79b96c: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x79b96cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C2C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C2C4u, _value); } while (0);
label_79b970:
    // 0x79b970: 0x3e00008  jr          $ra
    ctx->pc = 0x79B970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B978u;
}
} // namespace gh_r021
