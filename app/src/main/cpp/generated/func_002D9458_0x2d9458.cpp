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

// Function: func_002D9458
// Address: 0x2d9458 - 0x2d9778
void func_002D9458_0x2d9458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D9458_0x2d9458");
#endif

    switch (ctx->pc) {
        case 0x2d9600u: goto label_2d9600;
        case 0x2d96c0u: goto label_2d96c0;
        case 0x2d9730u: goto label_2d9730;
        default: break;
    }

    ctx->pc = 0x2d9458u;

    // 0x2d9458: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2d9458u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d945c: 0x24a70030  addiu       $a3, $a1, 0x30
    ctx->pc = 0x2d945cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2d9460: 0x24860030  addiu       $a2, $a0, 0x30
    ctx->pc = 0x2d9460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2d9464: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2d9464u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9468: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x2d9468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2d946c: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x2d946cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d9470: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x2d9470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2d9474: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2d9474u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9478: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x2d9478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x2d947c: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x2d947cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d9480: 0x90a30004  lbu         $v1, 0x4($a1)
    ctx->pc = 0x2d9480u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d9484: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x2d9484u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9488: 0x90a20005  lbu         $v0, 0x5($a1)
    ctx->pc = 0x2d9488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x2d948c: 0xa0820005  sb          $v0, 0x5($a0)
    ctx->pc = 0x2d948cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d9490: 0x90a30006  lbu         $v1, 0x6($a1)
    ctx->pc = 0x2d9490u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2d9494: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x2d9494u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9498: 0x90a20007  lbu         $v0, 0x7($a1)
    ctx->pc = 0x2d9498u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x2d949c: 0xa0820007  sb          $v0, 0x7($a0)
    ctx->pc = 0x2d949cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d94a0: 0x90a30008  lbu         $v1, 0x8($a1)
    ctx->pc = 0x2d94a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d94a4: 0xa0830008  sb          $v1, 0x8($a0)
    ctx->pc = 0x2d94a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d94a8: 0x90a20009  lbu         $v0, 0x9($a1)
    ctx->pc = 0x2d94a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x2d94ac: 0xa0820009  sb          $v0, 0x9($a0)
    ctx->pc = 0x2d94acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d94b0: 0x90a3000a  lbu         $v1, 0xA($a1)
    ctx->pc = 0x2d94b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x2d94b4: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x2d94b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d94b8: 0x90a2000b  lbu         $v0, 0xB($a1)
    ctx->pc = 0x2d94b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 11)));
    // 0x2d94bc: 0xa082000b  sb          $v0, 0xB($a0)
    ctx->pc = 0x2d94bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d94c0: 0x90a3000c  lbu         $v1, 0xC($a1)
    ctx->pc = 0x2d94c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2d94c4: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x2d94c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d94c8: 0x90a2000d  lbu         $v0, 0xD($a1)
    ctx->pc = 0x2d94c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13)));
    // 0x2d94cc: 0xa082000d  sb          $v0, 0xD($a0)
    ctx->pc = 0x2d94ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d94d0: 0x90a3000e  lbu         $v1, 0xE($a1)
    ctx->pc = 0x2d94d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x2d94d4: 0xa083000e  sb          $v1, 0xE($a0)
    ctx->pc = 0x2d94d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d94d8: 0x90a2000f  lbu         $v0, 0xF($a1)
    ctx->pc = 0x2d94d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 15)));
    // 0x2d94dc: 0xa082000f  sb          $v0, 0xF($a0)
    ctx->pc = 0x2d94dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d94e0: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x2d94e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d94e4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2d94e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2d94e8: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x2d94e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d94ec: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x2d94ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2d94f0: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2d94f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d94f4: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x2d94f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2d94f8: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x2d94f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d94fc: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x2d94fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x2d9500: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x2d9500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d9504: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2d9504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2d9508: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x2d9508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d950c: 0x10c70007  beq         $a2, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D950Cu;
    {
        const bool branch_taken_0x2d950c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x2D9510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D950Cu;
        // 0x2d9510: 0xe4810024  swc1        $f1, 0x24($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d950c) {
            ctx->pc = 0x2D952Cu;
            goto label_2d952c;
        }
    }
    ctx->pc = 0x2D9514u;
    // 0x2d9514: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x2d9514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d9518: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x2d9518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x2d951c: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x2d951cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d9520: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x2d9520u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2d9524: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2d9524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d9528: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2d9528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_2d952c:
    // 0x2d952c: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x2d952cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2d9530: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x2d9530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x2d9534: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D9534u;
    {
        const bool branch_taken_0x2d9534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d9534) {
            ctx->pc = 0x2D9538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9534u;
            // 0x2d9538: 0x24830050  addiu       $v1, $a0, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9558u;
            goto label_2d9558;
        }
    }
    ctx->pc = 0x2D953Cu;
    // 0x2d953c: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x2d953cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d9540: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x2d9540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x2d9544: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d9544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d9548: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2d9548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d954c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d954cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d9550: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d9550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d9554: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x2d9554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_2d9558:
    // 0x2d9558: 0x24a20050  addiu       $v0, $a1, 0x50
    ctx->pc = 0x2d9558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x2d955c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D955Cu;
    {
        const bool branch_taken_0x2d955c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d955c) {
            ctx->pc = 0x2D9560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D955Cu;
            // 0x2d9560: 0x90a20060  lbu         $v0, 0x60($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9580u;
            goto label_2d9580;
        }
    }
    ctx->pc = 0x2D9564u;
    // 0x2d9564: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x2d9564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d9568: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x2d9568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x2d956c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d956cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d9570: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2d9570u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d9574: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d9574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d9578: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d9578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d957c: 0x90a20060  lbu         $v0, 0x60($a1)
    ctx->pc = 0x2d957cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 96)));
label_2d9580:
    // 0x2d9580: 0x24870080  addiu       $a3, $a0, 0x80
    ctx->pc = 0x2d9580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x2d9584: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x2d9584u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d9588: 0x24a60080  addiu       $a2, $a1, 0x80
    ctx->pc = 0x2d9588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x2d958c: 0xa0820060  sb          $v0, 0x60($a0)
    ctx->pc = 0x2d958cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d9590: 0x248e7080  addiu       $t6, $a0, 0x7080
    ctx->pc = 0x2d9590u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 28800));
    // 0x2d9594: 0x24af7080  addiu       $t7, $a1, 0x7080
    ctx->pc = 0x2d9594u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), 28800));
    // 0x2d9598: 0x2418ffff  addiu       $t8, $zero, -0x1
    ctx->pc = 0x2d9598u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d959c: 0x90a20061  lbu         $v0, 0x61($a1)
    ctx->pc = 0x2d959cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 97)));
    // 0x2d95a0: 0xa0820061  sb          $v0, 0x61($a0)
    ctx->pc = 0x2d95a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 97), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d95a4: 0x90a30062  lbu         $v1, 0x62($a1)
    ctx->pc = 0x2d95a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 98)));
    // 0x2d95a8: 0xa0830062  sb          $v1, 0x62($a0)
    ctx->pc = 0x2d95a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 98), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d95ac: 0x90a20063  lbu         $v0, 0x63($a1)
    ctx->pc = 0x2d95acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 99)));
    // 0x2d95b0: 0xa0820063  sb          $v0, 0x63($a0)
    ctx->pc = 0x2d95b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 99), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d95b4: 0xc4a00064  lwc1        $f0, 0x64($a1)
    ctx->pc = 0x2d95b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d95b8: 0xe4800064  swc1        $f0, 0x64($a0)
    ctx->pc = 0x2d95b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x2d95bc: 0xc4a10068  lwc1        $f1, 0x68($a1)
    ctx->pc = 0x2d95bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d95c0: 0xe4810068  swc1        $f1, 0x68($a0)
    ctx->pc = 0x2d95c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x2d95c4: 0x90a2006c  lbu         $v0, 0x6C($a1)
    ctx->pc = 0x2d95c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x2d95c8: 0xa082006c  sb          $v0, 0x6C($a0)
    ctx->pc = 0x2d95c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 108), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d95cc: 0x90a3006d  lbu         $v1, 0x6D($a1)
    ctx->pc = 0x2d95ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 109)));
    // 0x2d95d0: 0xa083006d  sb          $v1, 0x6D($a0)
    ctx->pc = 0x2d95d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 109), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d95d4: 0x90a2006e  lbu         $v0, 0x6E($a1)
    ctx->pc = 0x2d95d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 110)));
    // 0x2d95d8: 0xa082006e  sb          $v0, 0x6E($a0)
    ctx->pc = 0x2d95d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 110), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d95dc: 0x90a3006f  lbu         $v1, 0x6F($a1)
    ctx->pc = 0x2d95dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 111)));
    // 0x2d95e0: 0xa083006f  sb          $v1, 0x6F($a0)
    ctx->pc = 0x2d95e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 111), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d95e4: 0xc4a00070  lwc1        $f0, 0x70($a1)
    ctx->pc = 0x2d95e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d95e8: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x2d95e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x2d95ec: 0xc4a10074  lwc1        $f1, 0x74($a1)
    ctx->pc = 0x2d95ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d95f0: 0xe4810074  swc1        $f1, 0x74($a0)
    ctx->pc = 0x2d95f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x2d95f4: 0x8ca20078  lw          $v0, 0x78($a1)
    ctx->pc = 0x2d95f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 120)));
    // 0x2d95f8: 0xac820078  sw          $v0, 0x78($a0)
    ctx->pc = 0x2d95f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 2));
    // 0x2d95fc: 0x0  nop
    ctx->pc = 0x2d95fcu;
    // NOP
label_2d9600:
    // 0x2d9600: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x2d9600u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d9604: 0x24e90010  addiu       $t1, $a3, 0x10
    ctx->pc = 0x2d9604u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2d9608: 0x24c80010  addiu       $t0, $a2, 0x10
    ctx->pc = 0x2d9608u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2d960c: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x2d960cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d9610: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x2d9610u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2d9614: 0xa4e30002  sh          $v1, 0x2($a3)
    ctx->pc = 0x2d9614u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d9618: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2d9618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2d961c: 0x11280007  beq         $t1, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D961Cu;
    {
        const bool branch_taken_0x2d961c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 8));
        ctx->pc = 0x2D9620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D961Cu;
        // 0x2d9620: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d961c) {
            ctx->pc = 0x2D963Cu;
            goto label_2d963c;
        }
    }
    ctx->pc = 0x2D9624u;
    // 0x2d9624: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2d9624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d9628: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x2d9628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x2d962c: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x2d962cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d9630: 0xe5210004  swc1        $f1, 0x4($t1)
    ctx->pc = 0x2d9630u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x2d9634: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x2d9634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d9638: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x2d9638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
label_2d963c:
    // 0x2d963c: 0x24e30020  addiu       $v1, $a3, 0x20
    ctx->pc = 0x2d963cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2d9640: 0x24c20020  addiu       $v0, $a2, 0x20
    ctx->pc = 0x2d9640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2d9644: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D9644u;
    {
        const bool branch_taken_0x2d9644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d9644) {
            ctx->pc = 0x2D9648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9644u;
            // 0x2d9648: 0x24e30030  addiu       $v1, $a3, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9668u;
            goto label_2d9668;
        }
    }
    ctx->pc = 0x2D964Cu;
    // 0x2d964c: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x2d964cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d9650: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x2d9650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x2d9654: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d9654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d9658: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2d9658u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d965c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d965cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d9660: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d9660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d9664: 0x24e30030  addiu       $v1, $a3, 0x30
    ctx->pc = 0x2d9664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
label_2d9668:
    // 0x2d9668: 0x24c20030  addiu       $v0, $a2, 0x30
    ctx->pc = 0x2d9668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x2d966c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D966Cu;
    {
        const bool branch_taken_0x2d966c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d966c) {
            ctx->pc = 0x2D9670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D966Cu;
            // 0x2d9670: 0xc4c00040  lwc1        $f0, 0x40($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9690u;
            goto label_2d9690;
        }
    }
    ctx->pc = 0x2D9674u;
    // 0x2d9674: 0xc4c00030  lwc1        $f0, 0x30($a2)
    ctx->pc = 0x2d9674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d9678: 0xe4e00030  swc1        $f0, 0x30($a3)
    ctx->pc = 0x2d9678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x2d967c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d967cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d9680: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2d9680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d9684: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d9684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d9688: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d9688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d968c: 0xc4c00040  lwc1        $f0, 0x40($a2)
    ctx->pc = 0x2d968cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d9690:
    // 0x2d9690: 0x254bffff  addiu       $t3, $t2, -0x1
    ctx->pc = 0x2d9690u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2d9694: 0x24e8004c  addiu       $t0, $a3, 0x4C
    ctx->pc = 0x2d9694u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 76));
    // 0x2d9698: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2d9698u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d969c: 0xe4e00040  swc1        $f0, 0x40($a3)
    ctx->pc = 0x2d969cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 64), bits); }
    // 0x2d96a0: 0x24c3004c  addiu       $v1, $a2, 0x4C
    ctx->pc = 0x2d96a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 76));
    // 0x2d96a4: 0x24ed0070  addiu       $t5, $a3, 0x70
    ctx->pc = 0x2d96a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
    // 0x2d96a8: 0x24cc0070  addiu       $t4, $a2, 0x70
    ctx->pc = 0x2d96a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x2d96ac: 0xc4c10044  lwc1        $f1, 0x44($a2)
    ctx->pc = 0x2d96acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d96b0: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x2d96b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d96b4: 0xe4e10044  swc1        $f1, 0x44($a3)
    ctx->pc = 0x2d96b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 68), bits); }
    // 0x2d96b8: 0xc4c00048  lwc1        $f0, 0x48($a2)
    ctx->pc = 0x2d96b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d96bc: 0xe4e00048  swc1        $f0, 0x48($a3)
    ctx->pc = 0x2d96bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 72), bits); }
label_2d96c0:
    // 0x2d96c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d96c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d96c4: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x2d96c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x2d96c8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2d96c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2d96cc: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x2d96ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x2d96d0: 0x152afffb  bne         $t1, $t2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D96D0u;
    {
        const bool branch_taken_0x2d96d0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 10));
        ctx->pc = 0x2D96D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96D0u;
        // 0x2d96d4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d96d0) {
            ctx->pc = 0x2D96C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d96c0;
        }
    }
    ctx->pc = 0x2D96D8u;
    // 0x2d96d8: 0x8cc30054  lw          $v1, 0x54($a2)
    ctx->pc = 0x2d96d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x2d96dc: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x2d96dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d96e0: 0xace30054  sw          $v1, 0x54($a3)
    ctx->pc = 0x2d96e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 3));
    // 0x2d96e4: 0x8cc20058  lw          $v0, 0x58($a2)
    ctx->pc = 0x2d96e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x2d96e8: 0xace20058  sw          $v0, 0x58($a3)
    ctx->pc = 0x2d96e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 88), GPR_U32(ctx, 2));
    // 0x2d96ec: 0x94c3005c  lhu         $v1, 0x5C($a2)
    ctx->pc = 0x2d96ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 92)));
    // 0x2d96f0: 0xa4e3005c  sh          $v1, 0x5C($a3)
    ctx->pc = 0x2d96f0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d96f4: 0x94c2005e  lhu         $v0, 0x5E($a2)
    ctx->pc = 0x2d96f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 94)));
    // 0x2d96f8: 0xa4e2005e  sh          $v0, 0x5E($a3)
    ctx->pc = 0x2d96f8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 94), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d96fc: 0x90c30060  lbu         $v1, 0x60($a2)
    ctx->pc = 0x2d96fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x2d9700: 0xa0e30060  sb          $v1, 0x60($a3)
    ctx->pc = 0x2d9700u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9704: 0x90c20061  lbu         $v0, 0x61($a2)
    ctx->pc = 0x2d9704u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 97)));
    // 0x2d9708: 0xa0e20061  sb          $v0, 0x61($a3)
    ctx->pc = 0x2d9708u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 97), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d970c: 0x94c30062  lhu         $v1, 0x62($a2)
    ctx->pc = 0x2d970cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 98)));
    // 0x2d9710: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x2d9710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9714: 0xa4e30062  sh          $v1, 0x62($a3)
    ctx->pc = 0x2d9714u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 98), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d9718: 0x1558ffb9  bne         $t2, $t8, . + 4 + (-0x47 << 2)
    ctx->pc = 0x2D9718u;
    {
        const bool branch_taken_0x2d9718 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 24));
        ctx->pc = 0x2D971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9718u;
        // 0x2d971c: 0x1a0382d  daddu       $a3, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9718) {
            ctx->pc = 0x2D9600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9600;
        }
    }
    ctx->pc = 0x2D9720u;
    // 0x2d9720: 0x1c0182d  daddu       $v1, $t6, $zero
    ctx->pc = 0x2d9720u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9724: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x2d9724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9728: 0x2406002f  addiu       $a2, $zero, 0x2F
    ctx->pc = 0x2d9728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2d972c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2d972cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d9730:
    // 0x2d9730: 0x68480007  ldl         $t0, 0x7($v0)
    ctx->pc = 0x2d9730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2d9734: 0x6c480000  ldr         $t0, 0x0($v0)
    ctx->pc = 0x2d9734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2d9738: 0x6849000f  ldl         $t1, 0xF($v0)
    ctx->pc = 0x2d9738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2d973c: 0x6c490008  ldr         $t1, 0x8($v0)
    ctx->pc = 0x2d973cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2d9740: 0x8c4a0010  lw          $t2, 0x10($v0)
    ctx->pc = 0x2d9740u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d9744: 0xb0680007  sdl         $t0, 0x7($v1)
    ctx->pc = 0x2d9744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d9748: 0xb4680000  sdr         $t0, 0x0($v1)
    ctx->pc = 0x2d9748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d974c: 0xb069000f  sdl         $t1, 0xF($v1)
    ctx->pc = 0x2d974cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d9750: 0xb4690008  sdr         $t1, 0x8($v1)
    ctx->pc = 0x2d9750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d9754: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2d9754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2d9758: 0xac6a0010  sw          $t2, 0x10($v1)
    ctx->pc = 0x2d9758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 10));
    // 0x2d975c: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x2d975cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x2d9760: 0x14c7fff3  bne         $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x2D9760u;
    {
        const bool branch_taken_0x2d9760 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x2D9764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9760u;
        // 0x2d9764: 0x24420014  addiu       $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9760) {
            ctx->pc = 0x2D9730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9730;
        }
    }
    ctx->pc = 0x2D9768u;
    // 0x2d9768: 0x8ca37440  lw          $v1, 0x7440($a1)
    ctx->pc = 0x2d9768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 29760)));
    // 0x2d976c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d976cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9770: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9770u;
        // 0x2d9774: 0xac837440  sw          $v1, 0x7440($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 29760), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9778u;
}
